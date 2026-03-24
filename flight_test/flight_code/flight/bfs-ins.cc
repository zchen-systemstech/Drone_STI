/*
* Example implementation of BFS INS with Mahony AHRS filter
* 
* This file demonstrates how to integrate a Mahony AHRS filter with the
* 15-state EKF. The AHRS provides fast, robust attitude estimates that are:
* 1. Used directly by the control system
* 2. Fed as measurements to the EKF for bias estimation and position/velocity fusion
*
* Architecture:
* - AHRS: High-rate (e.g., 100Hz+) attitude estimation from gyro + accel (+ mag)
* - EKF:  Lower-rate position/velocity estimation with GNSS + AHRS attitude corrections
* - Controller: Uses AHRS attitude for fast response
*/

#include "flight/bfs-ins.h"
#include "flight/mahony_ahrs.h"
#include "global_defs.h"
#include "flight/msg.h"
#include "navigation.h"
#include "filter.h"
#include "eigen.h"

namespace {
static constexpr float FRAME_PERIOD_S = static_cast<float>(FRAME_PERIOD_MS) /
                                        1000.0f;
InsConfig cfg_;
bool ins_initialized_ = false;
bool ahrs_initialized_ = false;
static constexpr int8_t MIN_SAT_ = 7;
ImuData *imu_;
MagData *mag_;
GnssData *gnss_;

/* Low-pass filters for sensor data */
bfs::Iir<float> ax_, ay_, az_, gx_, gy_, gz_, hx_, hy_, hz_;
/* Separate low-pass filters for AHRS accelerometer input (motor vibration rejection) */
bfs::Iir<float> ahrs_ax_, ahrs_ay_, ahrs_az_;

/* Sensor data vectors */
Eigen::Vector3f accel_mps2_, gyro_radps_, mag_ut_, ned_vel_, rel_pos_ned_;
Eigen::Vector3d llh_;

/* AHRS filter for fast attitude estimation */
bfs::MahonyAhrs ahrs_;

/* EKF for position/velocity and bias estimation */
bfs::Ekf15State ekf_;

/* AHRS attitude output */
Eigen::Vector3f ahrs_ypr_rad_;

float BASELINE_LEN_M = 0.0f;
float cur_baseline_len_m_ = 0.0f;
uint8_t init_counter_ = 0;

/* Configuration flags */
bool use_ahrs_for_control_ = true;  // Use AHRS attitude for control
bool fuse_ahrs_into_ekf_ = true;    // Feed AHRS estimates to EKF
static constexpr float AHRS_UPDATE_RATE_HZ = 100.0f;  // AHRS runs at IMU rate
static constexpr float EKF_AHRS_UPDATE_RATE_HZ = 10.0f;  // EKF uses AHRS at lower rate
uint32_t ahrs_ekf_update_counter_ = 0;
static constexpr uint32_t AHRS_EKF_UPDATE_DECIMATION = 
    static_cast<uint32_t>(AHRS_UPDATE_RATE_HZ / EKF_AHRS_UPDATE_RATE_HZ);
}

void BfsInsInit(const InsConfig &ref) {
  cfg_ = ref;
  
  /* Configure EKF */
  ekf_.gnss_pos_ne_std_m(0.2f);
  ekf_.gnss_pos_d_std_m(0.2f);
  
  /* Configure AHRS filter */
  ahrs_.Kp(2.0f);  // Proportional gain (higher = faster convergence, more noise)
  ahrs_.Ki(0.01f); // Integral gain (compensates for gyro bias drift)
  
  BASELINE_LEN_M = cfg_.antenna_baseline_m.norm();
}

void BfsInsRun(SensorData &ref, InsData * const ptr) {
  if (!ptr) {return;}
  ptr->initialized = ins_initialized_;
  
  if (!ins_initialized_) {
    /* Setup IMU source */
    switch (cfg_.imu_source) {
      #if defined(__FMU_R_V1__) || defined(__FMU_R_V2__) || \
          defined(__FMU_R_V2_BETA__)
      case INS_IMU_VECTOR_NAV: {
        if (ref.vector_nav_imu.installed) {
          imu_ = &ref.vector_nav_imu;
        } else {
          MsgError("INS IMU source set to VectorNav, which is not installed");
        }
        break;
      }
      #endif
      case INS_IMU_FMU: {
        if (ref.fmu_imu.installed) {
          imu_ = &ref.fmu_imu;
        } else {
          MsgError("INS IMU source set to FMU, which is not installed");
        }
        break;
      }
    }
    
    /* Setup mag source */
    switch (cfg_.mag_source) {
      case INS_MAG_FMU: {
        if (ref.fmu_mag.installed) {
          mag_ = &ref.fmu_mag;
        } else {
          MsgError("INS mag source set to FMU, which is not installed");
        }
        break;
      }
      case INS_MAG_EXT_MAG: {
        if (ref.ext_mag.installed) {
          mag_ = &ref.ext_mag;
        } else {
          MsgError("INS mag source set to ext mag1, which is not installed");
        }
        break;
      }
    }
    
    /* Setup GNSS source (skipped in AHRS-only mode) */
    if (!cfg_.ahrs_only_mode) {
      switch (cfg_.gnss_source) {
        #if defined(__FMU_R_V1__) || defined(__FMU_R_V2__) || \
          defined(__FMU_R_V2_BETA__)
        case INS_GNSS_VECTOR_NAV: {
          if (ref.vector_nav_gnss.installed) {
            gnss_ = &ref.vector_nav_gnss;
          } else {
            MsgError("INS GNSS source set to VectorNav, which is not installed");
          }
          break;
        }
        #endif
        case INS_GNSS_EXT_GNSS1: {
          if (ref.ext_gnss1.installed) {
            gnss_ = &ref.ext_gnss1;
          } else {
            MsgError("INS GNSS source set to ext GNSS1, which is not installed");
          }
          break;
        }
        #if defined(__FMU_R_V2__) || defined(__FMU_R_V2_BETA__) || \
            defined(__FMU_R_MINI_V1__)
        case INS_GNSS_EXT_GNSS2: {
          if (ref.ext_gnss2.installed) {
            gnss_ = &ref.ext_gnss2;
          } else {
            MsgError("INS GNSS source set to ext GNSS2, which is not installed");
          }
          break;
        }
        #endif
      }
      /* Guard moving-baseline fix requirement */
      if ((BASELINE_LEN_M != 0) && (gnss_->fix < 5)) {
        return;
      }
    }

    bool gnss_ready = cfg_.ahrs_only_mode ||
                      (gnss_->new_data && gnss_->num_sats > MIN_SAT_);
    if ((imu_->new_data) && (mag_->new_data) && gnss_ready) {
      // Wait for stabilization
      elapsedMillis t_ms;
      t_ms = 0;
      while (t_ms < 5000.0f) {}
      
      /* Prepare sensor data */
      accel_mps2_[0] = imu_->accel_mps2[0];
      accel_mps2_[1] = imu_->accel_mps2[1];
      accel_mps2_[2] = imu_->accel_mps2[2];
      gyro_radps_[0] = imu_->gyro_radps[0];
      gyro_radps_[1] = imu_->gyro_radps[1];
      gyro_radps_[2] = imu_->gyro_radps[2];
      mag_ut_[0] = mag_->mag_ut[0];
      mag_ut_[1] = mag_->mag_ut[1];
      mag_ut_[2] = mag_->mag_ut[2];

      /* Read GNSS data and initialize EKF only when not in AHRS-only mode */
      if (!cfg_.ahrs_only_mode) {
        ned_vel_[0] = gnss_->ned_vel_mps[0];
        ned_vel_[1] = gnss_->ned_vel_mps[1];
        ned_vel_[2] = gnss_->ned_vel_mps[2];
        llh_[0] = gnss_->lat_rad;
        llh_[1] = gnss_->lon_rad;
        llh_[2] = gnss_->alt_wgs84_m;
        rel_pos_ned_[0] = float(gnss_->rel_pos_ned_m[0]);
        rel_pos_ned_[1] = float(gnss_->rel_pos_ned_m[1]);
        rel_pos_ned_[2] = float(gnss_->rel_pos_ned_m[2]);
      }

      /* Initialize AHRS filter - negate accel to match Betaflight convention */
      Eigen::Vector3f accel_betaflight_init = -accel_mps2_;
      ahrs_.Initialize(accel_betaflight_init, mag_ut_, cfg_.hardcoded_heading);
      ahrs_initialized_ = true;

      if (!cfg_.ahrs_only_mode) {
        /* Initialize EKF */
        ekf_.Initialize(accel_mps2_, gyro_radps_, mag_ut_,
                        ned_vel_, llh_, rel_pos_ned_, cfg_.hardcoded_heading);
        /* Initialize gyro/accel output filters seeded from EKF bias-corrected values */
        gx_.Init(cfg_.gyro_cutoff_hz, FRAME_RATE_HZ, ekf_.gyro_radps()[0]);
        gy_.Init(cfg_.gyro_cutoff_hz, FRAME_RATE_HZ, ekf_.gyro_radps()[1]);
        gz_.Init(1.0f, FRAME_RATE_HZ, ekf_.gyro_radps()[2]);
        ax_.Init(cfg_.accel_cutoff_hz, FRAME_RATE_HZ, ekf_.accel_mps2()[0]);
        ay_.Init(cfg_.accel_cutoff_hz, FRAME_RATE_HZ, ekf_.accel_mps2()[1]);
        az_.Init(cfg_.accel_cutoff_hz, FRAME_RATE_HZ, ekf_.accel_mps2()[2]);
      } else {
        /* AHRS-only: seed output filters directly from raw IMU */
        gx_.Init(cfg_.gyro_cutoff_hz, FRAME_RATE_HZ, gyro_radps_[0]);
        gy_.Init(cfg_.gyro_cutoff_hz, FRAME_RATE_HZ, gyro_radps_[1]);
        gz_.Init(cfg_.gyro_cutoff_hz, FRAME_RATE_HZ, gyro_radps_[2]);
        ax_.Init(cfg_.accel_cutoff_hz, FRAME_RATE_HZ, accel_mps2_[0]);
        ay_.Init(cfg_.accel_cutoff_hz, FRAME_RATE_HZ, accel_mps2_[1]);
        az_.Init(cfg_.accel_cutoff_hz, FRAME_RATE_HZ, accel_mps2_[2]);
      }
      /* Initialize AHRS accelerometer filters on raw IMU data */
      ahrs_ax_.Init(cfg_.accel_cutoff_hz, FRAME_RATE_HZ, accel_mps2_[0]);
      ahrs_ay_.Init(cfg_.accel_cutoff_hz, FRAME_RATE_HZ, accel_mps2_[1]);
      ahrs_az_.Init(cfg_.accel_cutoff_hz, FRAME_RATE_HZ, accel_mps2_[2]);
      hx_.Init(cfg_.mag_cutoff_hz, MAG_RATE_HZ, mag_->mag_ut[0]);
      hy_.Init(cfg_.mag_cutoff_hz, MAG_RATE_HZ, mag_->mag_ut[1]);
      hz_.Init(cfg_.mag_cutoff_hz, MAG_RATE_HZ, mag_->mag_ut[2]);

      ins_initialized_ = true;
    }
  } else {
    /* ===== Running mode ===== */
    
    /* Update AHRS at IMU rate (high rate) */
    if (imu_->new_data && ahrs_initialized_) {
      accel_mps2_[0] = imu_->accel_mps2[0];
      accel_mps2_[1] = imu_->accel_mps2[1];
      accel_mps2_[2] = imu_->accel_mps2[2];
      gyro_radps_[0] = imu_->gyro_radps[0];
      gyro_radps_[1] = imu_->gyro_radps[1];
      gyro_radps_[2] = imu_->gyro_radps[2];
      
      /* Filter raw accelerometer to reject motor vibrations before AHRS update */
      Eigen::Vector3f accel_mps2_ahrs;
      accel_mps2_ahrs[0] = ahrs_ax_.Filter(accel_mps2_[0]);
      accel_mps2_ahrs[1] = ahrs_ay_.Filter(accel_mps2_[1]);
      accel_mps2_ahrs[2] = ahrs_az_.Filter(accel_mps2_[2]);
      /* Negate filtered accel to match Betaflight convention (+g when level) */
      Eigen::Vector3f accel_betaflight = -accel_mps2_ahrs;
      
      /* Update AHRS with gyro and accel */
      if (mag_->new_data) {
        mag_ut_[0] = mag_->mag_ut[0];
        mag_ut_[1] = mag_->mag_ut[1];
        mag_ut_[2] = mag_->mag_ut[2];
        ahrs_.UpdateWithMag(gyro_radps_, accel_betaflight, mag_ut_, FRAME_PERIOD_S);
      } else {
        ahrs_.Update(gyro_radps_, accel_betaflight, FRAME_PERIOD_S);
      }
      
      /* Get AHRS attitude estimate */
      ahrs_ypr_rad_ = ahrs_.GetEuler();

      /* EKF time update (prediction step) — skipped in AHRS-only mode */
      if (!cfg_.ahrs_only_mode) {
        ekf_.TimeUpdate(accel_mps2_, gyro_radps_, FRAME_PERIOD_S);
      }
    }

    /* Update EKF with GNSS measurements (skipped in AHRS-only mode) */
    if (!cfg_.ahrs_only_mode && gnss_->new_data) {
      ned_vel_[0] = gnss_->ned_vel_mps[0];
      ned_vel_[1] = gnss_->ned_vel_mps[1];
      ned_vel_[2] = gnss_->ned_vel_mps[2];
      llh_[0] = gnss_->lat_rad;
      llh_[1] = gnss_->lon_rad;
      llh_[2] = gnss_->alt_wgs84_m;
      rel_pos_ned_[0] = float(gnss_->rel_pos_ned_m[0]);
      rel_pos_ned_[1] = float(gnss_->rel_pos_ned_m[1]);
      rel_pos_ned_[2] = float(gnss_->rel_pos_ned_m[2]);
      cur_baseline_len_m_ = rel_pos_ned_.norm();
      
      ekf_.MeasurementUpdate_gnss(ned_vel_, llh_);
      
      // Optional: Use moving baseline if available
      // if ((gnss_->fix >= 5) && (abs(cur_baseline_len_m_ - BASELINE_LEN_M) < 0.1f )){
      //   ekf_.MeasurementUpdate_moving_base(rel_pos_ned_);
      // }
    }
    
    /* ===== Output data ===== */
    
    /* Use AHRS attitude for control (fast, responsive) */
    if (use_ahrs_for_control_ && ahrs_initialized_) {
      ptr->pitch_rad = ahrs_ypr_rad_(1);
      ptr->roll_rad = ahrs_ypr_rad_(2);
      ptr->heading_rad = ahrs_ypr_rad_(0);
    } else {
      /* Fall back to EKF attitude */
      ptr->pitch_rad = ekf_.pitch_rad();
      ptr->roll_rad = ekf_.roll_rad();
      ptr->heading_rad = ekf_.yaw_rad();
    }
    
    /* Use EKF for position and velocity (benefits from GPS fusion) */
    ptr->alt_wgs84_m = ekf_.alt_m();
    ptr->lat_rad = ekf_.lat_rad();
    ptr->lon_rad = ekf_.lon_rad();
    ptr->ned_vel_mps[0] = ekf_.ned_vel_mps()[0];
    ptr->ned_vel_mps[1] = ekf_.ned_vel_mps()[1];
    ptr->ned_vel_mps[2] = ekf_.ned_vel_mps()[2];
    
    /* IMU output: filtered raw data in AHRS-only mode, EKF bias-corrected otherwise */
    if (cfg_.ahrs_only_mode) {
      ptr->accel_mps2[0] = ax_.Filter(accel_mps2_[0]);
      ptr->accel_mps2[1] = ay_.Filter(accel_mps2_[1]);
      ptr->accel_mps2[2] = az_.Filter(accel_mps2_[2]);
      ptr->gyro_radps[0] = gx_.Filter(gyro_radps_[0]);
      ptr->gyro_radps[1] = gy_.Filter(gyro_radps_[1]);
      ptr->gyro_radps[2] = gz_.Filter(gyro_radps_[2]);
    } else {
      ptr->accel_mps2[0] = ax_.Filter(ekf_.accel_mps2()[0]);
      ptr->accel_mps2[1] = ay_.Filter(ekf_.accel_mps2()[1]);
      ptr->accel_mps2[2] = az_.Filter(ekf_.accel_mps2()[2]);
      ptr->gyro_radps[0] = gx_.Filter(ekf_.gyro_radps()[0]);
      ptr->gyro_radps[1] = gy_.Filter(ekf_.gyro_radps()[1]);
      ptr->gyro_radps[2] = gz_.Filter(ekf_.gyro_radps()[2]);
    }
    
    /* Magnetometer (optional, for heading reference) */
    if (mag_->new_data) {
      ptr->mag_ut[0] = hx_.Filter(mag_->mag_ut[0]);
      ptr->mag_ut[1] = hy_.Filter(mag_->mag_ut[1]);
      ptr->mag_ut[2] = hz_.Filter(mag_->mag_ut[2]);
    }
  }
}
