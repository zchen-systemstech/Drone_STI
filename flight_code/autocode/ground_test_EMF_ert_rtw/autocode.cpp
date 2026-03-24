//
// File: autocode.cpp
//
// Code generated for Simulink model 'ground_test_EMF'.
//
// Model version                  : 8.113
// Simulink Coder version         : 24.1 (R2024a) 19-Nov-2023
// C/C++ source code generated on : Tue Mar 24 10:50:02 2026
//

#include "autocode.h"
#include "rtwtypes.h"
#include "global_defs.h"
#include <cmath>

// Invariant block signals (default storage)
const bfs::Autocode::ConstBlockIO rtConstB = {
    9.0
    ,                                  // '<S22>/Square'
    9.0
    ,                                  // '<S22>/Square1'
    0.0
    ,                                  // '<S23>/Gain5'
    16.0
    ,                                  // '<S23>/Square'
    16.0
    ,                                  // '<S23>/Square1'
    1
    // '<S3>/Data Type Conversion2'
};

// Constant parameters (default storage)
const bfs::Autocode::ConstParam rtConstP = {
    // Pooled Parameter (Expression: HoverModel.D(10:13, 1:4))

    //  Referenced by:

    //    '<S8>/Constant'

    //    '<S13>/Constant'
    { -55.766500940513531, -55.591684323145152, -55.766500940513509,
        -55.591684323145138, 1.4846041836684134, 1.4913319971895687,
        -1.4846041836684112, -1.491331997189568, 3.7294211705254803,
        -3.7460703721795525, 3.7294211705254781, -3.7460703721795525,
        -37.61520539678321, 37.743033853684565, 37.615205396782635,
        -37.743033853685162 },

    // Pooled Parameter (Expression: EMF.Zcol)

    //  Referenced by:

    //    '<S17>/Constant2'

    //    '<S21>/Constant3'
    { 1.000000000000002, 1.0000000000000002, 1.0000000000000018, 1.0,
        0.99999999999999845, 0.99999999999999822, 0.99999999999999978 },

    // Pooled Parameter (Expression: EMF.Mlon)

    //  Referenced by:

    //    '<S18>/Constant3'

    //    '<S22>/Constant3'
    { 0.99999999999999933, 1.0, 0.99999999999999978, 1.0000000000000004, 1.0,
        0.99999999999999933, 0.99999999999999956 },

    // Pooled Parameter (Expression: EMF.Llat)

    //  Referenced by:

    //    '<S19>/Constant3'

    //    '<S23>/Constant3'
    { 1.0, 0.99999999999999933, 1.0000000000000011, 1.0000000000000002,
        1.0000000000000009, 0.99999999999999933, 1.0 },

    // Pooled Parameter (Expression: EMF.Nped)

    //  Referenced by:

    //    '<S20>/Constant2'

    //    '<S24>/Constant3'
    { 1.0000000000000004, 0.99999999999999978, 0.99999999999999933, 1.0,
        0.99999999999999956, 1.0000000000000007, 0.99999999999999944 },

    // Expression: EMF.Zw

    //  Referenced by: '<S21>/Constant1'
    { -0.32736, -0.45063, -0.4956, -0.55118, -0.5514, -0.82118, -1.3965 },

    // Expression: EMF.Mq

    //  Referenced by: '<S22>/Constant4'
    { -0.59675, -0.60639, -0.76018, -0.81679, -0.80198, -1.1957, -1.96838 },

    // Expression: EMF.Lp

    //  Referenced by: '<S23>/Constant2'
    { -1.58062, -2.08614, -1.99156, -2.30778, -2.12177, -3.22319, -5.30777 },

    // Expression: EMF.Nr

    //  Referenced by: '<S24>/Constant2'
    { -0.13602, -0.10178, -0.1296, -0.12758, -0.12711, -0.16002, -0.2476 },

    // Expression: inv(HoverModel.D(10:13, 1:4))

    //  Referenced by: '<S14>/Constant17'
    { -0.0044999999999999173, 0.16829999999999989, 0.066780000000000048,
        -0.0066499999999999971, -0.00448000000000006, 0.16772999999999996,
        -0.06699000000000005, 0.0066199999999999965, -0.0044999999999999936,
        -0.16829999999999998, 0.066780000000000048, 0.00665,
        -0.0044799999999999909, -0.16773, -0.066990000000000008,
        -0.0066199999999999991 },

    // Computed Parameter: Constant5_Value

    //  Referenced by: '<Root>/Constant5'
    { 1000.0F, 1000.0F, 1000.0F, 1000.0F, 1000.0F, 1000.0F, 1000.0F, 1000.0F },

    // Pooled Parameter (Expression: )

    //  Referenced by:

    //    '<S17>/1-D Lookup Table1'

    //    '<S18>/1-D Lookup Table1'

    //    '<S19>/1-D Lookup Table1'

    //    '<S20>/1-D Lookup Table1'

    //    '<S21>/1-D Lookup Table'

    //    '<S21>/1-D Lookup Table1'

    //    '<S22>/1-D Lookup Table'

    //    '<S22>/1-D Lookup Table1'

    //    '<S23>/1-D Lookup Table'

    //    '<S23>/1-D Lookup Table2'

    //    '<S24>/1-D Lookup Table1'

    //    '<S24>/1-D Lookup Table2'
    { 0.0F, 10.0F, 20.0F, 30.0F, 40.0F, 50.0F, 60.0F }
};

// Pooled Parameter (Expression: 1)
//  Referenced by:
//    '<S3>/Constant3'
//    '<S3>/Constant4'
//    '<S9>/Constant1'
//    '<S9>/Constant3'
//    '<S33>/Constant1'
#define rtCP_pooled1                   (1.0)

// Pooled Parameter (Mixed Expressions)
//  Referenced by:
//    '<S8>/Constant13'
//    '<S8>/Constant15'
//    '<S14>/Constant13'
//    '<S14>/Constant15'
#define rtCP_pooled3                   (1103.5248320734627)

// Pooled Parameter (Mixed Expressions)
//  Referenced by:
//    '<S8>/Constant14'
//    '<S8>/Constant16'
//    '<S14>/Constant14'
//    '<S14>/Constant16'
#define rtCP_pooled4                   (1099.9993611714706)

// Pooled Parameter (Expression: MinPWM_ms)
//  Referenced by:
//    '<S8>/Constant3'
//    '<S13>/Constant3'
//    '<S14>/Constant9'
#define rtCP_pooled5                   (1098.0)

// Pooled Parameter (Expression: MaxPWM_ms)
//  Referenced by:
//    '<S8>/Constant4'
//    '<S13>/Constant4'
//    '<S14>/Constant10'
#define rtCP_pooled6                   (2000.0)

// Pooled Parameter (Mixed Expressions)
//  Referenced by:
//    '<S18>/Constant2'
//    '<S19>/Constant1'
//    '<S19>/Constant2'
#define rtCP_pooled8                   (-0.0)

// Pooled Parameter (Mixed Expressions)
//  Referenced by:
//    '<S22>/Constant1'
//    '<S23>/Constant1'
#define rtCP_pooled12                  (0.7071)

// Expression: EMF.wnRoll
//  Referenced by: '<S23>/Constant'
#define rtCP_Constant_Value            (4.0)

// Expression: -1
//  Referenced by: '<S33>/Constant'
#define rtCP_Constant_Value_l          (-1.0)

// Expression: mean([InitCond.Omega1_rps, InitCond.Omega2_rps])*2
//  Referenced by: '<S33>/rotor speed'
#define rtCP_rotorspeed_Value          (2203.5241932449335)

// Pooled Parameter (Mixed Expressions)
//  Referenced by:
//    '<S3>/Constant5'
//    '<S7>/Constant'
//    '<S8>/Constant1'
//    '<S8>/Constant5'
//    '<S8>/Saturation4'
//    '<S8>/Switch2'
//    '<S9>/Constant'
//    '<S9>/Constant2'
//    '<S12>/Gain1'
//    '<S12>/Gain16'
//    '<S12>/Gain3'
//    '<S12>/Delay'
//    '<S12>/Delay1'
//    '<S12>/Delay2'
//    '<S12>/Delay3'
//    '<S13>/Constant1'
//    '<S13>/Saturation1'
//    '<S14>/Constant11'
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
//    '<S33>/Constant2'
//    '<S25>/UD'
//    '<S32>/UD'
#define rtCP_pooled13                  (0.0)

// Pooled Parameter (Expression: )
//  Referenced by:
//    '<S25>/TSamp'
//    '<S32>/TSamp'
#define rtCP_pooled14                  (100.0)

// Pooled Parameter (Mixed Expressions)
//  Referenced by:
//    '<S12>/Gain10'
//    '<S17>/Gain3'
//    '<S22>/Constant'
#define rtCP_pooled15                  (3.0)

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
#define rtCP_pooled16                  (0.01)

// Pooled Parameter (Mixed Expressions)
//  Referenced by:
//    '<S8>/Saturation2'
//    '<S8>/Saturation3'
#define rtCP_pooled17                  (5.0)

// Pooled Parameter (Mixed Expressions)
//  Referenced by:
//    '<S8>/Saturation2'
//    '<S8>/Saturation3'
#define rtCP_pooled18                  (-5.0)

// Pooled Parameter (Expression: 2)
//  Referenced by:
//    '<S22>/Gain6'
//    '<S23>/Gain'
#define rtCP_pooled19                  (2.0)

// Expression: EMF.ACAH.RollD
//  Referenced by: '<S19>/Gain1'
#define rtCP_Gain1_Gain                (74.8202803391376)

// Expression: EMF.ACAH.RollP
//  Referenced by: '<S19>/Gain4'
#define rtCP_Gain4_Gain                (37.4101401695688)

// Expression: EMF.MaxCmd.pdot
//  Referenced by: '<S8>/Saturation'
#define rtCP_Saturation_UpperSat       (30.0)

// Expression: -EMF.MaxCmd.pdot
//  Referenced by: '<S8>/Saturation'
#define rtCP_Saturation_LowerSat       (-30.0)

// Expression: EMF.ACAH.PitchD
//  Referenced by: '<S18>/Gain1'
#define rtCP_Gain1_Gain_h              (29.785383081659695)

// Expression: EMF.ACAH.PitchP
//  Referenced by: '<S18>/Gain4'
#define rtCP_Gain4_Gain_p              (14.892691540829848)

// Expression: EMF.MaxCmd.qdot*10
//  Referenced by: '<S8>/Saturation1'
#define rtCP_Saturation1_UpperSat      (300.0)

// Expression: -EMF.MaxCmd.qdot*10
//  Referenced by: '<S8>/Saturation1'
#define rtCP_Saturation1_LowerSat      (-300.0)

// Expression: EMF.ACAH.YawP
//  Referenced by: '<S20>/Gain9'
#define rtCP_Gain9_Gain                (2.9546919028073551)

// Pooled Parameter (Expression: MaxOm_rps)
//  Referenced by:
//    '<S8>/Constant2'
//    '<S8>/Saturation4'
//    '<S13>/Constant2'
//    '<S13>/Saturation1'
//    '<S14>/Constant12'
#define rtCP_pooled20                  (3711.0063220529428)

// Pooled Parameter (Mixed Expressions)
//  Referenced by:
//    '<Root>/emergency_switch1'
//    '<S10>/Constant'
//    '<S11>/Constant'
//    '<S12>/Gain12'
#define rtCP_pooled21                  (0.5)

// Expression: Ktr_Col
//  Referenced by: '<S12>/Gain8'
#define rtCP_Gain8_Gain                (0.3)

// Expression: EMF.RCHH.I
//  Referenced by: '<S17>/Gain2'
#define rtCP_Gain2_Gain                (1.5)

// Expression: EMF.ACAH.PitchI
//  Referenced by: '<S18>/Gain3'
#define rtCP_Gain3_Gain                (1.4892691540829848)

// Expression: EMF.ACAH.RollI
//  Referenced by: '<S19>/Gain2'
#define rtCP_Gain2_Gain_j              (3.74101401695688)

// Expression: EMF.ACAH.YawI
//  Referenced by: '<S20>/Gain2'
#define rtCP_Gain2_Gain_g              (1.4773459514036775)

// Computed Parameter: Constant8_Value
//  Referenced by: '<Root>/Constant8'
#define rtCP_Constant8_Value_EL_0      (1000.0F)
#define rtCP_Constant8_Value_EL_1      (1000.0F)
#define rtCP_Constant8_Value_EL_2      (1000.0F)
#define rtCP_Constant8_Value_EL_3      (1000.0F)

// Pooled Parameter (Mixed Expressions)
//  Referenced by:
//    '<S21>/Constant'
//    '<S24>/Constant'
#define rtCP_pooled22                  (0.18F)

// Computed Parameter: Constant3_Value
//  Referenced by: '<S40>/Constant3'
#define rtCP_Constant3_Value           (1811.0F)

// Computed Parameter: Constant_Value_d
//  Referenced by: '<S52>/Constant'
#define rtCP_Constant_Value_d          (0.5F)

// Pooled Parameter (Expression: 1810)
//  Referenced by:
//    '<S4>/Saturation'
//    '<S4>/Saturation1'
//    '<S4>/Saturation2'
//    '<S4>/Saturation3'
//    '<S4>/Saturation4'
//    '<S4>/Saturation5'
//    '<S41>/Constant3'
//    '<S42>/Constant3'
//    '<S43>/Constant3'
//    '<S44>/Constant3'
//    '<S45>/Constant3'
#define rtCP_pooled23                  (1810.0F)

// Pooled Parameter (Expression: 174)
//  Referenced by:
//    '<S4>/Saturation'
//    '<S4>/Saturation1'
//    '<S4>/Saturation2'
//    '<S4>/Saturation3'
//    '<S4>/Saturation4'
//    '<S4>/Saturation5'
//    '<S40>/Constant'
//    '<S41>/Constant'
//    '<S42>/Constant'
//    '<S43>/Constant'
//    '<S44>/Constant'
//    '<S45>/Constant'
#define rtCP_pooled24                  (174.0F)

// Pooled Parameter (Expression: 1)
//  Referenced by:
//    '<S7>/Saturation'
//    '<S7>/Saturation1'
//    '<S7>/Saturation2'
//    '<S7>/Saturation3'
//    '<S40>/Constant2'
//    '<S41>/Constant2'
//    '<S42>/Constant2'
//    '<S43>/Constant2'
//    '<S44>/Constant2'
//    '<S45>/Constant2'
//    '<S33>/Saturation'
//    '<S33>/Saturation1'
//    '<S33>/Saturation2'
//    '<S33>/Saturation3'
#define rtCP_pooled25                  (1.0F)

// Pooled Parameter (Expression: -1)
//  Referenced by:
//    '<S4>/Gain'
//    '<S7>/Saturation'
//    '<S7>/Saturation1'
//    '<S7>/Saturation2'
//    '<S7>/Saturation3'
//    '<S42>/Constant1'
//    '<S43>/Constant1'
//    '<S44>/Constant1'
//    '<S45>/Constant1'
//    '<S10>/Gain'
//    '<S10>/Gain1'
//    '<S11>/Gain'
//    '<S33>/Saturation'
//    '<S33>/Saturation1'
//    '<S33>/Saturation2'
//    '<S33>/Saturation3'
#define rtCP_pooled26                  (-1.0F)

// Pooled Parameter (Mixed Expressions)
//  Referenced by:
//    '<S34>/Gain'
//    '<S34>/Gain2'
#define rtCP_pooled27                  (1.00159991F)

// Pooled Parameter (Mixed Expressions)
//  Referenced by:
//    '<S34>/Gain1'
//    '<S34>/Gain3'
#define rtCP_pooled28                  (0.998400092F)

// Computed Parameter: Gain2_Gain_d
//  Referenced by: '<S7>/Gain2'
#define rtCP_Gain2_Gain_d              (-3.0F)

// Pooled Parameter (Mixed Expressions)
//  Referenced by:
//    '<S7>/Gain4'
//    '<S8>/Gain1'
//    '<S40>/Constant1'
//    '<S41>/Constant1'
//    '<S10>/Discrete-Time Integrator'
//    '<S11>/Discrete-Time Integrator'
//    '<S12>/Gain4'
//    '<S12>/Gain6'
//    '<S12>/Delay4'
//    '<S12>/Delay5'
//    '<S15>/Gain'
//    '<S20>/Discrete-Time Integrator2'
//    '<S21>/Discrete-Time Integrator'
//    '<S24>/Discrete-Time Integrator'
//    '<S33>/Gain'
//    '<S33>/Gain1'
//    '<S33>/Gain2'
//    '<S33>/Gain3'
#define rtCP_pooled29                  (0.0F)

// Pooled Parameter (Expression: )
//  Referenced by:
//    '<S10>/Discrete-Time Integrator'
//    '<S11>/Discrete-Time Integrator'
//    '<S20>/Discrete-Time Integrator2'
//    '<S21>/Discrete-Time Integrator'
//    '<S24>/Discrete-Time Integrator'
#define rtCP_pooled30                  (0.01F)

// Computed Parameter: fps_to_kts_Gain
//  Referenced by: '<S15>/fps_to_kts'
#define rtCP_fps_to_kts_Gain           (0.592484F)

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
#define rtCP_pooled32                  (0.1F)

// Computed Parameter: P_V_S_Gain
//  Referenced by: '<S11>/P_V_S'
#define rtCP_P_V_S_Gain                (0.17453292F)

// Pooled Parameter (Mixed Expressions)
//  Referenced by:
//    '<S7>/Gain'
//    '<S7>/Gain1'
#define rtCP_pooled33                  (1.57079637F)

// Computed Parameter: P_V_F_Gain
//  Referenced by: '<S10>/P_V_F'
#define rtCP_P_V_F_Gain                (0.0872664601F)

// Computed Parameter: Gain3_Gain_m
//  Referenced by: '<S7>/Gain3'
#define rtCP_Gain3_Gain_m              (5.23598766F)

// Computed Parameter: Gain_Gain
//  Referenced by: '<Root>/Gain'
#define rtCP_Gain_Gain                 (100.0F)

// Pooled Parameter (Expression: 0.08)
//  Referenced by:
//    '<S10>/IntRat_V_F'
//    '<S11>/IntRat_V_S'
#define rtCP_pooled34                  (0.08F)

static real32_T look1_iftdIf_pbinlc(real32_T u0, const real32_T bp0[], const
    real_T table[], uint32_T prevIndex[], uint32_T maxIndex);

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

static real32_T look1_iftdIf_pbinlc(real32_T u0, const real32_T bp0[], const
    real_T table[], uint32_T prevIndex[], uint32_T maxIndex)
{
    real_T frac;
    real_T yL_0d0;
    uint32_T bpIdx;

    // Column-major Lookup 1-D
    // Search method: 'binary'
    // Use previous index: 'on'
    // Interpolation method: 'Linear point-slope'
    // Extrapolation method: 'Clip'
    // Use last breakpoint for index at or above upper limit: 'off'
    // Remove protection against out-of-range input in generated code: 'off'

    // Prelookup - Index and Fraction
    // Index Search method: 'binary'
    // Extrapolation method: 'Clip'
    // Use previous index: 'on'
    // Use last breakpoint for index at or above upper limit: 'off'
    // Remove protection against out-of-range input in generated code: 'off'
    if (u0 <= bp0[0U]) {
        bpIdx = 0U;
        frac = 0.0;
    } else if (u0 < bp0[maxIndex]) {
        uint32_T found;
        uint32_T iLeft;
        uint32_T iRght;

        // Binary Search using Previous Index
        bpIdx = prevIndex[0U];
        iLeft = 0U;
        iRght = maxIndex;
        found = 0U;
        while (found == 0U) {
            if (u0 < bp0[bpIdx]) {
                iRght = bpIdx - 1U;
                bpIdx = ((bpIdx + iLeft - 1U) >> 1U);
            } else if (u0 < bp0[bpIdx + 1U]) {
                found = 1U;
            } else {
                iLeft = bpIdx + 1U;
                bpIdx = ((bpIdx + iRght + 1U) >> 1U);
            }
        }

        frac = static_cast<real_T>(static_cast<real32_T>((u0 - bp0[bpIdx]) /
            (bp0[bpIdx + 1U] - bp0[bpIdx])));
    } else {
        bpIdx = maxIndex - 1U;
        frac = 1.0;
    }

    prevIndex[0U] = bpIdx;

    // Column-major Interpolation 1-D
    // Interpolation method: 'Linear point-slope'
    // Use last breakpoint for index at or above upper limit: 'off'
    // Overflow mode: 'wrapping'
    yL_0d0 = table[bpIdx];
    return static_cast<real32_T>(static_cast<real_T>((table[bpIdx + 1U] - yL_0d0)
        * frac)) + static_cast<real32_T>(yL_0d0);
}

namespace bfs
{
    //
    // Output and update for atomic system:
    //    '<S13>/remap'
    //    '<S14>/remap1'
    //    '<S8>/remap'
    //
    void Autocode::remap(const real_T rtu_norm_in[4], real_T rtu_in_min, real_T
                         rtu_in_max, real_T rtu_out_min, real_T rtu_out_max,
                         real_T rty_raw_out[4])
    {
        real_T b;
        real_T tmp;

        // MATLAB Function 'EMF CLAWS/ACAH EMF/OnGroundController/remap': '<S35>:1'
        // '<S35>:1:2' raw_out = (norm_in - in_min) * (out_max - out_min)/(in_max-in_min) + out_min;
        b = rtu_out_max - rtu_out_min;
        tmp = rtu_in_max - rtu_in_min;
        rty_raw_out[0] = (((rtu_norm_in[0] - rtu_in_min) * b) / tmp) +
            rtu_out_min;
        rty_raw_out[1] = (((rtu_norm_in[1] - rtu_in_min) * b) / tmp) +
            rtu_out_min;
        rty_raw_out[2] = (((rtu_norm_in[2] - rtu_in_min) * b) / tmp) +
            rtu_out_min;
        rty_raw_out[3] = (((rtu_norm_in[3] - rtu_in_min) * b) / tmp) +
            rtu_out_min;
    }
}

namespace bfs
{
    //
    // Output and update for atomic system:
    //    '<S40>/remap'
    //    '<S41>/remap'
    //    '<S44>/remap'
    //
    void Autocode::remap_j(real32_T rtu_raw_in, real32_T rtu_in_min, real32_T
                           rtu_in_max, real32_T rtu_out_min, real32_T
                           rtu_out_max, real32_T *rty_norm_out)
    {
        // MATLAB Function 'command selection/e-stop/remap': '<S46>:1'
        // '<S46>:1:2' norm_out = (raw_in - in_min) * (out_max - out_min)/(in_max-in_min) + out_min;
        *rty_norm_out = (((rtu_raw_in - rtu_in_min) * (rtu_out_max - rtu_out_min))
                         / (rtu_in_max - rtu_in_min)) + rtu_out_min;
    }
}

namespace bfs
{
    //
    // Output and update for atomic system:
    //    '<S42>/remap_with_deadband'
    //    '<S43>/remap_with_deadband'
    //    '<S45>/remap_with_deadband'
    //
    void Autocode::remap_with_deadband(real32_T rtu_raw_in, real32_T rtu_in_min,
        real32_T rtu_in_max, real32_T rtu_out_min, real32_T rtu_out_max,
        real32_T rtu_deadband, real32_T *rty_norm_out)
    {
        real32_T in_avg;
        real32_T in_deadband_low;
        real32_T in_deadband_range;
        real32_T out_avg;

        // MATLAB Function 'command selection/pitch_norm_deadband/remap_with_deadband': '<S48>:1'
        // '<S48>:1:2' in_avg = (in_min + in_max) / 2;
        in_avg = (rtu_in_min + rtu_in_max) / 2.0F;

        // '<S48>:1:3' out_avg = (out_min + out_max) / 2;
        out_avg = (rtu_out_min + rtu_out_max) / 2.0F;

        // '<S48>:1:5' in_deadband_range = (in_max - in_min) * deadband / 2;
        in_deadband_range = ((rtu_in_max - rtu_in_min) * rtu_deadband) / 2.0F;

        // '<S48>:1:6' in_deadband_low = in_avg - in_deadband_range;
        in_deadband_low = in_avg - in_deadband_range;

        // '<S48>:1:7' in_deadband_hi = in_avg + in_deadband_range;
        in_avg += in_deadband_range;

        // '<S48>:1:9' if raw_in < in_deadband_low
        if (rtu_raw_in < in_deadband_low) {
            // '<S48>:1:10' norm_out = (raw_in - in_deadband_low) .* (out_max - out_avg)./(in_deadband_low - in_min) + out_avg;
            *rty_norm_out = (((rtu_raw_in - in_deadband_low) * (rtu_out_max -
                               out_avg)) / (in_deadband_low - rtu_in_min)) +
                out_avg;
        } else if ((rtu_raw_in > in_deadband_low) && (rtu_raw_in < in_avg)) {
            // '<S48>:1:11' elseif raw_in > in_deadband_low && raw_in < in_deadband_hi
            // '<S48>:1:12' norm_out = out_avg;
            *rty_norm_out = out_avg;
        } else {
            // '<S48>:1:13' else
            // '<S48>:1:14' norm_out = (raw_in - in_deadband_hi) .* (out_max - out_avg)./(in_max - in_deadband_hi) + out_avg;
            *rty_norm_out = (((rtu_raw_in - in_avg) * (rtu_out_max - out_avg)) /
                             (rtu_in_max - in_avg)) + out_avg;
        }
    }
}

namespace bfs
{
    // Model step function
    void Autocode::Run(const SysData &sys, const SensorData &sensor, const
                       StateEstData &state_est, const TelemData &telem, VmsData *
                       vms)
    {
        real_T rtb_MatrixMultiply1[4];
        real_T rtb_Saturation4[4];
        real_T rtb_Switch2[4];
        real_T rtb_Gain4_i;
        real_T rtb_Product;
        real_T rtb_Product_e;
        real_T rtb_Product_o;
        real_T rtb_Sum;
        real_T rtb_Sum5_b;
        real_T rtb_Sum5_i;
        real_T rtb_Sum6;
        real_T rtb_Sum_c;
        real_T rtb_Sum_f;
        real_T rtb_Switch1_idx_0;
        real_T rtb_Switch1_idx_1;
        real_T rtb_Switch1_idx_2;
        real_T rtb_Switch1_idx_3;
        real_T rtb_Switch2_0;
        real_T rtb_TSamp;
        real_T rtb_TSamp_f;
        real_T rtb_p_ideal;
        real_T rtb_pdot_ideal;
        real_T rtb_phi_err_g;
        real_T rtb_phi_ideal;
        real_T rtb_q_ideal;
        real_T rtb_qdot_ideal;
        real_T rtb_r_err;
        real_T rtb_raw_out_idx_1;
        real_T rtb_raw_out_idx_2;
        real_T rtb_raw_out_idx_3;
        real_T rtb_theta_err;
        real_T rtb_theta_ideal;
        int32_T i;
        real32_T rtb_PWM_cont[8];
        real32_T rtb_DataTypeConversion4_idx_0;
        real32_T rtb_DataTypeConversion4_idx_2;
        real32_T rtb_DataTypeConversion4_idx_3;
        real32_T rtb_DiscreteTimeIntegrator2;
        real32_T rtb_DiscreteTimeIntegrator_b;
        real32_T rtb_Gain1_cv_tmp;
        real32_T rtb_Gain6_p;
        real32_T rtb_Gain_a_tmp;
        real32_T rtb_Gain_pe;
        real32_T rtb_Sum2_m;
        real32_T rtb_Sum2_pr;
        real32_T rtb_norm_out;
        real32_T rtb_norm_out_fu;
        real32_T rtb_norm_out_i;
        real32_T rtb_norm_out_m;
        real32_T rtb_pitch;
        real32_T rtb_qdot_ideal_tmp;
        real32_T rtb_r_ideal;
        real32_T rtb_raw_out_j;
        real32_T rtb_rdot_ideal;
        real32_T rtb_wdot_ideal;
        boolean_T rtb_Compare;
        boolean_T rtb_LogicalOperator1;
        UNUSED_PARAMETER(sys);
        UNUSED_PARAMETER(telem);

        // Saturate: '<S4>/Saturation5' incorporates:
        //   DataTypeConversion: '<S4>/Data Type Conversion7'
        //   Inport: '<Root>/Sensor Data'
        if (static_cast<real32_T>(sensor.inceptor.ch[4]) > rtCP_pooled23) {
            rtb_DataTypeConversion4_idx_3 = rtCP_pooled23;
        } else if (static_cast<real32_T>(sensor.inceptor.ch[4]) < rtCP_pooled24)
        {
            rtb_DataTypeConversion4_idx_3 = rtCP_pooled24;
        } else {
            rtb_DataTypeConversion4_idx_3 = static_cast<real32_T>
                (sensor.inceptor.ch[4]);
        }

        // MATLAB Function: '<S41>/remap' incorporates:
        //   Constant: '<S41>/Constant'
        //   Constant: '<S41>/Constant1'
        //   Constant: '<S41>/Constant2'
        //   Constant: '<S41>/Constant3'
        //   Saturate: '<S4>/Saturation5'
        remap_j(rtb_DataTypeConversion4_idx_3, rtCP_pooled24, rtCP_pooled23,
                rtCP_pooled29, rtCP_pooled25, &rtb_norm_out_fu);

        // RelationalOperator: '<S52>/Compare' incorporates:
        //   Constant: '<S52>/Constant'
        rtb_Compare = (rtb_norm_out_fu > rtCP_Constant_Value_d);

        // Saturate: '<S4>/Saturation' incorporates:
        //   DataTypeConversion: '<S4>/Data Type Conversion5'
        //   Inport: '<Root>/Sensor Data'
        if (static_cast<real32_T>(sensor.inceptor.ch[0]) > rtCP_pooled23) {
            rtb_DataTypeConversion4_idx_3 = rtCP_pooled23;
        } else if (static_cast<real32_T>(sensor.inceptor.ch[0]) < rtCP_pooled24)
        {
            rtb_DataTypeConversion4_idx_3 = rtCP_pooled24;
        } else {
            rtb_DataTypeConversion4_idx_3 = static_cast<real32_T>
                (sensor.inceptor.ch[0]);
        }

        // MATLAB Function: '<S44>/remap' incorporates:
        //   Constant: '<S44>/Constant'
        //   Constant: '<S44>/Constant1'
        //   Constant: '<S44>/Constant2'
        //   Constant: '<S44>/Constant3'
        //   Saturate: '<S4>/Saturation'
        remap_j(rtb_DataTypeConversion4_idx_3, rtCP_pooled24, rtCP_pooled23,
                rtCP_pooled26, rtCP_pooled25, &rtb_norm_out);

        // Saturate: '<S33>/Saturation2'
        if (rtb_norm_out > rtCP_pooled25) {
            // Saturate: '<S7>/Saturation2'
            rtb_DataTypeConversion4_idx_0 = rtCP_pooled25;
        } else if (rtb_norm_out < rtCP_pooled26) {
            // Saturate: '<S7>/Saturation2'
            rtb_DataTypeConversion4_idx_0 = rtCP_pooled26;
        } else {
            // Saturate: '<S7>/Saturation2'
            rtb_DataTypeConversion4_idx_0 = rtb_norm_out;
        }

        // MATLAB Function: '<S33>/remap throttle to RPM' incorporates:
        //   Constant: '<S33>/Constant'
        //   Constant: '<S33>/Constant1'
        //   Constant: '<S33>/Constant2'
        //   Constant: '<S33>/rotor speed'
        //   Saturate: '<S33>/Saturation2'

        // MATLAB Function 'EMF CLAWS/ACAH EMF/OnGroundController/Get ACAH Commands1/remap throttle to RPM': '<S36>:1'
        // '<S36>:1:2' raw_out = (norm_in - in_min) * (out_max - out_min)/(in_max-in_min) + out_min;
        rtb_raw_out_j = (((rtb_DataTypeConversion4_idx_0 - static_cast<real32_T>
                           (rtCP_Constant_Value_l)) * static_cast<real32_T>(
                           static_cast<real_T>(rtCP_rotorspeed_Value -
                            rtCP_pooled13))) / static_cast<real32_T>(
                          static_cast<real_T>(rtCP_pooled1 -
                           rtCP_Constant_Value_l))) + static_cast<real32_T>
            (rtCP_pooled13);

        // Gain: '<S34>/Gain' incorporates:
        //   Gain: '<S34>/Gain2'
        rtb_Gain_a_tmp = rtCP_pooled27 * rtb_raw_out_j;

        // Gain: '<S34>/Gain1' incorporates:
        //   Gain: '<S34>/Gain3'
        rtb_Gain1_cv_tmp = rtCP_pooled28 * rtb_raw_out_j;

        // Switch: '<S8>/Switch2' incorporates:
        //   Gain: '<S34>/Gain'
        //   Gain: '<S34>/Gain1'
        rtb_Switch2[0] = static_cast<real_T>(rtb_Gain_a_tmp);
        rtb_Switch2[1] = static_cast<real_T>(rtb_Gain1_cv_tmp);
        rtb_Switch2[2] = static_cast<real_T>(rtb_Gain_a_tmp);
        rtb_Switch2[3] = static_cast<real_T>(rtb_Gain1_cv_tmp);

        // DiscreteIntegrator: '<S21>/Discrete-Time Integrator'
        rtb_raw_out_j = rtDWork.DiscreteTimeIntegrator_DSTAT_ii;

        // Product: '<S21>/Divide' incorporates:
        //   Constant: '<S21>/Constant'
        //   DiscreteIntegrator: '<S21>/Discrete-Time Integrator'
        //   Gain: '<S7>/Gain2'
        //   Gain: '<S7>/Gain4'
        //   Sum: '<S21>/Sum'
        rtb_wdot_ideal = ((rtCP_pooled29 * (rtCP_Gain2_Gain_d *
                            rtb_DataTypeConversion4_idx_0)) -
                          rtDWork.DiscreteTimeIntegrator_DSTAT_ii) /
            rtCP_pooled22;

        // Gain: '<S15>/Gain' incorporates:
        //   Inport: '<Root>/StateEstData'
        rtb_Gain_pe = rtCP_pooled29 * state_est.bfs_ins.ned_vel_mps[1];

        // Gain: '<S8>/Gain1' incorporates:
        //   Gain: '<S15>/fps_to_kts'
        //   Inport: '<Root>/StateEstData'
        //   Math: '<S15>/Square'
        //   Math: '<S15>/Square1'
        //   Math: '<S15>/Square2'
        //   Sqrt: '<S15>/Sqrt'
        //   Sum: '<S15>/Add'
        rtb_Gain_pe = rtCP_pooled29 * (rtCP_fps_to_kts_Gain * std::sqrt
            ((state_est.bfs_ins.ned_vel_mps[0] * state_est.bfs_ins.ned_vel_mps[0])
             + (rtb_Gain_pe * rtb_Gain_pe) + (state_est.bfs_ins.ned_vel_mps[2] *
            state_est.bfs_ins.ned_vel_mps[2])));

        // Lookup_n-D: '<S21>/1-D Lookup Table' incorporates:
        //   Constant: '<S21>/Constant1'
        //   Gain: '<Root>/Gain'
        rtb_Gain6_p = look1_iftdIf_pbinlc(rtb_Gain_pe, rtConstP.pooled31,
            rtConstP.Constant1_Value, &rtDWork.m_bpIndex, 6U);

        // Sum: '<S21>/Sum2' incorporates:
        //   DiscreteIntegrator: '<S21>/Discrete-Time Integrator'
        //   Product: '<S21>/Product3'
        rtb_Sum2_m = rtb_wdot_ideal - (rtb_Gain6_p *
            rtDWork.DiscreteTimeIntegrator_DSTAT_ii);

        // Lookup_n-D: '<S21>/1-D Lookup Table1' incorporates:
        //   Constant: '<S21>/Constant3'
        //   Gain: '<Root>/Gain'
        rtb_Gain6_p = look1_iftdIf_pbinlc(rtb_Gain_pe, rtConstP.pooled31,
            rtConstP.pooled7, &rtDWork.m_bpIndex_p, 6U);

        // Gain: '<S12>/Gain6' incorporates:
        //   Product: '<S21>/Divide1'
        rtb_Gain6_p = rtCP_pooled29 * (rtb_Sum2_m / rtb_Gain6_p);

        // Lookup_n-D: '<S17>/1-D Lookup Table1' incorporates:
        //   Constant: '<S17>/Constant2'
        //   Gain: '<Root>/Gain'
        rtb_DiscreteTimeIntegrator2 = look1_iftdIf_pbinlc(rtb_Gain_pe,
            rtConstP.pooled31, rtConstP.pooled7, &rtDWork.m_bpIndex_h, 6U);

        // Signum: '<S17>/Sign'
        if (rtb_DiscreteTimeIntegrator2 < 0.0F) {
            rtb_DiscreteTimeIntegrator2 = -1.0F;
        } else {
            rtb_DiscreteTimeIntegrator2 = (rtb_DiscreteTimeIntegrator2 > 0.0F) ?
                1.0F : 0.0F;
        }

        // End of Signum: '<S17>/Sign'

        // Switch: '<S3>/Switch1' incorporates:
        //   Constant: '<S3>/Constant4'
        //   Constant: '<S3>/Constant5'
        if (rtb_norm_out > rtCP_Switch1_Threshold) {
            rtb_Sum_c = rtCP_pooled1;
        } else {
            rtb_Sum_c = rtCP_pooled13;
        }

        // Outputs for Enabled SubSystem: '<S38>/D Latch' incorporates:
        //   EnablePort: '<S39>/C'

        // DataTypeConversion: '<S3>/Data Type Conversion3' incorporates:
        //   Switch: '<S3>/Switch1'
        if (static_cast<real32_T>(rtb_Sum_c) > 0.0F) {
            // SignalConversion generated from: '<S39>/D'
            rtDWork.bitsForTID0.D = rtConstB.DataTypeConversion2;
        }

        // End of DataTypeConversion: '<S3>/Data Type Conversion3'
        // End of Outputs for SubSystem: '<S38>/D Latch'

        // Gain: '<S17>/Gain4' incorporates:
        //   Constant: '<S17>/Constant3'
        //   Delay: '<S12>/Delay4'
        //   Inport: '<Root>/StateEstData'
        //   Product: '<S17>/Product1'
        //   Sum: '<S17>/Sum1'
        //   Sum: '<S17>/Sum3'
        rtb_Gain4_i = rtCP_pooled13 * (rtDWork.bitsForTID0.D ?
            (static_cast<real_T>(rtDWork.Delay4_DSTATE) - (static_cast<real_T>
            (state_est.bfs_ins.ned_vel_mps[2]) - rtCP_pooled13)) : 0.0);

        // SampleTimeMath: '<S25>/TSamp'
        //
        //  About '<S25>/TSamp':
        //   y = u * K where K = 1 / ( w * Ts )
        //
        rtb_TSamp = rtb_Gain4_i * rtCP_pooled14;

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
        rtb_Product = static_cast<real_T>(rtb_DiscreteTimeIntegrator2) *
            ((rtCP_pooled13 * (rtb_TSamp - rtDWork.UD_DSTATE)) + (rtCP_pooled15 *
              rtb_Gain4_i) + rtDWork.DiscreteTimeIntegrator_DSTATE);

        // Saturate: '<S4>/Saturation2' incorporates:
        //   DataTypeConversion: '<S4>/Data Type Conversion3'
        //   Inport: '<Root>/Sensor Data'
        if (static_cast<real32_T>(sensor.inceptor.ch[1]) > rtCP_pooled23) {
            rtb_DataTypeConversion4_idx_3 = rtCP_pooled23;
        } else if (static_cast<real32_T>(sensor.inceptor.ch[1]) < rtCP_pooled24)
        {
            rtb_DataTypeConversion4_idx_3 = rtCP_pooled24;
        } else {
            rtb_DataTypeConversion4_idx_3 = static_cast<real32_T>
                (sensor.inceptor.ch[1]);
        }

        // MATLAB Function: '<S43>/remap_with_deadband' incorporates:
        //   Constant: '<S43>/Constant'
        //   Constant: '<S43>/Constant1'
        //   Constant: '<S43>/Constant2'
        //   Constant: '<S43>/Constant3'
        //   Constant: '<S4>/Constant1'
        //   Saturate: '<S4>/Saturation2'
        remap_with_deadband(rtb_DataTypeConversion4_idx_3, rtCP_pooled24,
                            rtCP_pooled23, rtCP_pooled26, rtCP_pooled25,
                            rtCP_pooled32, &rtb_norm_out_i);

        // Switch: '<S9>/Deadzone' incorporates:
        //   Abs: '<S9>/Abs'
        //   Constant: '<S9>/Constant2'
        //   Constant: '<S9>/Constant3'
        if (std::abs(rtb_norm_out_i) > rtCP_pooled32) {
            rtb_Sum_c = rtCP_pooled13;
        } else {
            rtb_Sum_c = rtCP_pooled1;
        }

        // Logic: '<S9>/Logical Operator' incorporates:
        //   Constant: '<S7>/Constant'
        //   Switch: '<S9>/Deadzone'
        rtb_LogicalOperator1 = ((rtb_Sum_c != 0.0) && (rtCP_pooled13 != 0.0) &&
                                rtDWork.bitsForTID0.D);

        // Trigonometry: '<S7>/Trigonometric Function1' incorporates:
        //   Inport: '<Root>/StateEstData'
        rtb_DiscreteTimeIntegrator2 = std::sin(state_est.bfs_ins.ned_vel_mps[1]);

        // Trigonometry: '<S7>/Trigonometric Function' incorporates:
        //   Inport: '<Root>/StateEstData'
        rtb_DiscreteTimeIntegrator_b = std::cos(state_est.bfs_ins.ned_vel_mps[1]);

        // Gain: '<S11>/P_V_S' incorporates:
        //   Gain: '<S11>/Gain'
        //   Inport: '<Root>/StateEstData'
        //   Product: '<S7>/Product2'
        //   Product: '<S7>/Product3'
        //   Sum: '<S7>/Sum1'
        rtb_Sum2_m = rtCP_P_V_S_Gain * (rtCP_pooled26 *
            ((rtb_DiscreteTimeIntegrator_b * state_est.bfs_ins.heading_rad) -
             (state_est.bfs_ins.ned_vel_mps[0] * rtb_DiscreteTimeIntegrator2)));

        // Sum: '<S11>/Sum' incorporates:
        //   Constant: '<S11>/Constant'
        rtb_Sum = static_cast<real_T>(rtb_LogicalOperator1 ? 1.0 : 0.0) -
            rtCP_pooled21;

        // DiscreteIntegrator: '<S11>/Discrete-Time Integrator'
        if ((rtb_Sum > 0.0) && (rtDWork.DiscreteTimeIntegrator_PrevRese <= 0)) {
            rtDWork.DiscreteTimeIntegrator_DSTAT_ai = rtCP_pooled29;
        }

        // DiscreteIntegrator: '<S23>/Discrete-Time Integrator'
        rtb_phi_ideal = rtDWork.DiscreteTimeIntegrator_DSTATE_l;

        // DiscreteIntegrator: '<S23>/Discrete-Time Integrator1'
        rtb_p_ideal = rtDWork.DiscreteTimeIntegrator1_DSTATE;

        // Saturate: '<S7>/Saturation'
        if (rtb_norm_out_i > rtCP_pooled25) {
            // Saturate: '<S33>/Saturation'
            rtb_DataTypeConversion4_idx_2 = rtCP_pooled25;
        } else if (rtb_norm_out_i < rtCP_pooled26) {
            // Saturate: '<S33>/Saturation'
            rtb_DataTypeConversion4_idx_2 = rtCP_pooled26;
        } else {
            // Saturate: '<S33>/Saturation'
            rtb_DataTypeConversion4_idx_2 = rtb_norm_out_i;
        }

        // Sum: '<S23>/Sum' incorporates:
        //   Constant: '<S23>/Constant'
        //   Constant: '<S23>/Constant1'
        //   DiscreteIntegrator: '<S11>/Discrete-Time Integrator'
        //   DiscreteIntegrator: '<S23>/Discrete-Time Integrator'
        //   DiscreteIntegrator: '<S23>/Discrete-Time Integrator1'
        //   Gain: '<S23>/Gain'
        //   Gain: '<S7>/Gain'
        //   Product: '<S11>/Product'
        //   Product: '<S23>/Product'
        //   Product: '<S23>/Product1'
        //   Product: '<S23>/Product2'
        //   Saturate: '<S7>/Saturation'
        //   Sum: '<S11>/Sum2'
        //   Sum: '<S23>/Sum1'
        //   Sum: '<S7>/Sum2'
        rtb_pdot_ideal = (static_cast<real_T>(static_cast<real32_T>
                           ((rtb_LogicalOperator1 ? (rtb_Sum2_m +
                              rtDWork.DiscreteTimeIntegrator_DSTAT_ai) : 0.0F) +
                            (rtCP_pooled33 * rtb_DataTypeConversion4_idx_2))) *
                          rtConstB.Square_h) -
            ((rtDWork.DiscreteTimeIntegrator_DSTATE_l * rtConstB.Square1_j) +
             (rtCP_pooled19 * ((rtDWork.DiscreteTimeIntegrator1_DSTATE *
                                rtCP_Constant_Value) * rtCP_pooled12)));

        // Lookup_n-D: '<S23>/1-D Lookup Table' incorporates:
        //   Constant: '<S23>/Constant2'
        //   Gain: '<Root>/Gain'
        rtb_pitch = look1_iftdIf_pbinlc(rtb_Gain_pe, rtConstP.pooled31,
            rtConstP.Constant2_Value, &rtDWork.m_bpIndex_i, 6U);

        // Sum: '<S23>/Sum3' incorporates:
        //   DiscreteIntegrator: '<S23>/Discrete-Time Integrator1'
        //   Product: '<S23>/Product3'
        //   Sum: '<S23>/Sum2'
        rtb_phi_err_g = rtb_pdot_ideal - (static_cast<real_T>(rtb_pitch) *
            rtDWork.DiscreteTimeIntegrator1_DSTATE) - rtConstB.Gain5;

        // Lookup_n-D: '<S23>/1-D Lookup Table2' incorporates:
        //   Constant: '<S23>/Constant3'
        //   Gain: '<Root>/Gain'
        rtb_pitch = look1_iftdIf_pbinlc(rtb_Gain_pe, rtConstP.pooled31,
            rtConstP.pooled10, &rtDWork.m_bpIndex_hp, 6U);

        // Gain: '<S12>/Gain3' incorporates:
        //   Product: '<S23>/Divide'
        rtb_Sum5_b = rtCP_pooled13 * (rtb_phi_err_g / static_cast<real_T>
            (rtb_pitch));

        // Lookup_n-D: '<S19>/1-D Lookup Table1' incorporates:
        //   Constant: '<S19>/Constant3'
        //   Gain: '<Root>/Gain'
        rtb_pitch = look1_iftdIf_pbinlc(rtb_Gain_pe, rtConstP.pooled31,
            rtConstP.pooled10, &rtDWork.m_bpIndex_pz, 6U);

        // Product: '<S19>/Product1' incorporates:
        //   Constant: '<S19>/Constant1'
        //   Delay: '<S12>/Delay1'
        //   Inport: '<Root>/StateEstData'
        //   Sum: '<S19>/Sum1'
        //   Sum: '<S19>/Sum3'
        rtb_phi_err_g = rtDWork.bitsForTID0.D ? (rtDWork.Delay1_DSTATE - (
            static_cast<real_T>(state_est.bfs_ins.roll_rad) - rtCP_pooled8)) :
            0.0;

        // Signum: '<S19>/Sign'
        if (rtb_pitch < 0.0F) {
            i = -1;
        } else {
            i = (rtb_pitch > 0.0F) ? (static_cast<int32_T>(1)) :
                (static_cast<int32_T>(0));
        }

        // Product: '<S19>/Product' incorporates:
        //   Constant: '<S19>/Constant2'
        //   Delay: '<S12>/Delay'
        //   DiscreteIntegrator: '<S19>/Discrete-Time Integrator'
        //   Gain: '<S19>/Gain1'
        //   Gain: '<S19>/Gain4'
        //   Inport: '<Root>/StateEstData'
        //   Product: '<S19>/Product2'
        //   Signum: '<S19>/Sign'
        //   Sum: '<S19>/Sum'
        //   Sum: '<S19>/Sum2'
        //   Sum: '<S19>/Sum4'
        rtb_Product_e = static_cast<real_T>(i) * ((rtCP_Gain1_Gain *
            (rtDWork.bitsForTID0.D ? (rtDWork.Delay_DSTATE - (static_cast<real_T>
            (state_est.bfs_ins.gyro_radps[0]) - rtCP_pooled8)) : 0.0)) +
            (rtCP_Gain4_Gain * rtb_phi_err_g) +
            rtDWork.DiscreteTimeIntegrator_DSTATE_n);

        // Saturate: '<S4>/Saturation1' incorporates:
        //   DataTypeConversion: '<S4>/Data Type Conversion4'
        //   Inport: '<Root>/Sensor Data'
        if (static_cast<real32_T>(sensor.inceptor.ch[2]) > rtCP_pooled23) {
            rtb_DataTypeConversion4_idx_3 = rtCP_pooled23;
        } else if (static_cast<real32_T>(sensor.inceptor.ch[2]) < rtCP_pooled24)
        {
            rtb_DataTypeConversion4_idx_3 = rtCP_pooled24;
        } else {
            rtb_DataTypeConversion4_idx_3 = static_cast<real32_T>
                (sensor.inceptor.ch[2]);
        }

        // MATLAB Function: '<S42>/remap_with_deadband' incorporates:
        //   Constant: '<S42>/Constant'
        //   Constant: '<S42>/Constant1'
        //   Constant: '<S42>/Constant2'
        //   Constant: '<S42>/Constant3'
        //   Constant: '<S4>/Constant'
        //   Saturate: '<S4>/Saturation1'
        remap_with_deadband(rtb_DataTypeConversion4_idx_3, rtCP_pooled24,
                            rtCP_pooled23, rtCP_pooled26, rtCP_pooled25,
                            rtCP_pooled32, &rtb_norm_out_m);

        // Gain: '<S4>/Gain'
        rtb_pitch = rtCP_pooled26 * rtb_norm_out_m;

        // Switch: '<S9>/Deadzone1' incorporates:
        //   Abs: '<S9>/Abs1'
        //   Constant: '<S9>/Constant'
        //   Constant: '<S9>/Constant1'
        if (std::abs(rtb_pitch) > rtCP_pooled32) {
            rtb_Sum_c = rtCP_pooled13;
        } else {
            rtb_Sum_c = rtCP_pooled1;
        }

        // Logic: '<S9>/Logical Operator1' incorporates:
        //   Constant: '<S7>/Constant'
        //   Switch: '<S9>/Deadzone1'
        rtb_LogicalOperator1 = ((rtb_Sum_c != 0.0) && (rtCP_pooled13 != 0.0) &&
                                rtDWork.bitsForTID0.D);

        // Gain: '<S10>/P_V_F' incorporates:
        //   Gain: '<S10>/Gain'
        //   Inport: '<Root>/StateEstData'
        //   Product: '<S7>/Product'
        //   Product: '<S7>/Product1'
        //   Sum: '<S7>/Sum'
        rtb_DiscreteTimeIntegrator2 = rtCP_P_V_F_Gain * (rtCP_pooled26 *
            ((state_est.bfs_ins.ned_vel_mps[0] * rtb_DiscreteTimeIntegrator_b) +
             (rtb_DiscreteTimeIntegrator2 * state_est.bfs_ins.heading_rad)));

        // Sum: '<S10>/Sum' incorporates:
        //   Constant: '<S10>/Constant'
        rtb_Sum_c = static_cast<real_T>(rtb_LogicalOperator1 ? 1.0 : 0.0) -
            rtCP_pooled21;

        // DiscreteIntegrator: '<S10>/Discrete-Time Integrator'
        if ((rtb_Sum_c > 0.0) && (rtDWork.DiscreteTimeIntegrator_PrevRe_m <= 0))
        {
            rtDWork.DiscreteTimeIntegrator_DSTATE_o = rtCP_pooled29;
        }

        // DiscreteIntegrator: '<S22>/Discrete-Time Integrator1'
        rtb_theta_ideal = rtDWork.DiscreteTimeIntegrator1_DSTAT_e;

        // DiscreteIntegrator: '<S22>/Discrete-Time Integrator'
        rtb_q_ideal = rtDWork.DiscreteTimeIntegrator_DSTATE_a;

        // Saturate: '<S7>/Saturation1'
        if (rtb_pitch > rtCP_pooled25) {
            // Saturate: '<S33>/Saturation1'
            rtb_qdot_ideal_tmp = rtCP_pooled25;
        } else if (rtb_pitch < rtCP_pooled26) {
            // Saturate: '<S33>/Saturation1'
            rtb_qdot_ideal_tmp = rtCP_pooled26;
        } else {
            // Saturate: '<S33>/Saturation1'
            rtb_qdot_ideal_tmp = rtb_pitch;
        }

        // Sum: '<S22>/Sum4' incorporates:
        //   Constant: '<S22>/Constant'
        //   Constant: '<S22>/Constant1'
        //   DiscreteIntegrator: '<S10>/Discrete-Time Integrator'
        //   DiscreteIntegrator: '<S22>/Discrete-Time Integrator'
        //   DiscreteIntegrator: '<S22>/Discrete-Time Integrator1'
        //   Gain: '<S10>/Gain1'
        //   Gain: '<S22>/Gain6'
        //   Gain: '<S7>/Gain1'
        //   Product: '<S10>/Product'
        //   Product: '<S22>/Product'
        //   Product: '<S22>/Product1'
        //   Product: '<S22>/Product2'
        //   Saturate: '<S7>/Saturation1'
        //   Sum: '<S10>/Sum2'
        //   Sum: '<S22>/Sum5'
        //   Sum: '<S7>/Sum3'
        rtb_qdot_ideal = (static_cast<real_T>(static_cast<real32_T>
                           ((rtb_LogicalOperator1 ? (rtCP_pooled26 *
                              (rtb_DiscreteTimeIntegrator2 +
                               rtDWork.DiscreteTimeIntegrator_DSTATE_o)) : 0.0F)
                            + (rtCP_pooled33 * rtb_qdot_ideal_tmp))) *
                          rtConstB.Square) -
            ((rtDWork.DiscreteTimeIntegrator1_DSTAT_e * rtConstB.Square1) +
             (rtCP_pooled19 * ((rtDWork.DiscreteTimeIntegrator_DSTATE_a *
                                rtCP_pooled15) * rtCP_pooled12)));

        // Lookup_n-D: '<S22>/1-D Lookup Table' incorporates:
        //   Constant: '<S22>/Constant4'
        //   Gain: '<Root>/Gain'
        rtb_DiscreteTimeIntegrator_b = look1_iftdIf_pbinlc(rtb_Gain_pe,
            rtConstP.pooled31, rtConstP.Constant4_Value, &rtDWork.m_bpIndex_b,
            6U);

        // Sum: '<S22>/Sum3' incorporates:
        //   DiscreteIntegrator: '<S22>/Discrete-Time Integrator'
        //   DiscreteIntegrator: '<S22>/Discrete-Time Integrator1'
        //   Gain: '<S22>/Gain'
        //   Product: '<S22>/Product3'
        //   Sum: '<S22>/Sum2'
        rtb_theta_err = rtb_qdot_ideal - (static_cast<real_T>
            (rtb_DiscreteTimeIntegrator_b) *
            rtDWork.DiscreteTimeIntegrator_DSTATE_a) - (rtCP_pooled13 *
            rtDWork.DiscreteTimeIntegrator1_DSTAT_e);

        // Lookup_n-D: '<S22>/1-D Lookup Table1' incorporates:
        //   Constant: '<S22>/Constant3'
        //   Gain: '<Root>/Gain'
        rtb_DiscreteTimeIntegrator_b = look1_iftdIf_pbinlc(rtb_Gain_pe,
            rtConstP.pooled31, rtConstP.pooled9, &rtDWork.m_bpIndex_l, 6U);

        // Gain: '<S12>/Gain1' incorporates:
        //   Product: '<S22>/Divide'
        rtb_Sum6 = rtCP_pooled13 * (rtb_theta_err / static_cast<real_T>
            (rtb_DiscreteTimeIntegrator_b));

        // Lookup_n-D: '<S18>/1-D Lookup Table1' incorporates:
        //   Constant: '<S18>/Constant3'
        //   Gain: '<Root>/Gain'
        rtb_DiscreteTimeIntegrator_b = look1_iftdIf_pbinlc(rtb_Gain_pe,
            rtConstP.pooled31, rtConstP.pooled9, &rtDWork.m_bpIndex_e, 6U);

        // Product: '<S18>/Product1' incorporates:
        //   Constant: '<S18>/Constant4'
        //   Delay: '<S12>/Delay3'
        //   Inport: '<Root>/StateEstData'
        //   Sum: '<S18>/Sum1'
        //   Sum: '<S18>/Sum3'
        rtb_theta_err = rtDWork.bitsForTID0.D ? (rtDWork.Delay3_DSTATE - (
            static_cast<real_T>(state_est.bfs_ins.pitch_rad) - rtCP_pooled13)) :
            0.0;

        // Signum: '<S18>/Sign'
        if (rtb_DiscreteTimeIntegrator_b < 0.0F) {
            i = -1;
        } else {
            i = (rtb_DiscreteTimeIntegrator_b > 0.0F) ? (static_cast<int32_T>(1))
                : (static_cast<int32_T>(0));
        }

        // Product: '<S18>/Product' incorporates:
        //   Constant: '<S18>/Constant2'
        //   Delay: '<S12>/Delay2'
        //   DiscreteIntegrator: '<S18>/Discrete-Time Integrator'
        //   Gain: '<S18>/Gain1'
        //   Gain: '<S18>/Gain4'
        //   Inport: '<Root>/StateEstData'
        //   Product: '<S18>/Product2'
        //   Signum: '<S18>/Sign'
        //   Sum: '<S18>/Sum'
        //   Sum: '<S18>/Sum2'
        //   Sum: '<S18>/Sum4'
        rtb_Product_o = static_cast<real_T>(i) * ((rtCP_Gain1_Gain_h *
            (rtDWork.bitsForTID0.D ? (rtDWork.Delay2_DSTATE -
            (static_cast<real_T>(state_est.bfs_ins.gyro_radps[1]) - rtCP_pooled8))
             : 0.0)) + (rtCP_Gain4_Gain_p * rtb_theta_err) +
            rtDWork.DiscreteTimeIntegrator_DSTATE_h);

        // Saturate: '<S4>/Saturation3' incorporates:
        //   DataTypeConversion: '<S4>/Data Type Conversion2'
        //   Inport: '<Root>/Sensor Data'
        if (static_cast<real32_T>(sensor.inceptor.ch[3]) > rtCP_pooled23) {
            rtb_DataTypeConversion4_idx_3 = rtCP_pooled23;
        } else if (static_cast<real32_T>(sensor.inceptor.ch[3]) < rtCP_pooled24)
        {
            rtb_DataTypeConversion4_idx_3 = rtCP_pooled24;
        } else {
            rtb_DataTypeConversion4_idx_3 = static_cast<real32_T>
                (sensor.inceptor.ch[3]);
        }

        // MATLAB Function: '<S45>/remap_with_deadband' incorporates:
        //   Constant: '<S45>/Constant'
        //   Constant: '<S45>/Constant1'
        //   Constant: '<S45>/Constant2'
        //   Constant: '<S45>/Constant3'
        //   Constant: '<S4>/Constant2'
        //   Saturate: '<S4>/Saturation3'
        remap_with_deadband(rtb_DataTypeConversion4_idx_3, rtCP_pooled24,
                            rtCP_pooled23, rtCP_pooled26, rtCP_pooled25,
                            rtCP_pooled32, &rtb_norm_out_m);

        // DiscreteIntegrator: '<S24>/Discrete-Time Integrator'
        rtb_r_ideal = rtDWork.DiscreteTimeIntegrator_DSTAT_ho;

        // Saturate: '<S7>/Saturation3'
        if (rtb_norm_out_m > rtCP_pooled25) {
            // Saturate: '<S33>/Saturation3'
            rtb_DataTypeConversion4_idx_3 = rtCP_pooled25;
        } else if (rtb_norm_out_m < rtCP_pooled26) {
            // Saturate: '<S33>/Saturation3'
            rtb_DataTypeConversion4_idx_3 = rtCP_pooled26;
        } else {
            // Saturate: '<S33>/Saturation3'
            rtb_DataTypeConversion4_idx_3 = rtb_norm_out_m;
        }

        // Product: '<S24>/Divide' incorporates:
        //   Constant: '<S24>/Constant'
        //   DiscreteIntegrator: '<S24>/Discrete-Time Integrator'
        //   Gain: '<S7>/Gain3'
        //   Saturate: '<S7>/Saturation3'
        //   Sum: '<S24>/Sum'
        rtb_rdot_ideal = ((rtCP_Gain3_Gain_m * rtb_DataTypeConversion4_idx_3) -
                          rtDWork.DiscreteTimeIntegrator_DSTAT_ho) /
            rtCP_pooled22;

        // Lookup_n-D: '<S24>/1-D Lookup Table1' incorporates:
        //   Constant: '<S24>/Constant2'
        //   Gain: '<Root>/Gain'
        rtb_DiscreteTimeIntegrator_b = look1_iftdIf_pbinlc(rtb_Gain_pe,
            rtConstP.pooled31, rtConstP.Constant2_Value_h, &rtDWork.m_bpIndex_f,
            6U);

        // Sum: '<S24>/Sum2' incorporates:
        //   DiscreteIntegrator: '<S24>/Discrete-Time Integrator'
        //   Product: '<S24>/Product3'
        rtb_Sum2_pr = rtb_rdot_ideal - (rtb_DiscreteTimeIntegrator_b *
            rtDWork.DiscreteTimeIntegrator_DSTAT_ho);

        // Lookup_n-D: '<S24>/1-D Lookup Table2' incorporates:
        //   Constant: '<S24>/Constant3'
        //   Gain: '<Root>/Gain'
        rtb_DiscreteTimeIntegrator_b = look1_iftdIf_pbinlc(rtb_Gain_pe,
            rtConstP.pooled31, rtConstP.pooled11, &rtDWork.m_bpIndex_j, 6U);

        // Gain: '<S12>/Gain4' incorporates:
        //   Product: '<S24>/Divide1'
        rtb_DiscreteTimeIntegrator_b = rtCP_pooled29 * (rtb_Sum2_pr /
            rtb_DiscreteTimeIntegrator_b);

        // Lookup_n-D: '<S20>/1-D Lookup Table1' incorporates:
        //   Constant: '<S20>/Constant2'
        //   Gain: '<Root>/Gain'
        rtb_Gain_pe = look1_iftdIf_pbinlc(rtb_Gain_pe, rtConstP.pooled31,
            rtConstP.pooled11, &rtDWork.m_bpIndex_o, 6U);

        // Sum: '<S20>/Sum5' incorporates:
        //   Constant: '<S20>/Constant3'
        //   Inport: '<Root>/StateEstData'
        rtb_Sum5_i = static_cast<real_T>(state_est.bfs_ins.gyro_radps[2]) -
            rtCP_pooled13;

        // Product: '<S20>/Product1' incorporates:
        //   Delay: '<S12>/Delay5'
        //   Sum: '<S20>/Sum1'
        rtb_r_err = rtDWork.bitsForTID0.D ? (static_cast<real_T>
            (rtDWork.Delay5_DSTATE) - rtb_Sum5_i) : 0.0;

        // SampleTimeMath: '<S32>/TSamp'
        //
        //  About '<S32>/TSamp':
        //   y = u * K where K = 1 / ( w * Ts )
        //
        rtb_TSamp_f = rtb_r_err * rtCP_pooled14;

        // Signum: '<S20>/Sign'
        if (rtb_Gain_pe < 0.0F) {
            i = -1;
        } else {
            i = (rtb_Gain_pe > 0.0F) ? (static_cast<int32_T>(1)) :
                (static_cast<int32_T>(0));
        }

        // Product: '<S20>/Product' incorporates:
        //   DiscreteIntegrator: '<S20>/Discrete-Time Integrator'
        //   DiscreteIntegrator: '<S20>/Discrete-Time Integrator1'
        //   DiscreteIntegrator: '<S20>/Discrete-Time Integrator2'
        //   Gain: '<S20>/Gain1'
        //   Gain: '<S20>/Gain7'
        //   Gain: '<S20>/Gain9'
        //   Signum: '<S20>/Sign'
        //   Sum: '<S20>/Sum2'
        //   Sum: '<S20>/Sum3'
        //   Sum: '<S20>/Sum4'
        //   Sum: '<S32>/Diff'
        //   UnitDelay: '<S32>/UD'
        //
        //  Block description for '<S32>/Diff':
        //
        //   Add in CPU
        //
        //  Block description for '<S32>/UD':
        //
        //   Store in Global RAM
        rtb_Sum_f = static_cast<real_T>(i) * ((rtCP_pooled13 *
            (static_cast<real_T>(rtDWork.DiscreteTimeIntegrator2_DSTATE) -
             rtDWork.DiscreteTimeIntegrator_DSTATE_i)) + ((rtCP_pooled13 *
            (rtb_TSamp_f - rtDWork.UD_DSTATE_a)) + (rtCP_Gain9_Gain * rtb_r_err)
            + rtDWork.DiscreteTimeIntegrator1_DSTAT_c));

        // Gain: '<S12>/Gain16' incorporates:
        //   Sum: '<S12>/Sum3'
        rtb_Switch1_idx_0 = rtCP_pooled13 * (static_cast<real_T>(rtb_Gain6_p) +
            rtb_Product);

        // Saturate: '<S8>/Saturation2'
        if (rtb_Switch1_idx_0 > rtCP_pooled17) {
            // SignalConversion generated from: '<S8>/Matrix Multiply'
            rtb_Switch1_idx_0 = rtCP_pooled17;
        } else if (rtb_Switch1_idx_0 < rtCP_pooled18) {
            // SignalConversion generated from: '<S8>/Matrix Multiply'
            rtb_Switch1_idx_0 = rtCP_pooled18;
        } else {
            // no actions
        }

        // End of Saturate: '<S8>/Saturation2'

        // Sum: '<S12>/Sum1'
        rtb_Switch1_idx_1 = rtb_Sum5_b + rtb_Product_e;

        // Saturate: '<S8>/Saturation'
        if (rtb_Switch1_idx_1 > rtCP_Saturation_UpperSat) {
            // SignalConversion generated from: '<S8>/Matrix Multiply'
            rtb_Switch1_idx_1 = rtCP_Saturation_UpperSat;
        } else if (rtb_Switch1_idx_1 < rtCP_Saturation_LowerSat) {
            // SignalConversion generated from: '<S8>/Matrix Multiply'
            rtb_Switch1_idx_1 = rtCP_Saturation_LowerSat;
        } else {
            // no actions
        }

        // End of Saturate: '<S8>/Saturation'

        // Sum: '<S12>/Sum'
        rtb_Switch1_idx_2 = rtb_Sum6 + rtb_Product_o;

        // Saturate: '<S8>/Saturation1'
        if (rtb_Switch1_idx_2 > rtCP_Saturation1_UpperSat) {
            // SignalConversion generated from: '<S8>/Matrix Multiply'
            rtb_Switch1_idx_2 = rtCP_Saturation1_UpperSat;
        } else if (rtb_Switch1_idx_2 < rtCP_Saturation1_LowerSat) {
            // SignalConversion generated from: '<S8>/Matrix Multiply'
            rtb_Switch1_idx_2 = rtCP_Saturation1_LowerSat;
        } else {
            // no actions
        }

        // End of Saturate: '<S8>/Saturation1'

        // Sum: '<S12>/Sum2'
        rtb_Switch1_idx_3 = static_cast<real_T>(rtb_DiscreteTimeIntegrator_b) +
            rtb_Sum_f;

        // Saturate: '<S8>/Saturation3'
        if (rtb_Switch1_idx_3 > rtCP_pooled17) {
            // SignalConversion generated from: '<S8>/Matrix Multiply'
            rtb_Switch1_idx_3 = rtCP_pooled17;
        } else if (rtb_Switch1_idx_3 < rtCP_pooled18) {
            // SignalConversion generated from: '<S8>/Matrix Multiply'
            rtb_Switch1_idx_3 = rtCP_pooled18;
        } else {
            // no actions
        }

        // End of Saturate: '<S8>/Saturation3'
        for (i = 0; i < 4; i++) {
            // Sum: '<S8>/Sum' incorporates:
            //   Constant: '<S8>/Constant'
            //   Product: '<S8>/Matrix Multiply'
            rtb_Switch2_0 = rtb_Switch2[i] + ((rtConstP.pooled2[i] *
                rtb_Switch1_idx_0) + (rtConstP.pooled2[i + 4] *
                rtb_Switch1_idx_1) + (rtConstP.pooled2[i + 8] *
                rtb_Switch1_idx_2) + (rtConstP.pooled2[i + 12] *
                rtb_Switch1_idx_3));

            // Saturate: '<S8>/Saturation4'
            if (rtb_Switch2_0 > rtCP_pooled20) {
                rtb_Saturation4[i] = rtCP_pooled20;
            } else if (rtb_Switch2_0 < rtCP_pooled13) {
                rtb_Saturation4[i] = rtCP_pooled13;
            } else {
                rtb_Saturation4[i] = rtb_Switch2_0;
            }

            // End of Saturate: '<S8>/Saturation4'
        }

        // MATLAB Function: '<S8>/remap' incorporates:
        //   Constant: '<S8>/Constant1'
        //   Constant: '<S8>/Constant2'
        //   Constant: '<S8>/Constant3'
        //   Constant: '<S8>/Constant4'
        remap(rtb_Saturation4, rtCP_pooled13, rtCP_pooled20, rtCP_pooled5,
              rtCP_pooled6, rtb_Switch2);

        // SignalConversion generated from: '<S13>/Matrix Multiply' incorporates:
        //   Gain: '<S33>/Gain'
        //   Gain: '<S33>/Gain1'
        //   Gain: '<S33>/Gain2'
        //   Gain: '<S33>/Gain3'
        //   Saturate: '<S33>/Saturation2'
        rtb_DataTypeConversion4_idx_0 *= rtCP_pooled29;
        rtb_Gain_pe = rtCP_pooled29 * rtb_DataTypeConversion4_idx_2;
        rtb_DataTypeConversion4_idx_2 = rtCP_pooled29 * rtb_qdot_ideal_tmp;
        rtb_DataTypeConversion4_idx_3 *= rtCP_pooled29;

        // Product: '<S13>/Matrix Multiply' incorporates:
        //   Constant: '<S13>/Constant'
        for (i = 0; i < 4; i++) {
            rtb_MatrixMultiply1[i] = (rtConstP.pooled2[i] * static_cast<real_T>
                (rtb_DataTypeConversion4_idx_0)) + (rtConstP.pooled2[i + 4] *
                static_cast<real_T>(rtb_Gain_pe)) + (rtConstP.pooled2[i + 8] *
                static_cast<real_T>(rtb_DataTypeConversion4_idx_2)) +
                (rtConstP.pooled2[i + 12] * static_cast<real_T>
                 (rtb_DataTypeConversion4_idx_3));
        }

        // End of Product: '<S13>/Matrix Multiply'

        // Sum: '<S13>/Sum' incorporates:
        //   Gain: '<S34>/Gain'
        //   Gain: '<S34>/Gain1'
        rtb_Saturation4[0] = static_cast<real_T>(rtb_Gain_a_tmp) +
            rtb_MatrixMultiply1[0];
        rtb_Saturation4[1] = static_cast<real_T>(rtb_Gain1_cv_tmp) +
            rtb_MatrixMultiply1[1];
        rtb_Saturation4[2] = static_cast<real_T>(rtb_Gain_a_tmp) +
            rtb_MatrixMultiply1[2];
        rtb_Saturation4[3] = static_cast<real_T>(rtb_Gain1_cv_tmp) +
            rtb_MatrixMultiply1[3];

        // Saturate: '<S13>/Saturation1'
        if (rtb_Saturation4[0] > rtCP_pooled20) {
            rtb_MatrixMultiply1[0] = rtCP_pooled20;
        } else if (rtb_Saturation4[0] < rtCP_pooled13) {
            rtb_MatrixMultiply1[0] = rtCP_pooled13;
        } else {
            rtb_MatrixMultiply1[0] = rtb_Saturation4[0];
        }

        if (rtb_Saturation4[1] > rtCP_pooled20) {
            rtb_MatrixMultiply1[1] = rtCP_pooled20;
        } else if (rtb_Saturation4[1] < rtCP_pooled13) {
            rtb_MatrixMultiply1[1] = rtCP_pooled13;
        } else {
            rtb_MatrixMultiply1[1] = rtb_Saturation4[1];
        }

        if (rtb_Saturation4[2] > rtCP_pooled20) {
            rtb_MatrixMultiply1[2] = rtCP_pooled20;
        } else if (rtb_Saturation4[2] < rtCP_pooled13) {
            rtb_MatrixMultiply1[2] = rtCP_pooled13;
        } else {
            rtb_MatrixMultiply1[2] = rtb_Saturation4[2];
        }

        if (rtb_Saturation4[3] > rtCP_pooled20) {
            rtb_MatrixMultiply1[3] = rtCP_pooled20;
        } else if (rtb_Saturation4[3] < rtCP_pooled13) {
            rtb_MatrixMultiply1[3] = rtCP_pooled13;
        } else {
            rtb_MatrixMultiply1[3] = rtb_Saturation4[3];
        }

        // End of Saturate: '<S13>/Saturation1'

        // MATLAB Function: '<S13>/remap' incorporates:
        //   Constant: '<S13>/Constant1'
        //   Constant: '<S13>/Constant2'
        //   Constant: '<S13>/Constant3'
        //   Constant: '<S13>/Constant4'
        remap(rtb_MatrixMultiply1, rtCP_pooled13, rtCP_pooled20, rtCP_pooled5,
              rtCP_pooled6, rtb_Saturation4);

        // Switch: '<S8>/Switch'
        if (rtDWork.bitsForTID0.D) {
            rtb_Saturation4[0] = rtb_Switch2[0];
            rtb_Saturation4[1] = rtb_Switch2[1];
            rtb_Saturation4[2] = rtb_Switch2[2];
            rtb_Saturation4[3] = rtb_Switch2[3];
        }

        // End of Switch: '<S8>/Switch'

        // Switch: '<Root>/emergency_switch1' incorporates:
        //   Constant: '<Root>/Constant5'
        //   Constant: '<Root>/Constant8'
        //   DataTypeConversion: '<Root>/Data Type Conversion11'
        //   DataTypeConversion: '<Root>/Data Type Conversion2'
        if (static_cast<real_T>(rtb_Compare ? 1.0 : 0.0) > rtCP_pooled21) {
            rtb_PWM_cont[0] = static_cast<real32_T>(rtb_Saturation4[0]);
            rtb_PWM_cont[4] = rtCP_Constant8_Value_EL_0;
            rtb_PWM_cont[1] = static_cast<real32_T>(rtb_Saturation4[1]);
            rtb_PWM_cont[5] = rtCP_Constant8_Value_EL_1;
            rtb_PWM_cont[2] = static_cast<real32_T>(rtb_Saturation4[2]);
            rtb_PWM_cont[6] = rtCP_Constant8_Value_EL_2;
            rtb_PWM_cont[3] = static_cast<real32_T>(rtb_Saturation4[3]);
            rtb_PWM_cont[7] = rtCP_Constant8_Value_EL_3;
        } else {
            for (i = 0; i < 8; i++) {
                rtb_PWM_cont[i] = rtConstP.Constant5_Value[i];
            }
        }

        // End of Switch: '<Root>/emergency_switch1'

        // MATLAB Function: '<S14>/remap1' incorporates:
        //   Constant: '<S14>/Constant10'
        //   Constant: '<S14>/Constant11'
        //   Constant: '<S14>/Constant12'
        //   Constant: '<S14>/Constant9'
        remap(rtb_Saturation4, rtCP_pooled5, rtCP_pooled6, rtCP_pooled13,
              rtCP_pooled20, rtb_Switch2);

        // Sum: '<S14>/Sum2' incorporates:
        //   Constant: '<S14>/Constant13'
        //   Constant: '<S14>/Constant14'
        //   Constant: '<S14>/Constant15'
        //   Constant: '<S14>/Constant16'
        rtb_Switch2_0 = rtb_Switch2[0] - rtCP_pooled3;
        rtb_raw_out_idx_1 = rtb_Switch2[1] - rtCP_pooled4;
        rtb_raw_out_idx_2 = rtb_Switch2[2] - rtCP_pooled3;
        rtb_raw_out_idx_3 = rtb_Switch2[3] - rtCP_pooled4;

        // Product: '<S14>/Matrix Multiply1' incorporates:
        //   Constant: '<S14>/Constant17'
        for (i = 0; i < 4; i++) {
            rtb_MatrixMultiply1[i] = (rtConstP.Constant17_Value[i] *
                rtb_Switch2_0) + (rtConstP.Constant17_Value[i + 4] *
                                  rtb_raw_out_idx_1) +
                (rtConstP.Constant17_Value[i + 8] * rtb_raw_out_idx_2) +
                (rtConstP.Constant17_Value[i + 12] * rtb_raw_out_idx_3);
        }

        // End of Product: '<S14>/Matrix Multiply1'

        // Outport: '<Root>/VmsData' incorporates:
        //   BusCreator: '<S2>/Bus Creator'
        //   DataTypeConversion: '<Root>/Data Type Conversion'
        //   DataTypeConversion: '<Root>/Data Type Conversion1'
        //   DataTypeConversion: '<S2>/Cast2'
        //   Gain: '<Root>/Gain'
        //   Inport: '<Root>/StateEstData'
        //   SignalConversion generated from: '<S2>/Bus Creator'
        //
        vms->advance_waypoint = false;
        vms->motors_enabled = rtb_Compare;
        vms->mode = 0;
        vms->sbus[0] = 0;
        vms->sbus[1] = 0;
        vms->sbus[2] = 0;
        vms->sbus[3] = 0;
        vms->sbus[4] = 0;
        vms->sbus[5] = 0;
        vms->sbus[6] = 0;
        vms->sbus[7] = 0;
        vms->sbus[8] = 0;
        vms->sbus[9] = 0;
        vms->sbus[10] = 0;
        vms->sbus[11] = 0;
        vms->sbus[12] = 0;
        vms->sbus[13] = 0;
        vms->sbus[14] = 0;
        vms->sbus[15] = 0;
        for (i = 0; i < 8; i++) {
            vms->pwm[i] = static_cast<int16_T>(std::floor(rtb_PWM_cont[i]));
        }

        vms->throttle_cmd_prcnt = rtCP_Gain_Gain * rtb_norm_out;
        vms->flight_time_remaining_s = 0.0F;
        vms->power_remaining_prcnt = 0.0F;
        vms->aux[0] = state_est.bfs_ins.gyro_radps[0];
        vms->aux[1] = state_est.bfs_ins.gyro_radps[1];
        vms->aux[2] = state_est.bfs_ins.gyro_radps[2];
        vms->aux[3] = state_est.bfs_ins.roll_rad;
        vms->aux[4] = state_est.bfs_ins.pitch_rad;
        vms->aux[5] = state_est.bfs_ins.heading_rad;
        vms->aux[6] = rtDWork.bitsForTID0.D ? 1.0F : 0.0F;
        vms->aux[7] = rtb_norm_out;
        vms->aux[8] = rtb_pitch;
        vms->aux[9] = rtb_norm_out_i;
        vms->aux[10] = rtb_norm_out_m;
        vms->aux[11] = rtb_norm_out_fu;
        vms->aux[12] = static_cast<real32_T>(rtb_MatrixMultiply1[0]);

        // Switch: '<S8>/Switch1'
        if (rtDWork.bitsForTID0.D) {
            // Outport: '<Root>/VmsData' incorporates:
            //   DataTypeConversion: '<Root>/Data Type Conversion4'
            vms->aux[16] = static_cast<real32_T>(rtb_Switch1_idx_0);
        } else {
            // Outport: '<Root>/VmsData'
            vms->aux[16] = rtb_DataTypeConversion4_idx_0;
        }

        // Outport: '<Root>/VmsData' incorporates:
        //   DataTypeConversion: '<Root>/Data Type Conversion1'
        //   Gain: '<S34>/Gain'
        vms->aux[20] = rtb_Gain_a_tmp;
        vms->aux[13] = static_cast<real32_T>(rtb_MatrixMultiply1[1]);

        // Switch: '<S8>/Switch1'
        if (rtDWork.bitsForTID0.D) {
            // Outport: '<Root>/VmsData' incorporates:
            //   DataTypeConversion: '<Root>/Data Type Conversion4'
            vms->aux[17] = static_cast<real32_T>(rtb_Switch1_idx_1);
        } else {
            // Outport: '<Root>/VmsData'
            vms->aux[17] = rtb_Gain_pe;
        }

        // Outport: '<Root>/VmsData' incorporates:
        //   DataTypeConversion: '<Root>/Data Type Conversion1'
        //   Gain: '<S34>/Gain1'
        vms->aux[21] = rtb_Gain1_cv_tmp;
        vms->aux[14] = static_cast<real32_T>(rtb_MatrixMultiply1[2]);

        // Switch: '<S8>/Switch1'
        if (rtDWork.bitsForTID0.D) {
            // Outport: '<Root>/VmsData' incorporates:
            //   DataTypeConversion: '<Root>/Data Type Conversion4'
            vms->aux[18] = static_cast<real32_T>(rtb_Switch1_idx_2);
        } else {
            // Outport: '<Root>/VmsData'
            vms->aux[18] = rtb_DataTypeConversion4_idx_2;
        }

        // Outport: '<Root>/VmsData' incorporates:
        //   DataTypeConversion: '<Root>/Data Type Conversion1'
        vms->aux[22] = rtb_Gain_a_tmp;
        vms->aux[15] = static_cast<real32_T>(rtb_MatrixMultiply1[3]);

        // Switch: '<S8>/Switch1'
        if (rtDWork.bitsForTID0.D) {
            // Outport: '<Root>/VmsData' incorporates:
            //   DataTypeConversion: '<Root>/Data Type Conversion4'
            vms->aux[19] = static_cast<real32_T>(rtb_Switch1_idx_3);
        } else {
            // Outport: '<Root>/VmsData'
            vms->aux[19] = rtb_DataTypeConversion4_idx_3;
        }

        // Outport: '<Root>/VmsData'
        vms->aux[23] = rtb_Gain1_cv_tmp;

        // Saturate: '<S4>/Saturation4' incorporates:
        //   DataTypeConversion: '<S4>/Data Type Conversion1'
        //   Inport: '<Root>/Sensor Data'
        if (static_cast<real32_T>(sensor.inceptor.ch[7]) > rtCP_pooled23) {
            rtb_DataTypeConversion4_idx_3 = rtCP_pooled23;
        } else if (static_cast<real32_T>(sensor.inceptor.ch[7]) < rtCP_pooled24)
        {
            rtb_DataTypeConversion4_idx_3 = rtCP_pooled24;
        } else {
            rtb_DataTypeConversion4_idx_3 = static_cast<real32_T>
                (sensor.inceptor.ch[7]);
        }

        // MATLAB Function: '<S40>/remap' incorporates:
        //   Constant: '<S40>/Constant'
        //   Constant: '<S40>/Constant1'
        //   Constant: '<S40>/Constant2'
        //   Constant: '<S40>/Constant3'
        //   Saturate: '<S4>/Saturation4'
        remap_j(rtb_DataTypeConversion4_idx_3, rtCP_pooled24,
                rtCP_Constant3_Value, rtCP_pooled29, rtCP_pooled25,
                &rtb_norm_out_fu);

        // Update for DiscreteIntegrator: '<S21>/Discrete-Time Integrator'
        rtDWork.DiscreteTimeIntegrator_DSTAT_ii += rtCP_pooled30 *
            rtb_wdot_ideal;

        // Update for Delay: '<S12>/Delay4'
        rtDWork.Delay4_DSTATE = rtb_raw_out_j;

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
        rtDWork.DiscreteTimeIntegrator_DSTATE += rtCP_pooled16 *
            (rtDWork.bitsForTID0.D ? ((rtCP_Gain2_Gain * rtb_Gain4_i) +
              (rtCP_Gain8_Gain * (rtb_MatrixMultiply1[0] - static_cast<real_T>
                (rtb_Gain6_p) - rtb_Product))) : 0.0);

        // Update for DiscreteIntegrator: '<S11>/Discrete-Time Integrator' incorporates:
        //   Gain: '<S11>/IntRat_V_S'
        rtDWork.DiscreteTimeIntegrator_DSTAT_ai += rtCP_pooled30 *
            (rtCP_pooled34 * rtb_Sum2_m);
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
        rtDWork.DiscreteTimeIntegrator_DSTATE_l += rtCP_pooled16 *
            rtDWork.DiscreteTimeIntegrator1_DSTATE;

        // Update for DiscreteIntegrator: '<S23>/Discrete-Time Integrator1'
        rtDWork.DiscreteTimeIntegrator1_DSTATE += rtCP_pooled16 * rtb_pdot_ideal;

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
        rtDWork.DiscreteTimeIntegrator_DSTATE_n += rtCP_pooled16 *
            (rtDWork.bitsForTID0.D ? ((rtCP_Gain2_Gain_j * rtb_phi_err_g) +
              (rtCP_pooled15 * (rtb_MatrixMultiply1[1] - rtb_Sum5_b -
                                rtb_Product_e))) : 0.0);

        // Update for DiscreteIntegrator: '<S10>/Discrete-Time Integrator' incorporates:
        //   Gain: '<S10>/IntRat_V_F'
        rtDWork.DiscreteTimeIntegrator_DSTATE_o += rtCP_pooled30 *
            (rtCP_pooled34 * rtb_DiscreteTimeIntegrator2);
        if (rtb_Sum_c > 0.0) {
            rtDWork.DiscreteTimeIntegrator_PrevRe_m = 1;
        } else if (rtb_Sum_c < 0.0) {
            rtDWork.DiscreteTimeIntegrator_PrevRe_m = -1;
        } else if (rtb_Sum_c == 0.0) {
            rtDWork.DiscreteTimeIntegrator_PrevRe_m = 0;
        } else {
            rtDWork.DiscreteTimeIntegrator_PrevRe_m = 2;
        }

        // End of Update for DiscreteIntegrator: '<S10>/Discrete-Time Integrator'

        // Update for DiscreteIntegrator: '<S22>/Discrete-Time Integrator1' incorporates:
        //   DiscreteIntegrator: '<S22>/Discrete-Time Integrator'
        rtDWork.DiscreteTimeIntegrator1_DSTAT_e += rtCP_pooled16 *
            rtDWork.DiscreteTimeIntegrator_DSTATE_a;

        // Update for DiscreteIntegrator: '<S22>/Discrete-Time Integrator'
        rtDWork.DiscreteTimeIntegrator_DSTATE_a += rtCP_pooled16 *
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
        rtDWork.DiscreteTimeIntegrator_DSTATE_h += rtCP_pooled16 *
            (rtDWork.bitsForTID0.D ? ((rtCP_Gain3_Gain * rtb_theta_err) +
              (rtCP_pooled21 * (rtb_MatrixMultiply1[2] - rtb_Sum6 -
                                rtb_Product_o))) : 0.0);

        // Update for DiscreteIntegrator: '<S24>/Discrete-Time Integrator'
        rtDWork.DiscreteTimeIntegrator_DSTAT_ho += rtCP_pooled30 *
            rtb_rdot_ideal;

        // Update for DiscreteIntegrator: '<S20>/Discrete-Time Integrator2' incorporates:
        //   Delay: '<S12>/Delay5'
        rtDWork.DiscreteTimeIntegrator2_DSTATE += rtCP_pooled30 *
            rtDWork.Delay5_DSTATE;

        // Update for DiscreteIntegrator: '<S20>/Discrete-Time Integrator'
        rtDWork.DiscreteTimeIntegrator_DSTATE_i += rtCP_pooled16 * rtb_Sum5_i;

        // Update for Delay: '<S12>/Delay5'
        rtDWork.Delay5_DSTATE = rtb_r_ideal;

        // Update for UnitDelay: '<S32>/UD'
        //
        //  Block description for '<S32>/UD':
        //
        //   Store in Global RAM
        rtDWork.UD_DSTATE_a = rtb_TSamp_f;

        // Update for DiscreteIntegrator: '<S20>/Discrete-Time Integrator1' incorporates:
        //   Gain: '<S20>/Gain2'
        //   Product: '<S20>/Product2'
        //   Sum: '<S12>/Sum11'
        //   Sum: '<S12>/Sum7'
        //   Sum: '<S20>/Sum'
        rtDWork.DiscreteTimeIntegrator1_DSTAT_c += rtCP_pooled16 *
            (rtDWork.bitsForTID0.D ? ((rtCP_Gain2_Gain_g * rtb_r_err) +
              (rtb_MatrixMultiply1[3] - static_cast<real_T>
               (rtb_DiscreteTimeIntegrator_b) - rtb_Sum_f)) : 0.0);
    }

    // Model initialize function
    void Autocode::initialize()
    {
        // InitializeConditions for DiscreteIntegrator: '<S11>/Discrete-Time Integrator'
        rtDWork.DiscreteTimeIntegrator_PrevRese = 2;

        // InitializeConditions for DiscreteIntegrator: '<S10>/Discrete-Time Integrator'
        rtDWork.DiscreteTimeIntegrator_PrevRe_m = 2;
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
