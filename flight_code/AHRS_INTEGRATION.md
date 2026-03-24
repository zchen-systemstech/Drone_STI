# AHRS Integration with 15-State EKF

## Overview

This document describes how to integrate a Mahony AHRS filter with the existing 15-state EKF for improved attitude estimation and control performance.

## Architecture

### Dual Filter Approach

```
┌─────────────┐
│   IMU       │
│ Gyro+Accel  │
└──────┬──────┘
       │
       ├──────────────────┐
       │                  │
       ▼                  ▼
┌──────────────┐    ┌──────────────┐
│ AHRS Filter  │    │   EKF Time   │
│   (100 Hz)   │    │    Update    │
│  Mahony/CF   │    │   (100 Hz)   │
└──────┬───────┘    └──────┬───────┘
       │                   │
       │ Attitude          │
       │  (10 Hz)          │ GNSS
       └────────┐          │ (1-10 Hz)
                ▼          ▼
          ┌──────────────────┐
          │  EKF Measurement │
          │     Updates      │
          └────────┬─────────┘
                   │
         ┌─────────┴─────────┐
         ▼                   ▼
    ┌─────────┐        ┌──────────┐
    │ Control │        │ Position │
    │  Uses   │        │ Velocity │
    │  AHRS   │        │  Biases  │
    └─────────┘        └──────────┘
```

### Benefits

1. **Fast Attitude Response**: AHRS provides high-rate (100Hz+), low-latency attitude for control
2. **Robust Estimation**: AHRS directly fuses accelerometer for attitude correction (unlike EKF)
3. **Improved Bias Estimation**: EKF benefits from AHRS attitude corrections + GPS for bias convergence
4. **Modular Design**: Can switch between AHRS and EKF attitude outputs via configuration

## Implementation Files

### 1. `include/flight/mahony_ahrs.h`
Complete Mahony AHRS filter implementation featuring:
- Gyroscope integration with quaternion representation
- Accelerometer-based attitude correction (proportional feedback)
- Magnetometer fusion for yaw stabilization
- Integral feedback for gyro bias compensation
- Configurable gains (Kp, Ki)

**Key Methods:**
```cpp
// Initialize with initial attitude
void Initialize(const Eigen::Vector3f &accel, 
                const Eigen::Vector3f &mag,
                const float initial_yaw = -1.0f);

// Update with gyro + accel
void Update(const Eigen::Vector3f &gyro_radps,
            const Eigen::Vector3f &accel_mps2,
            const float dt_s);

// Update with gyro + accel + mag
void UpdateWithMag(const Eigen::Vector3f &gyro_radps,
                   const Eigen::Vector3f &accel_mps2,
                   const Eigen::Vector3f &mag_ut,
                   const float dt_s);

// Get attitude
Eigen::Vector3f GetEuler() const;
Eigen::Quaternionf GetQuaternion() const;
float yaw_rad() const;
float pitch_rad() const;
float roll_rad() const;
```

### 2. Modified `build/_deps/navigation-src/src/ekf_15_state.h`
Added new measurement update function:

```cpp
// New setter/getter for AHRS measurement noise
inline void ahrs_att_std_rad(const float val);
inline float ahrs_att_std_rad() const;

// Measurement update using AHRS attitude estimates
void MeasurementUpdate_ahrs(const Eigen::Vector3f &ahrs_ypr_rad);
```

**How it works:**
- Converts AHRS Euler angles to quaternion
- Computes attitude error relative to EKF quaternion
- Uses small-angle approximation for linearization
- Updates EKF states through standard Kalman gain equations
- Corrects position, velocity, attitude, and biases

### 3. `flight/bfs-ins-with-ahrs.cc`
Example integration showing:
- Parallel AHRS and EKF operation
- High-rate AHRS updates (IMU rate)
- Decimated AHRS→EKF updates (10 Hz)
- GNSS fusion in EKF
- AHRS attitude used for control
- EKF position/velocity used for navigation

## Configuration Parameters

### AHRS Gains
```cpp
ahrs_.Kp(2.0f);   // Proportional gain
                  // Higher = faster convergence to accel/mag
                  // Too high = noise sensitivity
                  // Typical range: 0.5 - 5.0

ahrs_.Ki(0.01f);  // Integral gain
                  // Compensates for gyro bias drift
                  // Higher = faster bias compensation
                  // Too high = instability
                  // Typical range: 0.0 - 0.1
```

**Tuning Guide:**
- **Aggressive (racing)**: Kp=5.0, Ki=0.05 → Fast response, may amplify vibration
- **Balanced (general)**: Kp=2.0, Ki=0.01 → Good compromise
- **Conservative (smooth)**: Kp=0.5, Ki=0.001 → Slow but stable

### EKF Parameters
```cpp
ekf_.ahrs_att_std_rad(0.05f);  // AHRS attitude uncertainty
                                // ~3 degrees
                                // Lower = trust AHRS more
                                // Higher = trust EKF dynamics more
```

### Update Rates
```cpp
AHRS_UPDATE_RATE_HZ = 100.0f;       // AHRS runs at IMU rate
EKF_AHRS_UPDATE_RATE_HZ = 10.0f;    // EKF uses AHRS at lower rate
```

Lower EKF update rate is acceptable because:
- Attitude changes are smooth and predictable
- Reduces computational load
- EKF time updates handle inter-measurement dynamics

## Usage Instructions

### Step 1: Replace INS Implementation

**Option A: Rename original and use new**
```bash
cd flight_code/flight
mv bfs-ins.cc bfs-ins-original.cc
mv bfs-ins-with-ahrs.cc bfs-ins.cc
```

**Option B: Merge changes into existing file**
- Add `#include "flight/mahony_ahrs.h"`
- Add AHRS filter object: `bfs::MahonyAhrs ahrs_;`
- Initialize AHRS in the initialization section
- Add AHRS update in the main loop
- Call `ekf_.MeasurementUpdate_ahrs()` at desired rate

### Step 2: Rebuild
```bash
cd build
cmake ..
make
```

### Step 3: Configuration Flags

In your INS configuration or at runtime, you can control:

```cpp
bool use_ahrs_for_control = true;   // Use AHRS attitude for control
bool fuse_ahrs_into_ekf = true;     // Feed AHRS to EKF
```

**Recommended Configurations:**

| Scenario | AHRS for Control | Fuse AHRS to EKF | Notes |
|----------|------------------|------------------|-------|
| **High performance** | ✓ | ✓ | Best responsiveness + bias estimation |
| **GPS-denied** | ✓ | ✗ | AHRS only, no GPS corrections |
| **Pure EKF** | ✗ | ✗ | Original behavior (for comparison) |
| **Debug/tuning** | ✗ | ✓ | Use EKF attitude but get AHRS corrections |

## Testing & Validation

### 1. Ground Testing
- **Static test**: Verify attitude converges correctly from arbitrary initial orientation
- **Tilt test**: Manually tilt vehicle, verify attitude tracks correctly
- **Rotation test**: Rotate around each axis, check for singularities or drift

### 2. Flight Testing
Compare key metrics:
- **Attitude tracking**: AHRS vs EKF vs truth (if available)
- **Response time**: Time to track commanded attitude changes
- **Drift**: Long-term yaw drift with/without magnetometer
- **Control performance**: Tracking error, stability

### 3. Data Logging
Log the following for analysis:
```cpp
// AHRS outputs
ahrs_ypr_rad_
ahrs_.GetQuaternion()

// EKF outputs  
ekf_.yaw_rad(), ekf_.pitch_rad(), ekf_.roll_rad()
ekf_.gyro_bias_radps()
ekf_.accel_bias_mps2()

// Differences
attitude_error = ahrs_ypr_rad_ - ekf_ypr_rad_
```

## Troubleshooting

### Problem: AHRS attitude diverges
**Causes:**
- Accelerometer bias or scaling error
- Vibration causing false gravity vector
- Incorrect coordinate frames

**Solutions:**
- Verify accelerometer calibration
- Add vibration isolation
- Decrease Kp gain
- Check body frame definitions

### Problem: Yaw drift
**Causes:**
- No magnetometer correction
- Magnetic disturbances
- Gyro bias

**Solutions:**
- Enable magnetometer fusion: `ahrs_.UpdateWithMag()`
- Increase Ki gain for bias compensation
- Use GPS heading when available
- Hard/soft iron calibration for magnetometer

### Problem: Oscillations in attitude
**Causes:**
- Kp too high
- Vibration
- Accelerometer noise

**Solutions:**
- Reduce Kp gain
- Improve mechanical isolation
- Increase low-pass filter cutoff on accelerometer

### Problem: Slow convergence
**Causes:**
- Kp too low
- Poor accelerometer/mag data quality

**Solutions:**
- Increase Kp gain
- Verify sensor calibration
- Check for sensor failures

## Advanced Topics

### Magnetometer Hard/Soft Iron Calibration
For best yaw accuracy, calibrate magnetometer:
```cpp
// Apply calibration before AHRS update
Eigen::Vector3f mag_calibrated = C_soft_iron * (mag_raw - hard_iron_bias);
ahrs_.UpdateWithMag(gyro, accel, mag_calibrated, dt);
```

### Adaptive Gains
Adjust gains based on flight mode:
```cpp
if (high_dynamics_mode) {
    ahrs_.Kp(5.0f);   // Fast tracking
} else {
    ahrs_.Kp(1.0f);   // Noise rejection
}
```

### GPS Heading Fusion
When GPS velocity is reliable, can aid yaw:
```cpp
if (gnss_velocity.norm() > 3.0f) {  // > 3 m/s
    float gps_heading = atan2(gnss_velocity[1], gnss_velocity[0]);
    // Fuse GPS heading into AHRS or EKF
}
```

### Quaternion Interpolation
For smoother output at control rates different from AHRS rate:
```cpp
Eigen::Quaternionf q_interpolated = 
    q_prev.slerp(alpha, q_current);
```

## References

1. Mahony, R., Hamel, T., & Pflimlin, J. M. (2008). "Nonlinear complementary filters on the special orthogonal group." IEEE Transactions on Automatic Control, 53(5), 1203-1218.

2. Madgwick, S. O. (2010). "An efficient orientation filter for inertial and inertial/magnetic sensor arrays." Report x-io and University of Bristol (UK), 25, 113-118.

3. Trawny, N., & Roumeliotis, S. I. (2005). "Indirect Kalman filter for 3D attitude estimation."

## Support

For questions or issues:
1. Check existing flight logs for similar issues
2. Verify sensor calibration
3. Review parameter tuning section
4. Test with pure EKF mode as baseline comparison
