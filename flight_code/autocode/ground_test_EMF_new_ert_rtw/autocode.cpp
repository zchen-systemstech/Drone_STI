//
// File: autocode.cpp
//
// Code generated for Simulink model 'ground_test_EMF_new'.
//
// Model version                  : 8.117
// Simulink Coder version         : 24.1 (R2024a) 19-Nov-2023
// C/C++ source code generated on : Tue Mar 24 12:53:50 2026
//

#include "autocode.h"
#include "rtwtypes.h"
#include "global_defs.h"
#include <cmath>

// Invariant block signals (default storage)
const bfs::Autocode::ConstBlockIO rtConstB = {
    0.99999999999999911
    ,                                  // '<S17>/1-D Lookup Table1'
    1.0
    ,                                  // '<S17>/Sign'
    1.0000000000000004
    ,                                  // '<S18>/1-D Lookup Table1'
    1.0
    ,                                  // '<S18>/Sign'
    0.99999999999999933
    ,                                  // '<S19>/1-D Lookup Table1'
    1.0
    ,                                  // '<S19>/Sign'
    1.0
    ,                                  // '<S20>/1-D Lookup Table1'
    1.0
    ,                                  // '<S20>/Sign'
    -0.11774
    ,                                  // '<S22>/1-D Lookup Table'
    1.0000000000000004
    ,                                  // '<S22>/1-D Lookup Table1'
    9.0
    ,                                  // '<S22>/Square'
    9.0
    ,                                  // '<S22>/Square1'
    -0.27732
    ,                                  // '<S23>/1-D Lookup Table'
    0.99999999999999933
    ,                                  // '<S23>/1-D Lookup Table2'
    0.0
    ,                                  // '<S23>/Gain5'
    16.0
    ,                                  // '<S23>/Square'
    16.0
    ,                                  // '<S23>/Square1'
    -0.32736F
    ,                                  // '<S21>/1-D Lookup Table'
    1.0F
    ,                                  // '<S21>/1-D Lookup Table1'
    -0.13665F
    ,                                  // '<S24>/1-D Lookup Table1'
    1.0F
    ,                                  // '<S24>/1-D Lookup Table2'
    1
    // '<S3>/Data Type Conversion2'
};

// Constant parameters (default storage)
const bfs::Autocode::ConstParam rtConstP = {
    // Expression: inv(EMF.Mixer(:,:,1))

    //  Referenced by: '<S7>/Constant17'
    { -0.00449000000000001, 0.02948000000000003, 0.013190000000000006,
        -0.006660000000000001, -0.0044900000000000053, 0.02948000000000002,
        -0.013189999999999993, 0.0066599999999999984, -0.0044899999999999975,
        -0.02948000000000002, 0.01318999999999999, 0.0066600000000000036,
        -0.0044900000000000044, -0.029480000000000003, -0.013189999999999992,
        -0.006660000000000001 },

    // Expression: EMF.Mixer(:,:,1)

    //  Referenced by: '<S13>/Constant'
    { -55.679287305122422, -55.679287305122443, -55.679287305122443,
        -55.679287305122465, 8.4803256445047346, 8.4803256445047417,
        -8.48032564450475, -8.4803256445047488, 18.95375284306294,
        -18.953752843062933, 18.953752843062933, -18.953752843062926,
        -37.5375375375375, 37.53753753753756, 37.53753753753756,
        -37.537537537537524 },

    // Pooled Parameter (Expression: AircraftModel.MinOmegaLimit)

    //  Referenced by:

    //    '<S8>/Constant11'

    //    '<S16>/Constant1'
    { 0.0, 0.0, 0.0, 0.0 },

    // Pooled Parameter (Expression: AircraftModel.MaxOmegaLimit)

    //  Referenced by:

    //    '<S8>/Constant2'

    //    '<S16>/Constant2'
    { 3711.0063220529428, 3711.0063220529428, 3711.0063220529428,
        3711.0063220529428 },

    // Pooled Parameter (Expression: AircraftModel.MinPWMLimit*ones(1,4))

    //  Referenced by:

    //    '<S8>/Constant9'

    //    '<S16>/Constant3'
    { 1000.0, 1000.0, 1000.0, 1000.0 },

    // Pooled Parameter (Mixed Expressions)

    //  Referenced by:

    //    '<S8>/Constant1'

    //    '<S16>/Constant4'
    { 2000.0, 2000.0, 2000.0, 2000.0 },

    // Computed Parameter: Constant6_Value

    //  Referenced by: '<Root>/Constant6'
    { 1000.0F, 1000.0F, 1000.0F, 1000.0F, 1000.0F, 1000.0F, 1000.0F, 1000.0F }
};

// Pooled Parameter (Mixed Expressions)
//  Referenced by:
//    '<S3>/Constant5'
//    '<S6>/Constant'
//    '<S7>/Constant'
//    '<S7>/Constant5'
//    '<S7>/Switch2'
//    '<S9>/Constant'
//    '<S9>/Constant2'
//    '<S12>/Gain1'
//    '<S12>/Gain16'
//    '<S12>/Gain3'
//    '<S12>/Delay'
//    '<S12>/Delay1'
//    '<S12>/Delay2'
//    '<S12>/Delay3'
//    '<S17>/Constant3'
//    '<S17>/Discrete-Time Integrator'
//    '<S17>/Gain1'
//    '<S17>/Gain4'
//    '<S18>/Constant4'
//    '<S18>/Discrete-Time Integrator'
//    '<S19>/Discrete-Time Integrator'
//    '<S20>/Constant3'
//    '<S20>/Discrete-Time Integrator'
//    '<S20>/Discrete-Time Integrator1'
//    '<S20>/Gain1'
//    '<S20>/Gain7'
//    '<S22>/Discrete-Time Integrator'
//    '<S22>/Discrete-Time Integrator1'
//    '<S22>/Gain'
//    '<S23>/Discrete-Time Integrator'
//    '<S23>/Discrete-Time Integrator1'
//    '<S23>/Gain5'
//    '<S31>/Constant2'
//    '<S41>/Saturation4'
//    '<S25>/UD'
//    '<S30>/UD'
#define rtCP_pooled1                   (0.0)

// Pooled Parameter (Mixed Expressions)
//  Referenced by:
//    '<S15>/Saturation2'
//    '<S15>/Saturation3'
#define rtCP_pooled2                   (5.0)

// Pooled Parameter (Mixed Expressions)
//  Referenced by:
//    '<S15>/Saturation2'
//    '<S15>/Saturation3'
#define rtCP_pooled3                   (-5.0)

// Pooled Parameter (Mixed Expressions)
//  Referenced by:
//    '<S15>/Saturation'
//    '<S15>/Saturation1'
#define rtCP_pooled4                   (30.0)

// Pooled Parameter (Mixed Expressions)
//  Referenced by:
//    '<S15>/Saturation'
//    '<S15>/Saturation1'
#define rtCP_pooled5                   (-30.0)

// Pooled Parameter (Expression: 1)
//  Referenced by:
//    '<S3>/Constant3'
//    '<S3>/Constant4'
//    '<S9>/Constant1'
//    '<S9>/Constant3'
//    '<S31>/Constant1'
#define rtCP_pooled6                   (1.0)

// Pooled Parameter (Expression: InitCond.TrimInputs)
//  Referenced by:
//    '<S7>/Constant6'
//    '<S8>/Constant13'
#define rtCP_pooled7_EL_0              (1101.7635434577232)
#define rtCP_pooled7_EL_1              (1101.7635434577232)
#define rtCP_pooled7_EL_2              (1101.7635434577232)
#define rtCP_pooled7_EL_3              (1101.7635434577232)

// Pooled Parameter (Mixed Expressions)
//  Referenced by:
//    '<S18>/Constant2'
//    '<S19>/Constant1'
//    '<S19>/Constant2'
#define rtCP_pooled10                  (-0.0)

// Pooled Parameter (Mixed Expressions)
//  Referenced by:
//    '<S22>/Constant1'
//    '<S23>/Constant1'
#define rtCP_pooled12                  (0.7)

// Expression: EMF.wnRoll
//  Referenced by: '<S23>/Constant'
#define rtCP_Constant_Value            (4.0)

// Expression: -1
//  Referenced by: '<S31>/Constant'
#define rtCP_Constant_Value_j          (-1.0)

// Expression: mean(InitCond.TrimInputs)*2
//  Referenced by: '<S31>/rotor speed'
#define rtCP_rotorspeed_Value          (2203.5270869154465)

// Pooled Parameter (Expression: )
//  Referenced by:
//    '<S25>/TSamp'
//    '<S30>/TSamp'
#define rtCP_pooled17                  (100.0)

// Pooled Parameter (Mixed Expressions)
//  Referenced by:
//    '<S12>/Gain10'
//    '<S17>/Gain3'
//    '<S22>/Constant'
#define rtCP_pooled18                  (3.0)

// Pooled Parameter (Expression: )
//  Referenced by:
//    '<S17>/Discrete-Time Integrator'
//    '<S18>/Discrete-Time Integrator'
//    '<S19>/Discrete-Time Integrator'
//    '<S20>/Discrete-Time Integrator'
//    '<S20>/Discrete-Time Integrator1'
//    '<S22>/Discrete-Time Integrator'
//    '<S22>/Discrete-Time Integrator1'
//    '<S23>/Discrete-Time Integrator'
//    '<S23>/Discrete-Time Integrator1'
#define rtCP_pooled19                  (0.01)

// Pooled Parameter (Expression: 2)
//  Referenced by:
//    '<S22>/Gain6'
//    '<S23>/Gain'
#define rtCP_pooled20                  (2.0)

// Expression: EMF.ACAH.RollD
//  Referenced by: '<S19>/Gain1'
#define rtCP_Gain1_Gain                (13.128055964894497)

// Expression: EMF.ACAH.RollP
//  Referenced by: '<S19>/Gain4'
#define rtCP_Gain4_Gain                (6.5640279824472483)

// Expression: EMF.ACAH.PitchD
//  Referenced by: '<S18>/Gain1'
#define rtCP_Gain1_Gain_k              (5.8737808065453967)

// Expression: EMF.ACAH.PitchP
//  Referenced by: '<S18>/Gain4'
#define rtCP_Gain4_Gain_m              (2.9368904032726983)

// Expression: EMF.ACAH.YawP
//  Referenced by: '<S20>/Gain9'
#define rtCP_Gain9_Gain                (2.9658362525847122)

// Expression: AircraftModel.MaxOmegaLimit(1)
//  Referenced by: '<S41>/Saturation4'
#define rtCP_Saturation4_UpperSat      (3711.0063220529428)

// Pooled Parameter (Mixed Expressions)
//  Referenced by:
//    '<Root>/emergency_switch'
//    '<S10>/Constant'
//    '<S11>/Constant'
//    '<S12>/Gain12'
#define rtCP_pooled21                  (0.5)

// Expression: EMF.TR.Ktr_Col
//  Referenced by: '<S12>/Gain8'
#define rtCP_Gain8_Gain                (0.3)

// Expression: EMF.RCHH.I
//  Referenced by: '<S17>/Gain2'
#define rtCP_Gain2_Gain                (1.5)

// Expression: EMF.ACAH.PitchI
//  Referenced by: '<S18>/Gain3'
#define rtCP_Gain3_Gain                (1.4684452016363492)

// Expression: EMF.ACAH.RollI
//  Referenced by: '<S19>/Gain2'
#define rtCP_Gain2_Gain_f              (3.2820139912236241)

// Expression: EMF.ACAH.YawI
//  Referenced by: '<S20>/Gain2'
#define rtCP_Gain2_Gain_n              (1.4829181262923561)

// Pooled Parameter (Mixed Expressions)
//  Referenced by:
//    '<S6>/Gain4'
//    '<S48>/Constant1'
//    '<S49>/Constant1'
//    '<S10>/Discrete-Time Integrator'
//    '<S11>/Discrete-Time Integrator'
//    '<S12>/Gain17'
//    '<S12>/Gain4'
//    '<S12>/Delay4'
//    '<S12>/Delay5'
//    '<S20>/Discrete-Time Integrator2'
//    '<S21>/Discrete-Time Integrator'
//    '<S24>/Discrete-Time Integrator'
//    '<S31>/Gain'
//    '<S31>/Gain1'
//    '<S31>/Gain2'
//    '<S31>/Gain3'
#define rtCP_pooled22                  (0.0F)

// Pooled Parameter (Expression: 1)
//  Referenced by:
//    '<S6>/Saturation'
//    '<S6>/Saturation1'
//    '<S6>/Saturation2'
//    '<S6>/Saturation3'
//    '<S48>/Constant2'
//    '<S49>/Constant2'
//    '<S50>/Constant2'
//    '<S51>/Constant2'
//    '<S52>/Constant2'
//    '<S53>/Constant2'
//    '<S31>/Saturation'
//    '<S31>/Saturation1'
//    '<S31>/Saturation2'
//    '<S31>/Saturation3'
#define rtCP_pooled23                  (1.0F)

// Pooled Parameter (Expression: -1)
//  Referenced by:
//    '<S4>/Gain'
//    '<S6>/Saturation'
//    '<S6>/Saturation1'
//    '<S6>/Saturation2'
//    '<S6>/Saturation3'
//    '<S50>/Constant1'
//    '<S51>/Constant1'
//    '<S52>/Constant1'
//    '<S53>/Constant1'
//    '<S10>/Gain'
//    '<S10>/Gain1'
//    '<S11>/Gain'
//    '<S31>/Saturation'
//    '<S31>/Saturation1'
//    '<S31>/Saturation2'
//    '<S31>/Saturation3'
#define rtCP_pooled24                  (-1.0F)

// Computed Parameter: Constant7_Value
//  Referenced by: '<Root>/Constant7'
#define rtCP_Constant7_Value_EL_0      (1000.0F)
#define rtCP_Constant7_Value_EL_1      (1000.0F)
#define rtCP_Constant7_Value_EL_2      (1000.0F)
#define rtCP_Constant7_Value_EL_3      (1000.0F)

// Pooled Parameter (Mixed Expressions)
//  Referenced by:
//    '<S21>/Constant'
//    '<S24>/Constant'
#define rtCP_pooled26                  (0.18F)

// Computed Parameter: Constant3_Value
//  Referenced by: '<S48>/Constant3'
#define rtCP_Constant3_Value           (1811.0F)

// Computed Parameter: Constant_Value_bp
//  Referenced by: '<S60>/Constant'
#define rtCP_Constant_Value_bp         (0.5F)

// Pooled Parameter (Expression: 1810)
//  Referenced by:
//    '<S4>/Saturation'
//    '<S4>/Saturation1'
//    '<S4>/Saturation2'
//    '<S4>/Saturation3'
//    '<S4>/Saturation4'
//    '<S4>/Saturation5'
//    '<S49>/Constant3'
//    '<S50>/Constant3'
//    '<S51>/Constant3'
//    '<S52>/Constant3'
//    '<S53>/Constant3'
#define rtCP_pooled27                  (1810.0F)

// Pooled Parameter (Expression: 174)
//  Referenced by:
//    '<S4>/Saturation'
//    '<S4>/Saturation1'
//    '<S4>/Saturation2'
//    '<S4>/Saturation3'
//    '<S4>/Saturation4'
//    '<S4>/Saturation5'
//    '<S48>/Constant'
//    '<S49>/Constant'
//    '<S50>/Constant'
//    '<S51>/Constant'
//    '<S52>/Constant'
//    '<S53>/Constant'
#define rtCP_pooled28                  (174.0F)

// Computed Parameter: Gain2_Gain_a
//  Referenced by: '<S6>/Gain2'
#define rtCP_Gain2_Gain_a              (-3.0F)

// Pooled Parameter (Expression: )
//  Referenced by:
//    '<S10>/Discrete-Time Integrator'
//    '<S11>/Discrete-Time Integrator'
//    '<S20>/Discrete-Time Integrator2'
//    '<S21>/Discrete-Time Integrator'
//    '<S24>/Discrete-Time Integrator'
#define rtCP_pooled29                  (0.01F)

// Computed Parameter: Switch1_Threshold
//  Referenced by: '<S3>/Switch1'
#define rtCP_Switch1_Threshold         (-0.2F)

// Pooled Parameter (Mixed Expressions)
//  Referenced by:
//    '<S4>/Constant'
//    '<S4>/Constant1'
//    '<S4>/Constant2'
//    '<S9>/Deadzone'
//    '<S9>/Deadzone1'
#define rtCP_pooled30                  (0.1F)

// Computed Parameter: P_V_S_Gain
//  Referenced by: '<S11>/P_V_S'
#define rtCP_P_V_S_Gain                (0.17453292F)

// Pooled Parameter (Mixed Expressions)
//  Referenced by:
//    '<S6>/Gain'
//    '<S6>/Gain1'
#define rtCP_pooled31                  (0.52359879F)

// Computed Parameter: P_V_F_Gain
//  Referenced by: '<S10>/P_V_F'
#define rtCP_P_V_F_Gain                (0.0872664601F)

// Computed Parameter: Gain3_Gain_n
//  Referenced by: '<S6>/Gain3'
#define rtCP_Gain3_Gain_n              (0.34906584F)

// Computed Parameter: Gain_Gain
//  Referenced by: '<Root>/Gain'
#define rtCP_Gain_Gain                 (100.0F)

// Pooled Parameter (Expression: 0.08)
//  Referenced by:
//    '<S10>/IntRat_V_F'
//    '<S11>/IntRat_V_S'
#define rtCP_pooled32                  (0.08F)

//===========*
//  Constants *
// ===========
#define RT_PI                          3.14159265358979323846
#define RT_PIF                         3.1415927F
#define RT_LN_10                       2.30258509299404568402
#define RT_LN_10F                      2.3025851F
#define RT_LOG10E                      0.43429448190325182765
#define RT_LOG10EF                     0.43429449F
#define RT_E                           2.7182818284590452354
#define RT_EF                          2.7182817F

//
//  UNUSED_PARAMETER(x)
//    Used to specify that a function parameter (argument) is required but not
//    accessed by the function body.
#ifndef UNUSED_PARAMETER
#if defined(__LCC__)
#define UNUSED_PARAMETER(x)                                      // do nothing
#else

//
//  This is the semi-ANSI standard way of indicating that an
//  unused function parameter is required.
#define UNUSED_PARAMETER(x)            (void) (x)
#endif
#endif

namespace bfs
{
    //
    // Output and update for atomic system:
    //    '<S16>/remap'
    //    '<S8>/remap'
    //
    void Autocode::remap(const real_T rtu_norm_in[4], const real_T rtu_in_min[4],
                         const real_T rtu_in_max[4], const real_T rtu_out_min[4],
                         const real_T rtu_out_max[4], real_T rty_raw_out[4])
    {
        // MATLAB Function 'EMF CLAWS/ACAH EMF1/Remap Rotor Speeds to PWM/remap': '<S42>:1'
        // '<S42>:1:2' raw_out = norm_in*0;
        // '<S42>:1:3' for i = 1:length(norm_in)
        // '<S42>:1:4' raw_out(i) = (norm_in(i) - in_min(i)) * (out_max(i) - out_min(i))/(in_max(i)-in_min(i)) + out_min(i);
        rty_raw_out[0] = (((rtu_norm_in[0] - rtu_in_min[0]) * (rtu_out_max[0] -
                            rtu_out_min[0])) / (rtu_in_max[0] - rtu_in_min[0]))
            + rtu_out_min[0];

        // '<S42>:1:4' raw_out(i) = (norm_in(i) - in_min(i)) * (out_max(i) - out_min(i))/(in_max(i)-in_min(i)) + out_min(i);
        rty_raw_out[1] = (((rtu_norm_in[1] - rtu_in_min[1]) * (rtu_out_max[1] -
                            rtu_out_min[1])) / (rtu_in_max[1] - rtu_in_min[1]))
            + rtu_out_min[1];

        // '<S42>:1:4' raw_out(i) = (norm_in(i) - in_min(i)) * (out_max(i) - out_min(i))/(in_max(i)-in_min(i)) + out_min(i);
        rty_raw_out[2] = (((rtu_norm_in[2] - rtu_in_min[2]) * (rtu_out_max[2] -
                            rtu_out_min[2])) / (rtu_in_max[2] - rtu_in_min[2]))
            + rtu_out_min[2];

        // '<S42>:1:4' raw_out(i) = (norm_in(i) - in_min(i)) * (out_max(i) - out_min(i))/(in_max(i)-in_min(i)) + out_min(i);
        rty_raw_out[3] = (((rtu_norm_in[3] - rtu_in_min[3]) * (rtu_out_max[3] -
                            rtu_out_min[3])) / (rtu_in_max[3] - rtu_in_min[3]))
            + rtu_out_min[3];
    }
}

namespace bfs
{
    //
    // Output and update for atomic system:
    //    '<S48>/remap'
    //    '<S49>/remap'
    //    '<S52>/remap'
    //
    void Autocode::remap_m(real32_T rtu_raw_in, real32_T rtu_in_min, real32_T
                           rtu_in_max, real32_T rtu_out_min, real32_T
                           rtu_out_max, real32_T *rty_norm_out)
    {
        // MATLAB Function 'command selection/e-stop/remap': '<S54>:1'
        // '<S54>:1:2' norm_out = (raw_in - in_min) * (out_max - out_min)/(in_max-in_min) + out_min;
        *rty_norm_out = (((rtu_raw_in - rtu_in_min) * (rtu_out_max - rtu_out_min))
                         / (rtu_in_max - rtu_in_min)) + rtu_out_min;
    }
}

namespace bfs
{
    //
    // Output and update for atomic system:
    //    '<S50>/remap_with_deadband'
    //    '<S51>/remap_with_deadband'
    //    '<S53>/remap_with_deadband'
    //
    void Autocode::remap_with_deadband(real32_T rtu_raw_in, real32_T rtu_in_min,
        real32_T rtu_in_max, real32_T rtu_out_min, real32_T rtu_out_max,
        real32_T rtu_deadband, real32_T *rty_norm_out)
    {
        real32_T in_avg;
        real32_T in_deadband_low;
        real32_T in_deadband_range;
        real32_T out_avg;

        // MATLAB Function 'command selection/pitch_norm_deadband/remap_with_deadband': '<S56>:1'
        // '<S56>:1:2' in_avg = (in_min + in_max) / 2;
        in_avg = (rtu_in_min + rtu_in_max) / 2.0F;

        // '<S56>:1:3' out_avg = (out_min + out_max) / 2;
        out_avg = (rtu_out_min + rtu_out_max) / 2.0F;

        // '<S56>:1:5' in_deadband_range = (in_max - in_min) * deadband / 2;
        in_deadband_range = ((rtu_in_max - rtu_in_min) * rtu_deadband) / 2.0F;

        // '<S56>:1:6' in_deadband_low = in_avg - in_deadband_range;
        in_deadband_low = in_avg - in_deadband_range;

        // '<S56>:1:7' in_deadband_hi = in_avg + in_deadband_range;
        in_avg += in_deadband_range;

        // '<S56>:1:9' if raw_in < in_deadband_low
        if (rtu_raw_in < in_deadband_low) {
            // '<S56>:1:10' norm_out = (raw_in - in_deadband_low) .* (out_max - out_avg)./(in_deadband_low - in_min) + out_avg;
            *rty_norm_out = (((rtu_raw_in - in_deadband_low) * (rtu_out_max -
                               out_avg)) / (in_deadband_low - rtu_in_min)) +
                out_avg;
        } else if ((rtu_raw_in > in_deadband_low) && (rtu_raw_in < in_avg)) {
            // '<S56>:1:11' elseif raw_in > in_deadband_low && raw_in < in_deadband_hi
            // '<S56>:1:12' norm_out = out_avg;
            *rty_norm_out = out_avg;
        } else {
            // '<S56>:1:13' else
            // '<S56>:1:14' norm_out = (raw_in - in_deadband_hi) .* (out_max - out_avg)./(in_max - in_deadband_hi) + out_avg;
            *rty_norm_out = (((rtu_raw_in - in_avg) * (rtu_out_max - out_avg)) /
                             (rtu_in_max - in_avg)) + out_avg;
        }
    }
}

namespace bfs
{
    // Model step function
    void Autocode::Run(VmsData *arg_VmsData, TelemData *arg_Telemetry_Data,
                       StateEstData *arg_StateEstData, SensorData
                       *arg_Sensor_Data, SysData *arg_System_Data)
    {
        real_T rtb_Sum2_p[4];
        real_T rtb_raw_out[4];
        real_T rtb_Gain1_g;
        real_T rtb_Gain4_h;
        real_T rtb_Product;
        real_T rtb_Product_i;
        real_T rtb_Product_l;
        real_T rtb_Product_p;
        real_T rtb_Sum;
        real_T rtb_Sum2_gy_idx_1;
        real_T rtb_Sum2_gy_idx_2;
        real_T rtb_Sum2_gy_idx_3;
        real_T rtb_Sum5_a;
        real_T rtb_Sum_k;
        real_T rtb_TSamp;
        real_T rtb_TSamp_k;
        real_T rtb_feedforward;
        real_T rtb_p_ideal;
        real_T rtb_pdot_ideal;
        real_T rtb_phi_err_g;
        real_T rtb_phi_ideal;
        real_T rtb_q_ideal;
        real_T rtb_qdot_ideal;
        real_T rtb_r_err;
        real_T rtb_theta_err;
        real_T rtb_theta_ideal;
        real_T u0;
        int32_T i;
        real32_T rtb_PWM_cont[8];
        real32_T rtb_DiscreteTimeIntegrator2;
        real32_T rtb_Gain17;
        real32_T rtb_Gain4_k;
        real32_T rtb_Gain_a;
        real32_T rtb_P_V_S;
        real32_T rtb_Switch1_idx_0;
        real32_T rtb_Switch1_idx_1;
        real32_T rtb_Switch1_idx_2;
        real32_T rtb_Switch1_idx_3;
        real32_T rtb_norm_out;
        real32_T rtb_norm_out_b;
        real32_T rtb_norm_out_g;
        real32_T rtb_norm_out_k;
        real32_T rtb_norm_out_m;
        real32_T rtb_raw_out_c;
        real32_T rtb_rdot_ideal;
        real32_T rtb_w_ideal;
        real32_T rtb_wdot_ideal;
        boolean_T rtb_Compare;
        boolean_T rtb_LogicalOperator1;
        UNUSED_PARAMETER(arg_Telemetry_Data);
        UNUSED_PARAMETER(arg_System_Data);

        // Saturate: '<S4>/Saturation5' incorporates:
        //   DataTypeConversion: '<S4>/Data Type Conversion7'
        //   Inport: '<Root>/Sensor Data'
        if (static_cast<real32_T>(arg_Sensor_Data->inceptor.ch[4]) >
            rtCP_pooled27) {
            rtb_Switch1_idx_3 = rtCP_pooled27;
        } else if (static_cast<real32_T>(arg_Sensor_Data->inceptor.ch[4]) <
                   rtCP_pooled28) {
            rtb_Switch1_idx_3 = rtCP_pooled28;
        } else {
            rtb_Switch1_idx_3 = static_cast<real32_T>
                (arg_Sensor_Data->inceptor.ch[4]);
        }

        // MATLAB Function: '<S49>/remap' incorporates:
        //   Constant: '<S49>/Constant'
        //   Constant: '<S49>/Constant1'
        //   Constant: '<S49>/Constant2'
        //   Constant: '<S49>/Constant3'
        //   Saturate: '<S4>/Saturation5'
        remap_m(rtb_Switch1_idx_3, rtCP_pooled28, rtCP_pooled27, rtCP_pooled22,
                rtCP_pooled23, &rtb_norm_out_m);

        // RelationalOperator: '<S60>/Compare' incorporates:
        //   Constant: '<S60>/Constant'
        rtb_Compare = (rtb_norm_out_m > rtCP_Constant_Value_bp);

        // Saturate: '<S4>/Saturation' incorporates:
        //   DataTypeConversion: '<S4>/Data Type Conversion5'
        //   Inport: '<Root>/Sensor Data'
        if (static_cast<real32_T>(arg_Sensor_Data->inceptor.ch[0]) >
            rtCP_pooled27) {
            rtb_Switch1_idx_3 = rtCP_pooled27;
        } else if (static_cast<real32_T>(arg_Sensor_Data->inceptor.ch[0]) <
                   rtCP_pooled28) {
            rtb_Switch1_idx_3 = rtCP_pooled28;
        } else {
            rtb_Switch1_idx_3 = static_cast<real32_T>
                (arg_Sensor_Data->inceptor.ch[0]);
        }

        // MATLAB Function: '<S52>/remap' incorporates:
        //   Constant: '<S52>/Constant'
        //   Constant: '<S52>/Constant1'
        //   Constant: '<S52>/Constant2'
        //   Constant: '<S52>/Constant3'
        //   Saturate: '<S4>/Saturation'
        remap_m(rtb_Switch1_idx_3, rtCP_pooled28, rtCP_pooled27, rtCP_pooled24,
                rtCP_pooled23, &rtb_norm_out_b);

        // Saturate: '<S31>/Saturation2'
        if (rtb_norm_out_b > rtCP_pooled23) {
            // Saturate: '<S6>/Saturation2'
            rtb_Switch1_idx_0 = rtCP_pooled23;
        } else if (rtb_norm_out_b < rtCP_pooled24) {
            // Saturate: '<S6>/Saturation2'
            rtb_Switch1_idx_0 = rtCP_pooled24;
        } else {
            // Saturate: '<S6>/Saturation2'
            rtb_Switch1_idx_0 = rtb_norm_out_b;
        }

        // MATLAB Function: '<S31>/remap throttle to RPM' incorporates:
        //   Constant: '<S31>/Constant'
        //   Constant: '<S31>/Constant1'
        //   Constant: '<S31>/Constant2'
        //   Constant: '<S31>/rotor speed'
        //   Saturate: '<S31>/Saturation2'

        // MATLAB Function 'EMF CLAWS/ACAH EMF1/OnGroundController/Get ACAH Commands1/remap throttle to RPM': '<S32>:1'
        // '<S32>:1:2' raw_out = (norm_in - in_min) * (out_max - out_min)/(in_max-in_min) + out_min;
        rtb_raw_out_c = (((rtb_Switch1_idx_0 - static_cast<real32_T>
                           (rtCP_Constant_Value_j)) * static_cast<real32_T>(
                           static_cast<real_T>(rtCP_rotorspeed_Value -
                            rtCP_pooled1))) / static_cast<real32_T>(static_cast<
                          real_T>(rtCP_pooled6 - rtCP_Constant_Value_j))) +
            static_cast<real32_T>(rtCP_pooled1);

        // DiscreteIntegrator: '<S21>/Discrete-Time Integrator'
        rtb_w_ideal = rtDWork.DiscreteTimeIntegrator_DSTATE_l;

        // Product: '<S21>/Divide' incorporates:
        //   Constant: '<S21>/Constant'
        //   DiscreteIntegrator: '<S21>/Discrete-Time Integrator'
        //   Gain: '<S6>/Gain2'
        //   Gain: '<S6>/Gain4'
        //   Sum: '<S21>/Sum'
        rtb_wdot_ideal = ((rtCP_pooled22 * (rtCP_Gain2_Gain_a *
                            rtb_Switch1_idx_0)) -
                          rtDWork.DiscreteTimeIntegrator_DSTATE_l) /
            rtCP_pooled26;

        // Gain: '<S12>/Gain17' incorporates:
        //   DiscreteIntegrator: '<S21>/Discrete-Time Integrator'
        //   Product: '<S21>/Divide1'
        //   Product: '<S21>/Product3'
        //   Sum: '<S21>/Sum2'
        rtb_Gain17 = rtCP_pooled22 * ((rtb_wdot_ideal -
            (rtConstB.uDLookupTable_i * rtDWork.DiscreteTimeIntegrator_DSTATE_l))
            / rtConstB.uDLookupTable1_p);

        // Switch: '<S3>/Switch1' incorporates:
        //   Constant: '<S3>/Constant4'
        //   Constant: '<S3>/Constant5'
        if (rtb_norm_out_b > rtCP_Switch1_Threshold) {
            rtb_Sum_k = rtCP_pooled6;
        } else {
            rtb_Sum_k = rtCP_pooled1;
        }

        // Outputs for Enabled SubSystem: '<S46>/D Latch' incorporates:
        //   EnablePort: '<S47>/C'

        // DataTypeConversion: '<S3>/Data Type Conversion3' incorporates:
        //   Switch: '<S3>/Switch1'
        if (static_cast<real32_T>(rtb_Sum_k) > 0.0F) {
            // SignalConversion generated from: '<S47>/D'
            rtDWork.bitsForTID0.D = rtConstB.DataTypeConversion2;
        }

        // End of DataTypeConversion: '<S3>/Data Type Conversion3'
        // End of Outputs for SubSystem: '<S46>/D Latch'

        // Gain: '<S17>/Gain4' incorporates:
        //   Constant: '<S17>/Constant3'
        //   Delay: '<S12>/Delay4'
        //   Inport: '<Root>/StateEstData'
        //   Product: '<S17>/Product1'
        //   Sum: '<S17>/Sum1'
        //   Sum: '<S17>/Sum3'
        rtb_Gain4_h = rtCP_pooled1 * (rtDWork.bitsForTID0.D ?
            (static_cast<real_T>(rtDWork.Delay4_DSTATE) - (static_cast<real_T>
            (arg_StateEstData->bfs_ins.ned_vel_mps[2]) - rtCP_pooled1)) : 0.0);

        // SampleTimeMath: '<S25>/TSamp'
        //
        //  About '<S25>/TSamp':
        //   y = u * K where K = 1 / ( w * Ts )
        //
        rtb_TSamp = rtb_Gain4_h * rtCP_pooled17;

        // Product: '<S17>/Product' incorporates:
        //   DiscreteIntegrator: '<S17>/Discrete-Time Integrator'
        //   Gain: '<S17>/Gain1'
        //   Gain: '<S17>/Gain3'
        //   Sum: '<S17>/Sum2'
        //   Sum: '<S25>/Diff'
        //   UnitDelay: '<S25>/UD'
        //
        //  Block description for '<S25>/Diff':
        //
        //   Add in CPU
        //
        //  Block description for '<S25>/UD':
        //
        //   Store in Global RAM
        rtb_Product = rtConstB.Sign * ((rtCP_pooled1 * (rtb_TSamp -
            rtDWork.UD_DSTATE)) + (rtCP_pooled18 * rtb_Gain4_h) +
            rtDWork.DiscreteTimeIntegrator_DSTATE);

        // Saturate: '<S4>/Saturation2' incorporates:
        //   DataTypeConversion: '<S4>/Data Type Conversion3'
        //   Inport: '<Root>/Sensor Data'
        if (static_cast<real32_T>(arg_Sensor_Data->inceptor.ch[1]) >
            rtCP_pooled27) {
            rtb_Switch1_idx_3 = rtCP_pooled27;
        } else if (static_cast<real32_T>(arg_Sensor_Data->inceptor.ch[1]) <
                   rtCP_pooled28) {
            rtb_Switch1_idx_3 = rtCP_pooled28;
        } else {
            rtb_Switch1_idx_3 = static_cast<real32_T>
                (arg_Sensor_Data->inceptor.ch[1]);
        }

        // MATLAB Function: '<S51>/remap_with_deadband' incorporates:
        //   Constant: '<S4>/Constant1'
        //   Constant: '<S51>/Constant'
        //   Constant: '<S51>/Constant1'
        //   Constant: '<S51>/Constant2'
        //   Constant: '<S51>/Constant3'
        //   Saturate: '<S4>/Saturation2'
        remap_with_deadband(rtb_Switch1_idx_3, rtCP_pooled28, rtCP_pooled27,
                            rtCP_pooled24, rtCP_pooled23, rtCP_pooled30,
                            &rtb_norm_out_k);

        // Switch: '<S9>/Deadzone' incorporates:
        //   Abs: '<S9>/Abs'
        //   Constant: '<S9>/Constant2'
        //   Constant: '<S9>/Constant3'
        if (std::abs(rtb_norm_out_k) > rtCP_pooled30) {
            rtb_Sum_k = rtCP_pooled1;
        } else {
            rtb_Sum_k = rtCP_pooled6;
        }

        // Logic: '<S9>/Logical Operator' incorporates:
        //   Constant: '<S6>/Constant'
        //   Switch: '<S9>/Deadzone'
        rtb_LogicalOperator1 = ((rtb_Sum_k != 0.0) && (rtCP_pooled1 != 0.0) &&
                                rtDWork.bitsForTID0.D);

        // Trigonometry: '<S6>/Trigonometric Function1' incorporates:
        //   Inport: '<Root>/StateEstData'
        rtb_Gain_a = std::sin(arg_StateEstData->bfs_ins.heading_rad);

        // Trigonometry: '<S6>/Trigonometric Function' incorporates:
        //   Inport: '<Root>/StateEstData'
        rtb_DiscreteTimeIntegrator2 = std::cos
            (arg_StateEstData->bfs_ins.heading_rad);

        // Gain: '<S11>/P_V_S' incorporates:
        //   Gain: '<S11>/Gain'
        //   Inport: '<Root>/StateEstData'
        //   Product: '<S6>/Product2'
        //   Product: '<S6>/Product3'
        //   Sum: '<S6>/Sum1'
        rtb_P_V_S = rtCP_P_V_S_Gain * (rtCP_pooled24 *
            ((rtb_DiscreteTimeIntegrator2 *
              arg_StateEstData->bfs_ins.ned_vel_mps[1]) -
             (arg_StateEstData->bfs_ins.ned_vel_mps[0] * rtb_Gain_a)));

        // Sum: '<S11>/Sum' incorporates:
        //   Constant: '<S11>/Constant'
        rtb_Sum = static_cast<real_T>(rtb_LogicalOperator1 ? 1.0 : 0.0) -
            rtCP_pooled21;

        // DiscreteIntegrator: '<S11>/Discrete-Time Integrator'
        if ((rtb_Sum > 0.0) && (rtDWork.DiscreteTimeIntegrator_PrevRese <= 0)) {
            rtDWork.DiscreteTimeIntegrator_DSTATE_i = rtCP_pooled22;
        }

        // DiscreteIntegrator: '<S23>/Discrete-Time Integrator'
        rtb_phi_ideal = rtDWork.DiscreteTimeIntegrator_DSTATE_o;

        // DiscreteIntegrator: '<S23>/Discrete-Time Integrator1'
        rtb_p_ideal = rtDWork.DiscreteTimeIntegrator1_DSTATE;

        // Saturate: '<S6>/Saturation'
        if (rtb_norm_out_k > rtCP_pooled23) {
            // Saturate: '<S31>/Saturation' incorporates:
            //   Switch: '<S7>/Switch1'
            rtb_Switch1_idx_1 = rtCP_pooled23;
        } else if (rtb_norm_out_k < rtCP_pooled24) {
            // Saturate: '<S31>/Saturation' incorporates:
            //   Switch: '<S7>/Switch1'
            rtb_Switch1_idx_1 = rtCP_pooled24;
        } else {
            // Saturate: '<S31>/Saturation' incorporates:
            //   Switch: '<S7>/Switch1'
            rtb_Switch1_idx_1 = rtb_norm_out_k;
        }

        // Sum: '<S23>/Sum' incorporates:
        //   Constant: '<S23>/Constant'
        //   Constant: '<S23>/Constant1'
        //   DiscreteIntegrator: '<S11>/Discrete-Time Integrator'
        //   DiscreteIntegrator: '<S23>/Discrete-Time Integrator'
        //   DiscreteIntegrator: '<S23>/Discrete-Time Integrator1'
        //   Gain: '<S23>/Gain'
        //   Gain: '<S6>/Gain'
        //   Product: '<S11>/Product'
        //   Product: '<S23>/Product'
        //   Product: '<S23>/Product1'
        //   Product: '<S23>/Product2'
        //   Saturate: '<S6>/Saturation'
        //   Sum: '<S11>/Sum2'
        //   Sum: '<S23>/Sum1'
        //   Sum: '<S6>/Sum2'
        rtb_pdot_ideal = (static_cast<real_T>(static_cast<real32_T>
                           ((rtb_LogicalOperator1 ? (rtb_P_V_S +
                              rtDWork.DiscreteTimeIntegrator_DSTATE_i) : 0.0F) +
                            (rtCP_pooled31 * rtb_Switch1_idx_1))) *
                          rtConstB.Square_h) -
            ((rtDWork.DiscreteTimeIntegrator_DSTATE_o * rtConstB.Square1_o) +
             (rtCP_pooled20 * ((rtDWork.DiscreteTimeIntegrator1_DSTATE *
                                rtCP_Constant_Value) * rtCP_pooled12)));

        // Gain: '<S12>/Gain3' incorporates:
        //   DiscreteIntegrator: '<S23>/Discrete-Time Integrator1'
        //   Product: '<S23>/Divide'
        //   Product: '<S23>/Product3'
        //   Sum: '<S23>/Sum2'
        //   Sum: '<S23>/Sum3'
        rtb_feedforward = rtCP_pooled1 * ((rtb_pdot_ideal -
            (rtConstB.uDLookupTable_n * rtDWork.DiscreteTimeIntegrator1_DSTATE)
            - rtConstB.Gain5) / rtConstB.uDLookupTable2);

        // Product: '<S19>/Product1' incorporates:
        //   Constant: '<S19>/Constant1'
        //   Delay: '<S12>/Delay1'
        //   Inport: '<Root>/StateEstData'
        //   Sum: '<S19>/Sum1'
        //   Sum: '<S19>/Sum3'
        rtb_phi_err_g = rtDWork.bitsForTID0.D ? (rtDWork.Delay1_DSTATE - (
            static_cast<real_T>(arg_StateEstData->bfs_ins.roll_rad) -
            rtCP_pooled10)) : 0.0;

        // Product: '<S19>/Product' incorporates:
        //   Constant: '<S19>/Constant2'
        //   Delay: '<S12>/Delay'
        //   DiscreteIntegrator: '<S19>/Discrete-Time Integrator'
        //   Gain: '<S19>/Gain1'
        //   Gain: '<S19>/Gain4'
        //   Inport: '<Root>/StateEstData'
        //   Product: '<S19>/Product2'
        //   Sum: '<S19>/Sum'
        //   Sum: '<S19>/Sum2'
        //   Sum: '<S19>/Sum4'
        rtb_Product_l = rtConstB.Sign_l * ((rtCP_Gain1_Gain *
            (rtDWork.bitsForTID0.D ? (rtDWork.Delay_DSTATE - (static_cast<real_T>
            (arg_StateEstData->bfs_ins.gyro_radps[0]) - rtCP_pooled10)) : 0.0))
            + (rtCP_Gain4_Gain * rtb_phi_err_g) +
            rtDWork.DiscreteTimeIntegrator_DSTATE_n);

        // Saturate: '<S4>/Saturation1' incorporates:
        //   DataTypeConversion: '<S4>/Data Type Conversion4'
        //   Inport: '<Root>/Sensor Data'
        if (static_cast<real32_T>(arg_Sensor_Data->inceptor.ch[2]) >
            rtCP_pooled27) {
            rtb_Switch1_idx_3 = rtCP_pooled27;
        } else if (static_cast<real32_T>(arg_Sensor_Data->inceptor.ch[2]) <
                   rtCP_pooled28) {
            rtb_Switch1_idx_3 = rtCP_pooled28;
        } else {
            rtb_Switch1_idx_3 = static_cast<real32_T>
                (arg_Sensor_Data->inceptor.ch[2]);
        }

        // MATLAB Function: '<S50>/remap_with_deadband' incorporates:
        //   Constant: '<S4>/Constant'
        //   Constant: '<S50>/Constant'
        //   Constant: '<S50>/Constant1'
        //   Constant: '<S50>/Constant2'
        //   Constant: '<S50>/Constant3'
        //   Saturate: '<S4>/Saturation1'
        remap_with_deadband(rtb_Switch1_idx_3, rtCP_pooled28, rtCP_pooled27,
                            rtCP_pooled24, rtCP_pooled23, rtCP_pooled30,
                            &rtb_norm_out_g);

        // Gain: '<S4>/Gain'
        rtb_norm_out_g *= rtCP_pooled24;

        // Switch: '<S9>/Deadzone1' incorporates:
        //   Abs: '<S9>/Abs1'
        //   Constant: '<S9>/Constant'
        //   Constant: '<S9>/Constant1'
        if (std::abs(rtb_norm_out_g) > rtCP_pooled30) {
            rtb_Sum_k = rtCP_pooled1;
        } else {
            rtb_Sum_k = rtCP_pooled6;
        }

        // Logic: '<S9>/Logical Operator1' incorporates:
        //   Constant: '<S6>/Constant'
        //   Switch: '<S9>/Deadzone1'
        rtb_LogicalOperator1 = ((rtb_Sum_k != 0.0) && (rtCP_pooled1 != 0.0) &&
                                rtDWork.bitsForTID0.D);

        // Gain: '<S10>/P_V_F' incorporates:
        //   Gain: '<S10>/Gain'
        //   Inport: '<Root>/StateEstData'
        //   Product: '<S6>/Product'
        //   Product: '<S6>/Product1'
        //   Sum: '<S6>/Sum'
        rtb_Gain_a = rtCP_P_V_F_Gain * (rtCP_pooled24 *
            ((arg_StateEstData->bfs_ins.ned_vel_mps[0] *
              rtb_DiscreteTimeIntegrator2) + (rtb_Gain_a *
            arg_StateEstData->bfs_ins.ned_vel_mps[1])));

        // Sum: '<S10>/Sum' incorporates:
        //   Constant: '<S10>/Constant'
        rtb_Sum_k = static_cast<real_T>(rtb_LogicalOperator1 ? 1.0 : 0.0) -
            rtCP_pooled21;

        // DiscreteIntegrator: '<S10>/Discrete-Time Integrator'
        if ((rtb_Sum_k > 0.0) && (rtDWork.DiscreteTimeIntegrator_PrevRe_i <= 0))
        {
            rtDWork.DiscreteTimeIntegrator_DSTATE_g = rtCP_pooled22;
        }

        // DiscreteIntegrator: '<S22>/Discrete-Time Integrator1'
        rtb_theta_ideal = rtDWork.DiscreteTimeIntegrator1_DSTAT_p;

        // DiscreteIntegrator: '<S22>/Discrete-Time Integrator'
        rtb_q_ideal = rtDWork.DiscreteTimeIntegrator_DSTATE_m;

        // Saturate: '<S6>/Saturation1'
        if (rtb_norm_out_g > rtCP_pooled23) {
            // Saturate: '<S31>/Saturation1' incorporates:
            //   Switch: '<S7>/Switch1'
            rtb_Switch1_idx_2 = rtCP_pooled23;
        } else if (rtb_norm_out_g < rtCP_pooled24) {
            // Saturate: '<S31>/Saturation1' incorporates:
            //   Switch: '<S7>/Switch1'
            rtb_Switch1_idx_2 = rtCP_pooled24;
        } else {
            // Saturate: '<S31>/Saturation1' incorporates:
            //   Switch: '<S7>/Switch1'
            rtb_Switch1_idx_2 = rtb_norm_out_g;
        }

        // Sum: '<S22>/Sum4' incorporates:
        //   Constant: '<S22>/Constant'
        //   Constant: '<S22>/Constant1'
        //   DiscreteIntegrator: '<S10>/Discrete-Time Integrator'
        //   DiscreteIntegrator: '<S22>/Discrete-Time Integrator'
        //   DiscreteIntegrator: '<S22>/Discrete-Time Integrator1'
        //   Gain: '<S10>/Gain1'
        //   Gain: '<S22>/Gain6'
        //   Gain: '<S6>/Gain1'
        //   Product: '<S10>/Product'
        //   Product: '<S22>/Product'
        //   Product: '<S22>/Product1'
        //   Product: '<S22>/Product2'
        //   Saturate: '<S6>/Saturation1'
        //   Sum: '<S10>/Sum2'
        //   Sum: '<S22>/Sum5'
        //   Sum: '<S6>/Sum3'
        rtb_qdot_ideal = (static_cast<real_T>(static_cast<real32_T>
                           ((rtb_LogicalOperator1 ? (rtCP_pooled24 * (rtb_Gain_a
                               + rtDWork.DiscreteTimeIntegrator_DSTATE_g)) :
                             0.0F) + (rtCP_pooled31 * rtb_Switch1_idx_2))) *
                          rtConstB.Square) -
            ((rtDWork.DiscreteTimeIntegrator1_DSTAT_p * rtConstB.Square1) +
             (rtCP_pooled20 * ((rtDWork.DiscreteTimeIntegrator_DSTATE_m *
                                rtCP_pooled18) * rtCP_pooled12)));

        // Gain: '<S12>/Gain1' incorporates:
        //   DiscreteIntegrator: '<S22>/Discrete-Time Integrator'
        //   DiscreteIntegrator: '<S22>/Discrete-Time Integrator1'
        //   Gain: '<S22>/Gain'
        //   Product: '<S22>/Divide'
        //   Product: '<S22>/Product3'
        //   Sum: '<S22>/Sum2'
        //   Sum: '<S22>/Sum3'
        rtb_Gain1_g = rtCP_pooled1 * ((rtb_qdot_ideal - (rtConstB.uDLookupTable *
            rtDWork.DiscreteTimeIntegrator_DSTATE_m) - (rtCP_pooled1 *
            rtDWork.DiscreteTimeIntegrator1_DSTAT_p)) /
            rtConstB.uDLookupTable1_f);

        // Product: '<S18>/Product1' incorporates:
        //   Constant: '<S18>/Constant4'
        //   Delay: '<S12>/Delay3'
        //   Inport: '<Root>/StateEstData'
        //   Sum: '<S18>/Sum1'
        //   Sum: '<S18>/Sum3'
        rtb_theta_err = rtDWork.bitsForTID0.D ? (rtDWork.Delay3_DSTATE - (
            static_cast<real_T>(arg_StateEstData->bfs_ins.pitch_rad) -
            rtCP_pooled1)) : 0.0;

        // Product: '<S18>/Product' incorporates:
        //   Constant: '<S18>/Constant2'
        //   Delay: '<S12>/Delay2'
        //   DiscreteIntegrator: '<S18>/Discrete-Time Integrator'
        //   Gain: '<S18>/Gain1'
        //   Gain: '<S18>/Gain4'
        //   Inport: '<Root>/StateEstData'
        //   Product: '<S18>/Product2'
        //   Sum: '<S18>/Sum'
        //   Sum: '<S18>/Sum2'
        //   Sum: '<S18>/Sum4'
        rtb_Product_i = rtConstB.Sign_a * ((rtCP_Gain1_Gain_k *
            (rtDWork.bitsForTID0.D ? (rtDWork.Delay2_DSTATE - (static_cast<
            real_T>(arg_StateEstData->bfs_ins.gyro_radps[1]) - rtCP_pooled10)) :
             0.0)) + (rtCP_Gain4_Gain_m * rtb_theta_err) +
            rtDWork.DiscreteTimeIntegrator_DSTATE_p);

        // Saturate: '<S4>/Saturation3' incorporates:
        //   DataTypeConversion: '<S4>/Data Type Conversion2'
        //   Inport: '<Root>/Sensor Data'
        if (static_cast<real32_T>(arg_Sensor_Data->inceptor.ch[3]) >
            rtCP_pooled27) {
            rtb_Switch1_idx_3 = rtCP_pooled27;
        } else if (static_cast<real32_T>(arg_Sensor_Data->inceptor.ch[3]) <
                   rtCP_pooled28) {
            rtb_Switch1_idx_3 = rtCP_pooled28;
        } else {
            rtb_Switch1_idx_3 = static_cast<real32_T>
                (arg_Sensor_Data->inceptor.ch[3]);
        }

        // MATLAB Function: '<S53>/remap_with_deadband' incorporates:
        //   Constant: '<S4>/Constant2'
        //   Constant: '<S53>/Constant'
        //   Constant: '<S53>/Constant1'
        //   Constant: '<S53>/Constant2'
        //   Constant: '<S53>/Constant3'
        //   Saturate: '<S4>/Saturation3'
        remap_with_deadband(rtb_Switch1_idx_3, rtCP_pooled28, rtCP_pooled27,
                            rtCP_pooled24, rtCP_pooled23, rtCP_pooled30,
                            &rtb_norm_out);

        // DiscreteIntegrator: '<S24>/Discrete-Time Integrator'
        rtb_DiscreteTimeIntegrator2 = rtDWork.DiscreteTimeIntegrator_DSTAT_ax;

        // Saturate: '<S6>/Saturation3'
        if (rtb_norm_out > rtCP_pooled23) {
            // Saturate: '<S31>/Saturation3' incorporates:
            //   Switch: '<S7>/Switch1'
            rtb_Switch1_idx_3 = rtCP_pooled23;
        } else if (rtb_norm_out < rtCP_pooled24) {
            // Saturate: '<S31>/Saturation3' incorporates:
            //   Switch: '<S7>/Switch1'
            rtb_Switch1_idx_3 = rtCP_pooled24;
        } else {
            // Saturate: '<S31>/Saturation3' incorporates:
            //   Switch: '<S7>/Switch1'
            rtb_Switch1_idx_3 = rtb_norm_out;
        }

        // Product: '<S24>/Divide' incorporates:
        //   Constant: '<S24>/Constant'
        //   DiscreteIntegrator: '<S24>/Discrete-Time Integrator'
        //   Gain: '<S6>/Gain3'
        //   Saturate: '<S6>/Saturation3'
        //   Sum: '<S24>/Sum'
        rtb_rdot_ideal = ((rtCP_Gain3_Gain_n * rtb_Switch1_idx_3) -
                          rtDWork.DiscreteTimeIntegrator_DSTAT_ax) /
            rtCP_pooled26;

        // Gain: '<S12>/Gain4' incorporates:
        //   DiscreteIntegrator: '<S24>/Discrete-Time Integrator'
        //   Product: '<S24>/Divide1'
        //   Product: '<S24>/Product3'
        //   Sum: '<S24>/Sum2'
        rtb_Gain4_k = rtCP_pooled22 * ((rtb_rdot_ideal -
            (rtConstB.uDLookupTable1_pb *
             rtDWork.DiscreteTimeIntegrator_DSTAT_ax)) /
            rtConstB.uDLookupTable2_a);

        // Sum: '<S20>/Sum5' incorporates:
        //   Constant: '<S20>/Constant3'
        //   Inport: '<Root>/StateEstData'
        rtb_Sum5_a = static_cast<real_T>(arg_StateEstData->bfs_ins.gyro_radps[2])
            - rtCP_pooled1;

        // Product: '<S20>/Product1' incorporates:
        //   Delay: '<S12>/Delay5'
        //   Sum: '<S20>/Sum1'
        rtb_r_err = rtDWork.bitsForTID0.D ? (static_cast<real_T>
            (rtDWork.Delay5_DSTATE) - rtb_Sum5_a) : 0.0;

        // SampleTimeMath: '<S30>/TSamp'
        //
        //  About '<S30>/TSamp':
        //   y = u * K where K = 1 / ( w * Ts )
        //
        rtb_TSamp_k = rtb_r_err * rtCP_pooled17;

        // Product: '<S20>/Product' incorporates:
        //   DiscreteIntegrator: '<S20>/Discrete-Time Integrator'
        //   DiscreteIntegrator: '<S20>/Discrete-Time Integrator1'
        //   DiscreteIntegrator: '<S20>/Discrete-Time Integrator2'
        //   Gain: '<S20>/Gain1'
        //   Gain: '<S20>/Gain7'
        //   Gain: '<S20>/Gain9'
        //   Sum: '<S20>/Sum2'
        //   Sum: '<S20>/Sum3'
        //   Sum: '<S20>/Sum4'
        //   Sum: '<S30>/Diff'
        //   UnitDelay: '<S30>/UD'
        //
        //  Block description for '<S30>/Diff':
        //
        //   Add in CPU
        //
        //  Block description for '<S30>/UD':
        //
        //   Store in Global RAM
        rtb_Product_p = rtConstB.Sign_o * ((rtCP_pooled1 * (static_cast<real_T>
            (rtDWork.DiscreteTimeIntegrator2_DSTATE) -
            rtDWork.DiscreteTimeIntegrator_DSTATE_a)) + ((rtCP_pooled1 *
            (rtb_TSamp_k - rtDWork.UD_DSTATE_k)) + (rtCP_Gain9_Gain * rtb_r_err)
            + rtDWork.DiscreteTimeIntegrator1_DSTAT_k));

        // Switch: '<S7>/Switch1' incorporates:
        //   Gain: '<S31>/Gain'
        //   Gain: '<S31>/Gain1'
        //   Gain: '<S31>/Gain2'
        //   Gain: '<S31>/Gain3'
        //   Saturate: '<S31>/Saturation2'
        if (rtDWork.bitsForTID0.D) {
            // Gain: '<S12>/Gain16' incorporates:
            //   Sum: '<S12>/Sum3'
            u0 = rtCP_pooled1 * (static_cast<real_T>(rtb_Gain17) + rtb_Product);

            // Saturate: '<S15>/Saturation2'
            if (u0 > rtCP_pooled2) {
                rtb_Switch1_idx_0 = static_cast<real32_T>(rtCP_pooled2);
            } else if (u0 < rtCP_pooled3) {
                rtb_Switch1_idx_0 = static_cast<real32_T>(rtCP_pooled3);
            } else {
                rtb_Switch1_idx_0 = static_cast<real32_T>(u0);
            }

            // End of Saturate: '<S15>/Saturation2'

            // Sum: '<S12>/Sum1'
            u0 = rtb_feedforward + rtb_Product_l;

            // Saturate: '<S15>/Saturation'
            if (u0 > rtCP_pooled4) {
                rtb_Switch1_idx_1 = static_cast<real32_T>(rtCP_pooled4);
            } else if (u0 < rtCP_pooled5) {
                rtb_Switch1_idx_1 = static_cast<real32_T>(rtCP_pooled5);
            } else {
                rtb_Switch1_idx_1 = static_cast<real32_T>(u0);
            }

            // End of Saturate: '<S15>/Saturation'

            // Sum: '<S12>/Sum'
            u0 = rtb_Gain1_g + rtb_Product_i;

            // Saturate: '<S15>/Saturation1'
            if (u0 > rtCP_pooled4) {
                rtb_Switch1_idx_2 = static_cast<real32_T>(rtCP_pooled4);
            } else if (u0 < rtCP_pooled5) {
                rtb_Switch1_idx_2 = static_cast<real32_T>(rtCP_pooled5);
            } else {
                rtb_Switch1_idx_2 = static_cast<real32_T>(u0);
            }

            // End of Saturate: '<S15>/Saturation1'

            // Sum: '<S12>/Sum2'
            u0 = static_cast<real_T>(rtb_Gain4_k) + rtb_Product_p;

            // Saturate: '<S15>/Saturation3'
            if (u0 > rtCP_pooled2) {
                rtb_Switch1_idx_3 = static_cast<real32_T>(rtCP_pooled2);
            } else if (u0 < rtCP_pooled3) {
                rtb_Switch1_idx_3 = static_cast<real32_T>(rtCP_pooled3);
            } else {
                rtb_Switch1_idx_3 = static_cast<real32_T>(u0);
            }

            // End of Saturate: '<S15>/Saturation3'
        } else {
            rtb_Switch1_idx_0 *= rtCP_pooled22;
            rtb_Switch1_idx_1 *= rtCP_pooled22;
            rtb_Switch1_idx_2 *= rtCP_pooled22;
            rtb_Switch1_idx_3 *= rtCP_pooled22;
        }

        for (i = 0; i < 4; i++) {
            // Saturate: '<S41>/Saturation4' incorporates:
            //   Constant: '<S13>/Constant'
            //   Product: '<S13>/Matrix Multiply'
            //   Sum: '<S7>/Sum'
            //   Switch: '<S7>/Switch2'
            u0 = static_cast<real_T>(rtb_raw_out_c) +
                ((rtConstP.Constant_Value_b[i] * static_cast<real_T>
                  (rtb_Switch1_idx_0)) + (rtConstP.Constant_Value_b[i + 4] *
                  static_cast<real_T>(rtb_Switch1_idx_1)) +
                 (rtConstP.Constant_Value_b[i + 8] * static_cast<real_T>
                  (rtb_Switch1_idx_2)) + (rtConstP.Constant_Value_b[i + 12] *
                  static_cast<real_T>(rtb_Switch1_idx_3)));
            if (u0 > rtCP_Saturation4_UpperSat) {
                rtb_Sum2_p[i] = rtCP_Saturation4_UpperSat;
            } else if (u0 < rtCP_pooled1) {
                rtb_Sum2_p[i] = rtCP_pooled1;
            } else {
                rtb_Sum2_p[i] = u0;
            }

            // End of Saturate: '<S41>/Saturation4'
        }

        // MATLAB Function: '<S16>/remap' incorporates:
        //   Constant: '<S16>/Constant1'
        //   Constant: '<S16>/Constant2'
        //   Constant: '<S16>/Constant3'
        //   Constant: '<S16>/Constant4'
        remap(rtb_Sum2_p, rtConstP.pooled13, rtConstP.pooled14,
              rtConstP.pooled15, rtConstP.pooled16, rtb_raw_out);

        // Switch: '<Root>/emergency_switch' incorporates:
        //   Constant: '<Root>/Constant6'
        //   Constant: '<Root>/Constant7'
        //   DataTypeConversion: '<Root>/Data Type Conversion1'
        //   DataTypeConversion: '<Root>/Data Type Conversion2'
        if (static_cast<real_T>(rtb_Compare ? 1.0 : 0.0) > rtCP_pooled21) {
            rtb_PWM_cont[0] = static_cast<real32_T>(rtb_raw_out[0]);
            rtb_PWM_cont[4] = rtCP_Constant7_Value_EL_0;
            rtb_PWM_cont[1] = static_cast<real32_T>(rtb_raw_out[1]);
            rtb_PWM_cont[5] = rtCP_Constant7_Value_EL_1;
            rtb_PWM_cont[2] = static_cast<real32_T>(rtb_raw_out[2]);
            rtb_PWM_cont[6] = rtCP_Constant7_Value_EL_2;
            rtb_PWM_cont[3] = static_cast<real32_T>(rtb_raw_out[3]);
            rtb_PWM_cont[7] = rtCP_Constant7_Value_EL_3;
        } else {
            for (i = 0; i < 8; i++) {
                rtb_PWM_cont[i] = rtConstP.Constant6_Value[i];
            }
        }

        // End of Switch: '<Root>/emergency_switch'

        // Outport: '<Root>/VmsData' incorporates:
        //   BusCreator: '<S2>/Bus Creator'
        //   DataTypeConversion: '<Root>/Data Type Conversion'
        //   DataTypeConversion: '<S2>/Cast To Single3'
        //   DataTypeConversion: '<S2>/Cast2'
        //   Gain: '<Root>/Gain'
        //   SignalConversion generated from: '<S2>/Bus Creator'
        arg_VmsData->advance_waypoint = false;
        arg_VmsData->motors_enabled = rtb_Compare;
        arg_VmsData->mode = 0;
        arg_VmsData->sbus[0] = 0;
        arg_VmsData->sbus[1] = 0;
        arg_VmsData->sbus[2] = 0;
        arg_VmsData->sbus[3] = 0;
        arg_VmsData->sbus[4] = 0;
        arg_VmsData->sbus[5] = 0;
        arg_VmsData->sbus[6] = 0;
        arg_VmsData->sbus[7] = 0;
        arg_VmsData->sbus[8] = 0;
        arg_VmsData->sbus[9] = 0;
        arg_VmsData->sbus[10] = 0;
        arg_VmsData->sbus[11] = 0;
        arg_VmsData->sbus[12] = 0;
        arg_VmsData->sbus[13] = 0;
        arg_VmsData->sbus[14] = 0;
        arg_VmsData->sbus[15] = 0;
        for (i = 0; i < 8; i++) {
            arg_VmsData->pwm[i] = static_cast<int16_T>(std::floor(rtb_PWM_cont[i]));
        }

        arg_VmsData->throttle_cmd_prcnt = rtCP_Gain_Gain * rtb_norm_out_b;
        arg_VmsData->flight_time_remaining_s = 0.0F;
        arg_VmsData->power_remaining_prcnt = 0.0F;
        arg_VmsData->aux[0] = 0.0F;
        arg_VmsData->aux[1] = 0.0F;
        arg_VmsData->aux[2] = 0.0F;
        arg_VmsData->aux[3] = 0.0F;
        arg_VmsData->aux[4] = 0.0F;
        arg_VmsData->aux[5] = 0.0F;
        arg_VmsData->aux[6] = 0.0F;
        arg_VmsData->aux[7] = 0.0F;
        arg_VmsData->aux[8] = 0.0F;
        arg_VmsData->aux[9] = rtDWork.bitsForTID0.D ? 1.0F : 0.0F;
        arg_VmsData->aux[10] = rtb_norm_out_b;
        arg_VmsData->aux[11] = rtb_norm_out_g;
        arg_VmsData->aux[12] = rtb_norm_out_k;
        arg_VmsData->aux[13] = rtb_norm_out;
        arg_VmsData->aux[14] = rtb_norm_out_m;
        arg_VmsData->aux[15] = rtb_Switch1_idx_0;
        arg_VmsData->aux[16] = rtb_Switch1_idx_1;
        arg_VmsData->aux[17] = rtb_Switch1_idx_2;
        arg_VmsData->aux[18] = rtb_Switch1_idx_3;
        arg_VmsData->aux[19] = 0.0F;
        arg_VmsData->aux[20] = 0.0F;
        arg_VmsData->aux[21] = 0.0F;
        arg_VmsData->aux[22] = 0.0F;
        arg_VmsData->aux[23] = 0.0F;

        // End of Outport: '<Root>/VmsData'

        // MATLAB Function: '<S8>/remap' incorporates:
        //   Constant: '<S8>/Constant1'
        //   Constant: '<S8>/Constant11'
        //   Constant: '<S8>/Constant2'
        //   Constant: '<S8>/Constant9'
        remap(rtb_raw_out, rtConstP.pooled15, rtConstP.pooled16,
              rtConstP.pooled13, rtConstP.pooled14, rtb_Sum2_p);

        // Sum: '<S8>/Sum2' incorporates:
        //   Constant: '<S8>/Constant13'
        u0 = rtb_Sum2_p[0] - rtCP_pooled7_EL_0;
        rtb_Sum2_gy_idx_1 = rtb_Sum2_p[1] - rtCP_pooled7_EL_1;
        rtb_Sum2_gy_idx_2 = rtb_Sum2_p[2] - rtCP_pooled7_EL_2;
        rtb_Sum2_gy_idx_3 = rtb_Sum2_p[3] - rtCP_pooled7_EL_3;

        // Product: '<S7>/Matrix Multiply1' incorporates:
        //   Constant: '<S7>/Constant17'
        for (i = 0; i < 4; i++) {
            rtb_raw_out[i] = (rtConstP.Constant17_Value[i] * u0) +
                (rtConstP.Constant17_Value[i + 4] * rtb_Sum2_gy_idx_1) +
                (rtConstP.Constant17_Value[i + 8] * rtb_Sum2_gy_idx_2) +
                (rtConstP.Constant17_Value[i + 12] * rtb_Sum2_gy_idx_3);
        }

        // End of Product: '<S7>/Matrix Multiply1'

        // Saturate: '<S4>/Saturation4' incorporates:
        //   DataTypeConversion: '<S4>/Data Type Conversion1'
        //   Inport: '<Root>/Sensor Data'
        if (static_cast<real32_T>(arg_Sensor_Data->inceptor.ch[7]) >
            rtCP_pooled27) {
            rtb_Switch1_idx_3 = rtCP_pooled27;
        } else if (static_cast<real32_T>(arg_Sensor_Data->inceptor.ch[7]) <
                   rtCP_pooled28) {
            rtb_Switch1_idx_3 = rtCP_pooled28;
        } else {
            rtb_Switch1_idx_3 = static_cast<real32_T>
                (arg_Sensor_Data->inceptor.ch[7]);
        }

        // MATLAB Function: '<S48>/remap' incorporates:
        //   Constant: '<S48>/Constant'
        //   Constant: '<S48>/Constant1'
        //   Constant: '<S48>/Constant2'
        //   Constant: '<S48>/Constant3'
        //   Saturate: '<S4>/Saturation4'
        remap_m(rtb_Switch1_idx_3, rtCP_pooled28, rtCP_Constant3_Value,
                rtCP_pooled22, rtCP_pooled23, &rtb_norm_out_m);

        // Update for DiscreteIntegrator: '<S21>/Discrete-Time Integrator'
        rtDWork.DiscreteTimeIntegrator_DSTATE_l += rtCP_pooled29 *
            rtb_wdot_ideal;

        // Update for Delay: '<S12>/Delay4'
        rtDWork.Delay4_DSTATE = rtb_w_ideal;

        // Update for UnitDelay: '<S25>/UD'
        //
        //  Block description for '<S25>/UD':
        //
        //   Store in Global RAM
        rtDWork.UD_DSTATE = rtb_TSamp;

        // Update for DiscreteIntegrator: '<S17>/Discrete-Time Integrator' incorporates:
        //   Gain: '<S12>/Gain8'
        //   Gain: '<S17>/Gain2'
        //   Product: '<S17>/Product2'
        //   Sum: '<S12>/Sum4'
        //   Sum: '<S12>/Sum8'
        //   Sum: '<S17>/Sum'
        rtDWork.DiscreteTimeIntegrator_DSTATE += rtCP_pooled19 *
            (rtDWork.bitsForTID0.D ? ((rtCP_Gain2_Gain * rtb_Gain4_h) +
              (rtCP_Gain8_Gain * (rtb_raw_out[0] - static_cast<real_T>
                (rtb_Gain17) - rtb_Product))) : 0.0);

        // Update for DiscreteIntegrator: '<S11>/Discrete-Time Integrator' incorporates:
        //   Gain: '<S11>/IntRat_V_S'
        rtDWork.DiscreteTimeIntegrator_DSTATE_i += rtCP_pooled29 *
            (rtCP_pooled32 * rtb_P_V_S);
        if (rtb_Sum > 0.0) {
            rtDWork.DiscreteTimeIntegrator_PrevRese = 1;
        } else if (rtb_Sum < 0.0) {
            rtDWork.DiscreteTimeIntegrator_PrevRese = -1;
        } else if (rtb_Sum == 0.0) {
            rtDWork.DiscreteTimeIntegrator_PrevRese = 0;
        } else {
            rtDWork.DiscreteTimeIntegrator_PrevRese = 2;
        }

        // End of Update for DiscreteIntegrator: '<S11>/Discrete-Time Integrator'

        // Update for DiscreteIntegrator: '<S23>/Discrete-Time Integrator' incorporates:
        //   DiscreteIntegrator: '<S23>/Discrete-Time Integrator1'
        rtDWork.DiscreteTimeIntegrator_DSTATE_o += rtCP_pooled19 *
            rtDWork.DiscreteTimeIntegrator1_DSTATE;

        // Update for DiscreteIntegrator: '<S23>/Discrete-Time Integrator1'
        rtDWork.DiscreteTimeIntegrator1_DSTATE += rtCP_pooled19 * rtb_pdot_ideal;

        // Update for Delay: '<S12>/Delay'
        rtDWork.Delay_DSTATE = rtb_p_ideal;

        // Update for Delay: '<S12>/Delay1'
        rtDWork.Delay1_DSTATE = rtb_phi_ideal;

        // Update for DiscreteIntegrator: '<S19>/Discrete-Time Integrator' incorporates:
        //   Gain: '<S12>/Gain10'
        //   Gain: '<S19>/Gain2'
        //   Product: '<S19>/Product3'
        //   Sum: '<S12>/Sum5'
        //   Sum: '<S12>/Sum9'
        //   Sum: '<S19>/Sum5'
        rtDWork.DiscreteTimeIntegrator_DSTATE_n += rtCP_pooled19 *
            (rtDWork.bitsForTID0.D ? ((rtCP_Gain2_Gain_f * rtb_phi_err_g) +
              (rtCP_pooled18 * (rtb_raw_out[1] - rtb_feedforward - rtb_Product_l)))
             : 0.0);

        // Update for DiscreteIntegrator: '<S10>/Discrete-Time Integrator' incorporates:
        //   Gain: '<S10>/IntRat_V_F'
        rtDWork.DiscreteTimeIntegrator_DSTATE_g += rtCP_pooled29 *
            (rtCP_pooled32 * rtb_Gain_a);
        if (rtb_Sum_k > 0.0) {
            rtDWork.DiscreteTimeIntegrator_PrevRe_i = 1;
        } else if (rtb_Sum_k < 0.0) {
            rtDWork.DiscreteTimeIntegrator_PrevRe_i = -1;
        } else if (rtb_Sum_k == 0.0) {
            rtDWork.DiscreteTimeIntegrator_PrevRe_i = 0;
        } else {
            rtDWork.DiscreteTimeIntegrator_PrevRe_i = 2;
        }

        // End of Update for DiscreteIntegrator: '<S10>/Discrete-Time Integrator'

        // Update for DiscreteIntegrator: '<S22>/Discrete-Time Integrator1' incorporates:
        //   DiscreteIntegrator: '<S22>/Discrete-Time Integrator'
        rtDWork.DiscreteTimeIntegrator1_DSTAT_p += rtCP_pooled19 *
            rtDWork.DiscreteTimeIntegrator_DSTATE_m;

        // Update for DiscreteIntegrator: '<S22>/Discrete-Time Integrator'
        rtDWork.DiscreteTimeIntegrator_DSTATE_m += rtCP_pooled19 *
            rtb_qdot_ideal;

        // Update for Delay: '<S12>/Delay2'
        rtDWork.Delay2_DSTATE = rtb_q_ideal;

        // Update for Delay: '<S12>/Delay3'
        rtDWork.Delay3_DSTATE = rtb_theta_ideal;

        // Update for DiscreteIntegrator: '<S18>/Discrete-Time Integrator' incorporates:
        //   Gain: '<S12>/Gain12'
        //   Gain: '<S18>/Gain3'
        //   Product: '<S18>/Product3'
        //   Sum: '<S12>/Sum10'
        //   Sum: '<S12>/Sum6'
        //   Sum: '<S18>/Sum5'
        rtDWork.DiscreteTimeIntegrator_DSTATE_p += rtCP_pooled19 *
            (rtDWork.bitsForTID0.D ? ((rtCP_Gain3_Gain * rtb_theta_err) +
              (rtCP_pooled21 * (rtb_raw_out[2] - rtb_Gain1_g - rtb_Product_i))) :
             0.0);

        // Update for DiscreteIntegrator: '<S24>/Discrete-Time Integrator'
        rtDWork.DiscreteTimeIntegrator_DSTAT_ax += rtCP_pooled29 *
            rtb_rdot_ideal;

        // Update for DiscreteIntegrator: '<S20>/Discrete-Time Integrator2' incorporates:
        //   Delay: '<S12>/Delay5'
        rtDWork.DiscreteTimeIntegrator2_DSTATE += rtCP_pooled29 *
            rtDWork.Delay5_DSTATE;

        // Update for DiscreteIntegrator: '<S20>/Discrete-Time Integrator'
        rtDWork.DiscreteTimeIntegrator_DSTATE_a += rtCP_pooled19 * rtb_Sum5_a;

        // Update for Delay: '<S12>/Delay5'
        rtDWork.Delay5_DSTATE = rtb_DiscreteTimeIntegrator2;

        // Update for UnitDelay: '<S30>/UD'
        //
        //  Block description for '<S30>/UD':
        //
        //   Store in Global RAM
        rtDWork.UD_DSTATE_k = rtb_TSamp_k;

        // Update for DiscreteIntegrator: '<S20>/Discrete-Time Integrator1' incorporates:
        //   Gain: '<S20>/Gain2'
        //   Product: '<S20>/Product2'
        //   Sum: '<S12>/Sum11'
        //   Sum: '<S12>/Sum7'
        //   Sum: '<S20>/Sum'
        rtDWork.DiscreteTimeIntegrator1_DSTAT_k += rtCP_pooled19 *
            (rtDWork.bitsForTID0.D ? ((rtCP_Gain2_Gain_n * rtb_r_err) +
              (rtb_raw_out[3] - static_cast<real_T>(rtb_Gain4_k) - rtb_Product_p))
             : 0.0);
    }

    // Model initialize function
    void Autocode::initialize()
    {
        // InitializeConditions for DiscreteIntegrator: '<S11>/Discrete-Time Integrator'
        rtDWork.DiscreteTimeIntegrator_PrevRese = 2;

        // InitializeConditions for DiscreteIntegrator: '<S10>/Discrete-Time Integrator'
        rtDWork.DiscreteTimeIntegrator_PrevRe_i = 2;
    }

    // Constructor
    Autocode::Autocode():
        rtDWork()
    {
        // Currently there is no constructor body generated.
    }

    // Destructor
    Autocode::~Autocode()
    {
        // Currently there is no destructor body generated.
    }
}

//
// File trailer for generated code.
//
// [EOF]
//
