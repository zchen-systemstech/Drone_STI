/*
* Mahony AHRS filter implementation
* Based on Betaflight/Cleanflight implementation
* 
* This implementation provides fast, robust attitude estimation using
* gyroscope and accelerometer data.
*/

#ifndef FLIGHT_MAHONY_AHRS_H_
#define FLIGHT_MAHONY_AHRS_H_

#include "eigen.h"
#include "Eigen/Dense"
#include <cmath>

/* Define M_PI if not already defined */
#ifndef M_PI
#define M_PI 3.14159265358979323846f
#endif

namespace bfs {

class MahonyAhrs {
 public:
  MahonyAhrs() {}
  
  /* Configuration setters */
  inline void Kp(const float val) { kp_ = val; }
  inline void Ki(const float val) { ki_ = val; }
  
  /* Configuration getters */
  inline float Kp() const { return kp_; }
  inline float Ki() const { return ki_; }
  
  /* Initialize the filter with initial attitude */
  void Initialize(const Eigen::Vector3f &accel, 
                  const Eigen::Vector3f &mag,
                  const float initial_yaw = -1.0f) {
    /* Normalize accelerometer measurement */
    Eigen::Vector3f a = accel.normalized();
    
    /* Compute initial pitch and roll from accelerometer (NED convention) */
    /* In NED: gravity is [0, 0, g], accel measures -gravity in body frame */
    /* So when level: accel_body ≈ [0, 0, -g] */
    float pitch = std::asin(a(0));
    float roll = std::asin(-a(1) / std::cos(pitch));
    
    /* Compute initial yaw from magnetometer */
    float yaw;
    if (initial_yaw >= 0.0f) {
      yaw = initial_yaw;
    } else if (mag.norm() > 0.01f) {
      Eigen::Vector3f m = mag.normalized();
      yaw = std::atan2(m(2) * std::sin(roll) - m(1) * std::cos(roll),
                       m(0) * std::cos(pitch) + m(1) * std::sin(pitch) * std::sin(roll)
                       + m(2) * std::sin(pitch) * std::cos(roll));
    } else {
      yaw = 0.0f;
    }
    
    /* Convert to quaternion (ZYX Euler sequence) */
    float cy = std::cos(yaw * 0.5f);
    float sy = std::sin(yaw * 0.5f);
    float cp = std::cos(pitch * 0.5f);
    float sp = std::sin(pitch * 0.5f);
    float cr = std::cos(roll * 0.5f);
    float sr = std::sin(roll * 0.5f);
    
    q_.w() = cr * cp * cy + sr * sp * sy;
    q_.x() = sr * cp * cy - cr * sp * sy;
    q_.y() = cr * sp * cy + sr * cp * sy;
    q_.z() = cr * cp * sy - sr * sp * cy;
    q_.normalize();
    
    /* Compute rotation matrix */
    ComputeRotationMatrix();
    
    /* Reset integral error */
    integral_fb_.setZero();
    initialized_ = true;
  }
  
  /* Update filter with gyro and accel measurements (Betaflight algorithm) */
  void Update(const Eigen::Vector3f &gyro_radps,
              const Eigen::Vector3f &accel_mps2,
              const float dt_s) {
    if (!initialized_) { return; }
    
    float gx = gyro_radps(0);
    float gy = gyro_radps(1);
    float gz = gyro_radps(2);
    
    float ex = 0.0f, ey = 0.0f, ez = 0.0f;
    
    /* Only apply accelerometer correction when magnitude is close to 1g.
     * Rejects sensor faults AND vibration-induced biases that would otherwise
     * drive the filter to a wrong attitude equilibrium during motor operation. */
    static constexpr float G = 9.81f;
    float recipAccNorm = accel_mps2.squaredNorm();
    if (recipAccNorm > (0.5f * G) * (0.5f * G) &&
        recipAccNorm < (1.5f * G) * (1.5f * G)) {
      recipAccNorm = 1.0f / std::sqrt(recipAccNorm);
      float ax = accel_mps2(0) * recipAccNorm;
      float ay = accel_mps2(1) * recipAccNorm;
      float az = accel_mps2(2) * recipAccNorm;
      
      /* Error is cross product between measured accel and estimated gravity direction */
      /* Estimated gravity is 3rd row of rotation matrix (rMat[2][X]) */
      ex = (ay * rMat_(2, 2) - az * rMat_(2, 1));
      ey = (az * rMat_(2, 0) - ax * rMat_(2, 2));
      ez = (ax * rMat_(2, 1) - ay * rMat_(2, 0));
    }
    
    /* Compute and apply integral feedback if enabled */
    if (ki_ > 0.0f) {
      integral_fb_(0) += ki_ * ex * dt_s;
      integral_fb_(1) += ki_ * ey * dt_s;
      integral_fb_(2) += ki_ * ez * dt_s;
    } else {
      integral_fb_.setZero();
    }
    
    /* Apply proportional and integral feedback */
    gx += kp_ * ex + integral_fb_(0);
    gy += kp_ * ey + integral_fb_(1);
    gz += kp_ * ez + integral_fb_(2);
    
    /* Integrate rate of change of quaternion */
    gx *= (0.5f * dt_s);
    gy *= (0.5f * dt_s);
    gz *= (0.5f * dt_s);
    
    float qw = q_.w();
    float qx = q_.x();
    float qy = q_.y();
    float qz = q_.z();
    
    q_.w() += (-qx * gx - qy * gy - qz * gz);
    q_.x() += (+qw * gx + qy * gz - qz * gy);
    q_.y() += (+qw * gy - qx * gz + qz * gx);
    q_.z() += (+qw * gz + qx * gy - qy * gx);
    
    /* Normalize quaternion */
    q_.normalize();
    
    /* Pre-compute rotation matrix from quaternion */
    ComputeRotationMatrix();
  }
  
  /* Update with gyro, accel, and magnetometer */
  void UpdateWithMag(const Eigen::Vector3f &gyro_radps,
                     const Eigen::Vector3f &accel_mps2,
                     const Eigen::Vector3f &mag_ut,
                     const float dt_s) {
    /* For now, just use accel update - mag fusion can be added later if needed */
    Update(gyro_radps, accel_mps2, dt_s);
  }
  
  /* Get current attitude as Euler angles (yaw, pitch, roll) in radians */
  /* Output: euler(0) = yaw, euler(1) = pitch, euler(2) = roll */
  /* Betaflight convention adapted for NED frame */
  Eigen::Vector3f GetEuler() const {
    Eigen::Vector3f euler;
    
    /* Roll - atan2(rMat[2][1], rMat[2][2]) */
    euler(2) = std::atan2(rMat_(2, 1), rMat_(2, 2));
    
    /* Pitch - (PI/2 - acos(-rMat[2][0])) */
    euler(1) = (M_PI / 2.0f) - std::acos(-rMat_(2, 0));
    
    /* Yaw - atan2(rMat[1][0], rMat[0][0]) - remove negative for NED */
    euler(0) = std::atan2(rMat_(1, 0), rMat_(0, 0));
    
    return euler;
  }
  
  /* Get current quaternion */
  Eigen::Quaternionf GetQuaternion() const {
    return q_;
  }
  
  /* Get individual Euler angles */
  inline float yaw_rad() const { return GetEuler()(0); }
  inline float pitch_rad() const { return GetEuler()(1); }
  inline float roll_rad() const { return GetEuler()(2); }
  
  /* Check if initialized */
  inline bool initialized() const { return initialized_; }
  
 private:
  /* Proportional gain */
  float kp_ = 2.0f;
  /* Integral gain */
  float ki_ = 0.0f;
  /* Quaternion of sensor frame relative to earth frame */
  Eigen::Quaternionf q_{1.0f, 0.0f, 0.0f, 0.0f};
  /* Rotation matrix (computed from quaternion) */
  Eigen::Matrix3f rMat_ = Eigen::Matrix3f::Identity();
  /* Integral error */
  Eigen::Vector3f integral_fb_{0.0f, 0.0f, 0.0f};
  /* Initialization flag */
  bool initialized_ = false;
  
  /* Compute rotation matrix from quaternion (Betaflight style) */
  void ComputeRotationMatrix() {
    float qw = q_.w();
    float qx = q_.x();
    float qy = q_.y();
    float qz = q_.z();
    
    float qww = qw * qw;
    float qwx = qw * qx;
    float qwy = qw * qy;
    float qwz = qw * qz;
    float qxx = qx * qx;
    float qxy = qx * qy;
    float qxz = qx * qz;
    float qyy = qy * qy;
    float qyz = qy * qz;
    float qzz = qz * qz;
    
    rMat_(0, 0) = 1.0f - 2.0f * qyy - 2.0f * qzz;
    rMat_(0, 1) = 2.0f * (qxy + -qwz);
    rMat_(0, 2) = 2.0f * (qxz - -qwy);
    
    rMat_(1, 0) = 2.0f * (qxy - -qwz);
    rMat_(1, 1) = 1.0f - 2.0f * qxx - 2.0f * qzz;
    rMat_(1, 2) = 2.0f * (qyz + -qwx);
    
    rMat_(2, 0) = 2.0f * (qxz + -qwy);
    rMat_(2, 1) = 2.0f * (qyz - -qwx);
    rMat_(2, 2) = 1.0f - 2.0f * qxx - 2.0f * qyy;
  }
};

}  // namespace bfs

#endif  // FLIGHT_MAHONY_AHRS_H_
