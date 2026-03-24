//
// File: autocode.h
//
// Code generated for Simulink model 'ground_test_EMF'.
//
// Model version                  : 8.113
// Simulink Coder version         : 24.1 (R2024a) 19-Nov-2023
// C/C++ source code generated on : Tue Mar 24 10:50:02 2026
//
#ifndef autocode_h_
#define autocode_h_
#include "rtwtypes.h"
#include "global_defs.h"

// Class declaration for model ground_test_EMF
namespace bfs
{
    class Autocode
    {
        // public data and function members
      public:
        // Block signals and states (default storage) for system '<Root>'
        struct D_Work {
            real_T UD_DSTATE;          // '<S25>/UD'
            real_T DiscreteTimeIntegrator_DSTATE;// '<S17>/Discrete-Time Integrator' 
            real_T DiscreteTimeIntegrator_DSTATE_l;// '<S23>/Discrete-Time Integrator' 
            real_T DiscreteTimeIntegrator1_DSTATE;// '<S23>/Discrete-Time Integrator1' 
            real_T Delay_DSTATE;       // '<S12>/Delay'
            real_T Delay1_DSTATE;      // '<S12>/Delay1'
            real_T DiscreteTimeIntegrator_DSTATE_n;// '<S19>/Discrete-Time Integrator' 
            real_T DiscreteTimeIntegrator1_DSTAT_e;// '<S22>/Discrete-Time Integrator1' 
            real_T DiscreteTimeIntegrator_DSTATE_a;// '<S22>/Discrete-Time Integrator' 
            real_T Delay2_DSTATE;      // '<S12>/Delay2'
            real_T Delay3_DSTATE;      // '<S12>/Delay3'
            real_T DiscreteTimeIntegrator_DSTATE_h;// '<S18>/Discrete-Time Integrator' 
            real_T DiscreteTimeIntegrator_DSTATE_i;// '<S20>/Discrete-Time Integrator' 
            real_T UD_DSTATE_a;        // '<S32>/UD'
            real_T DiscreteTimeIntegrator1_DSTAT_c;// '<S20>/Discrete-Time Integrator1' 
            real32_T DiscreteTimeIntegrator_DSTAT_ii;// '<S21>/Discrete-Time Integrator' 
            real32_T Delay4_DSTATE;    // '<S12>/Delay4'
            real32_T DiscreteTimeIntegrator_DSTAT_ai;// '<S11>/Discrete-Time Integrator' 
            real32_T DiscreteTimeIntegrator_DSTATE_o;// '<S10>/Discrete-Time Integrator' 
            real32_T DiscreteTimeIntegrator_DSTAT_ho;// '<S24>/Discrete-Time Integrator' 
            real32_T DiscreteTimeIntegrator2_DSTATE;// '<S20>/Discrete-Time Integrator2' 
            real32_T Delay5_DSTATE;    // '<S12>/Delay5'
            uint32_T m_bpIndex;        // '<S21>/1-D Lookup Table'
            uint32_T m_bpIndex_p;      // '<S21>/1-D Lookup Table1'
            uint32_T m_bpIndex_h;      // '<S17>/1-D Lookup Table1'
            uint32_T m_bpIndex_i;      // '<S23>/1-D Lookup Table'
            uint32_T m_bpIndex_hp;     // '<S23>/1-D Lookup Table2'
            uint32_T m_bpIndex_pz;     // '<S19>/1-D Lookup Table1'
            uint32_T m_bpIndex_b;      // '<S22>/1-D Lookup Table'
            uint32_T m_bpIndex_l;      // '<S22>/1-D Lookup Table1'
            uint32_T m_bpIndex_e;      // '<S18>/1-D Lookup Table1'
            uint32_T m_bpIndex_f;      // '<S24>/1-D Lookup Table1'
            uint32_T m_bpIndex_j;      // '<S24>/1-D Lookup Table2'
            uint32_T m_bpIndex_o;      // '<S20>/1-D Lookup Table1'
            struct {
                uint_T D:1;            // '<S39>/D'
            } bitsForTID0;

            int8_T DiscreteTimeIntegrator_PrevRese;// '<S11>/Discrete-Time Integrator' 
            int8_T DiscreteTimeIntegrator_PrevRe_m;// '<S10>/Discrete-Time Integrator' 
        };

        // Invariant block signals (default storage)
        struct ConstBlockIO {
            real_T Square;             // '<S22>/Square'
            real_T Square1;            // '<S22>/Square1'
            real_T Gain5;              // '<S23>/Gain5'
            real_T Square_h;           // '<S23>/Square'
            real_T Square1_j;          // '<S23>/Square1'
            boolean_T DataTypeConversion2;// '<S3>/Data Type Conversion2'
        };

        // Constant parameters (default storage)
        struct ConstParam {
            // Pooled Parameter (Expression: HoverModel.D(10:13, 1:4))
            //  Referenced by:
            //    '<S8>/Constant'
            //    '<S13>/Constant'

            real_T pooled2[16];

            // Pooled Parameter (Expression: EMF.Zcol)
            //  Referenced by:
            //    '<S17>/Constant2'
            //    '<S21>/Constant3'

            real_T pooled7[7];

            // Pooled Parameter (Expression: EMF.Mlon)
            //  Referenced by:
            //    '<S18>/Constant3'
            //    '<S22>/Constant3'

            real_T pooled9[7];

            // Pooled Parameter (Expression: EMF.Llat)
            //  Referenced by:
            //    '<S19>/Constant3'
            //    '<S23>/Constant3'

            real_T pooled10[7];

            // Pooled Parameter (Expression: EMF.Nped)
            //  Referenced by:
            //    '<S20>/Constant2'
            //    '<S24>/Constant3'

            real_T pooled11[7];

            // Expression: EMF.Zw
            //  Referenced by: '<S21>/Constant1'

            real_T Constant1_Value[7];

            // Expression: EMF.Mq
            //  Referenced by: '<S22>/Constant4'

            real_T Constant4_Value[7];

            // Expression: EMF.Lp
            //  Referenced by: '<S23>/Constant2'

            real_T Constant2_Value[7];

            // Expression: EMF.Nr
            //  Referenced by: '<S24>/Constant2'

            real_T Constant2_Value_h[7];

            // Expression: inv(HoverModel.D(10:13, 1:4))
            //  Referenced by: '<S14>/Constant17'

            real_T Constant17_Value[16];

            // Computed Parameter: Constant5_Value
            //  Referenced by: '<Root>/Constant5'

            real32_T Constant5_Value[8];

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

            real32_T pooled31[7];
        };

        // model initialize function
        void initialize();

        // model step function
        void Run(const SysData &sys, const SensorData &sensor, const
                 StateEstData &state_est, const TelemData &telem, VmsData *vms);

        // Constructor
        Autocode();

        // Destructor
        ~Autocode();

        // private data and function members
      private:
        // Block states
        D_Work rtDWork;

        // private member function(s) for subsystem '<S13>/remap'
        static void remap(const real_T rtu_norm_in[4], real_T rtu_in_min, real_T
                          rtu_in_max, real_T rtu_out_min, real_T rtu_out_max,
                          real_T rty_raw_out[4]);

        // private member function(s) for subsystem '<S40>/remap'
        static void remap_j(real32_T rtu_raw_in, real32_T rtu_in_min, real32_T
                            rtu_in_max, real32_T rtu_out_min, real32_T
                            rtu_out_max, real32_T *rty_norm_out);

        // private member function(s) for subsystem '<S42>/remap_with_deadband'
        static void remap_with_deadband(real32_T rtu_raw_in, real32_T rtu_in_min,
            real32_T rtu_in_max, real32_T rtu_out_min, real32_T rtu_out_max,
            real32_T rtu_deadband, real32_T *rty_norm_out);
    };
}

extern const bfs::Autocode::ConstBlockIO rtConstB;// constant block i/o

// Constant parameters (default storage)
extern const bfs::Autocode::ConstParam rtConstP;

//-
//  These blocks were eliminated from the model due to optimizations:
//
//  Block '<S25>/Data Type Duplicate' : Unused code path elimination
//  Block '<S17>/Heave Rate' : Unused code path elimination
//  Block '<S17>/Scope' : Unused code path elimination
//  Block '<S26>/Gain' : Unused code path elimination
//  Block '<S27>/Gain' : Unused code path elimination
//  Block '<S28>/Gain' : Unused code path elimination
//  Block '<S29>/Gain' : Unused code path elimination
//  Block '<S18>/Scope' : Unused code path elimination
//  Block '<S18>/Scope3' : Unused code path elimination
//  Block '<S18>/q' : Unused code path elimination
//  Block '<S18>/theta' : Unused code path elimination
//  Block '<S19>/Phi' : Unused code path elimination
//  Block '<S30>/Gain' : Unused code path elimination
//  Block '<S31>/Gain' : Unused code path elimination
//  Block '<S19>/roll rate' : Unused code path elimination
//  Block '<S32>/Data Type Duplicate' : Unused code path elimination
//  Block '<S20>/yaw rate' : Unused code path elimination
//  Block '<S21>/Delay' : Unused code path elimination
//  Block '<S21>/Delay1' : Unused code path elimination
//  Block '<S22>/Delay' : Unused code path elimination
//  Block '<S22>/Delay1' : Unused code path elimination
//  Block '<S22>/Delay2' : Unused code path elimination
//  Block '<S23>/Delay' : Unused code path elimination
//  Block '<S23>/Delay1' : Unused code path elimination
//  Block '<S23>/Delay2' : Unused code path elimination
//  Block '<S24>/Delay' : Unused code path elimination
//  Block '<S24>/Delay1' : Unused code path elimination
//  Block '<S39>/Logic' : Unused code path elimination
//  Block '<S7>/Data Type Conversion' : Eliminate redundant data type conversion
//  Block '<S7>/Data Type Conversion1' : Eliminate redundant data type conversion
//  Block '<S12>/Gain' : Eliminated nontunable gain of 1
//  Block '<S12>/Gain11' : Eliminated nontunable gain of 1
//  Block '<S12>/Gain13' : Eliminated nontunable gain of 1
//  Block '<S12>/Gain14' : Eliminated nontunable gain of 1
//  Block '<S12>/Gain15' : Eliminated nontunable gain of 1
//  Block '<S12>/Gain2' : Eliminated nontunable gain of 1
//  Block '<S12>/Gain5' : Eliminated nontunable gain of 1
//  Block '<S12>/Gain7' : Eliminated nontunable gain of 1
//  Block '<S12>/Gain9' : Eliminated nontunable gain of 1
//  Block '<S18>/Manual Switch' : Eliminated due to constant selection input
//  Block '<S14>/Data Type Conversion1' : Eliminate redundant data type conversion
//  Block '<S2>/Cast' : Eliminate redundant data type conversion
//  Block '<S2>/Cast To Boolean1' : Eliminate redundant data type conversion
//  Block '<S2>/Cast To Boolean2' : Eliminate redundant data type conversion
//  Block '<S2>/Cast To Single' : Eliminate redundant data type conversion
//  Block '<S2>/Cast To Single1' : Eliminate redundant data type conversion
//  Block '<S2>/Cast To Single2' : Eliminate redundant data type conversion
//  Block '<S2>/Cast To Single3' : Eliminate redundant data type conversion
//  Block '<S2>/Cast1' : Eliminate redundant data type conversion


//-
//  The generated code includes comments that allow you to trace directly
//  back to the appropriate location in the model.  The basic format
//  is <system>/block_name, where system is the system number (uniquely
//  assigned by Simulink) and block_name is the name of the block.
//
//  Use the MATLAB hilite_system command to trace the generated code back
//  to the model.  For example,
//
//  hilite_system('<S3>')    - opens system 3
//  hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
//
//  Here is the system hierarchy for this model
//
//  '<Root>' : 'ground_test_EMF'
//  '<S1>'   : 'ground_test_EMF/EMF CLAWS'
//  '<S2>'   : 'ground_test_EMF/To VMS Data'
//  '<S3>'   : 'ground_test_EMF/Turn on FB Upon takeoff'
//  '<S4>'   : 'ground_test_EMF/command selection'
//  '<S5>'   : 'ground_test_EMF/determine arm and mode selection'
//  '<S6>'   : 'ground_test_EMF/state filtering'
//  '<S7>'   : 'ground_test_EMF/EMF CLAWS/ACAH Cmds & Spd Hold'
//  '<S8>'   : 'ground_test_EMF/EMF CLAWS/ACAH EMF'
//  '<S9>'   : 'ground_test_EMF/EMF CLAWS/ACAH Cmds & Spd Hold/Enable Speed Hold'
//  '<S10>'  : 'ground_test_EMF/EMF CLAWS/ACAH Cmds & Spd Hold/Forward Speed Hold'
//  '<S11>'  : 'ground_test_EMF/EMF CLAWS/ACAH Cmds & Spd Hold/Sideways Speed Hold'
//  '<S12>'  : 'ground_test_EMF/EMF CLAWS/ACAH EMF/Inner Loop - ACAH'
//  '<S13>'  : 'ground_test_EMF/EMF CLAWS/ACAH EMF/OnGroundController'
//  '<S14>'  : 'ground_test_EMF/EMF CLAWS/ACAH EMF/PWM to Linear Model Inputs'
//  '<S15>'  : 'ground_test_EMF/EMF CLAWS/ACAH EMF/Subsystem'
//  '<S16>'  : 'ground_test_EMF/EMF CLAWS/ACAH EMF/remap'
//  '<S17>'  : 'ground_test_EMF/EMF CLAWS/ACAH EMF/Inner Loop - ACAH/Heave-rate Compensation'
//  '<S18>'  : 'ground_test_EMF/EMF CLAWS/ACAH EMF/Inner Loop - ACAH/Pitch Compensation'
//  '<S19>'  : 'ground_test_EMF/EMF CLAWS/ACAH EMF/Inner Loop - ACAH/Roll Compensation'
//  '<S20>'  : 'ground_test_EMF/EMF CLAWS/ACAH EMF/Inner Loop - ACAH/Yaw-rate Compensation'
//  '<S21>'  : 'ground_test_EMF/EMF CLAWS/ACAH EMF/Inner Loop - ACAH/[Heave] Cmd Filter // Inv Model'
//  '<S22>'  : 'ground_test_EMF/EMF CLAWS/ACAH EMF/Inner Loop - ACAH/[Pitch] Cmd Filter // Inv Model'
//  '<S23>'  : 'ground_test_EMF/EMF CLAWS/ACAH EMF/Inner Loop - ACAH/[Roll] Cmd Filter // Inv Model'
//  '<S24>'  : 'ground_test_EMF/EMF CLAWS/ACAH EMF/Inner Loop - ACAH/[Yaw] Cmd Filter // Inv Model'
//  '<S25>'  : 'ground_test_EMF/EMF CLAWS/ACAH EMF/Inner Loop - ACAH/Heave-rate Compensation/Discrete Derivative'
//  '<S26>'  : 'ground_test_EMF/EMF CLAWS/ACAH EMF/Inner Loop - ACAH/Pitch Compensation/Radians to Degrees'
//  '<S27>'  : 'ground_test_EMF/EMF CLAWS/ACAH EMF/Inner Loop - ACAH/Pitch Compensation/Radians to Degrees1'
//  '<S28>'  : 'ground_test_EMF/EMF CLAWS/ACAH EMF/Inner Loop - ACAH/Pitch Compensation/Radians to Degrees2'
//  '<S29>'  : 'ground_test_EMF/EMF CLAWS/ACAH EMF/Inner Loop - ACAH/Pitch Compensation/Radians to Degrees3'
//  '<S30>'  : 'ground_test_EMF/EMF CLAWS/ACAH EMF/Inner Loop - ACAH/Roll Compensation/Radians to Degrees'
//  '<S31>'  : 'ground_test_EMF/EMF CLAWS/ACAH EMF/Inner Loop - ACAH/Roll Compensation/Radians to Degrees1'
//  '<S32>'  : 'ground_test_EMF/EMF CLAWS/ACAH EMF/Inner Loop - ACAH/Yaw-rate Compensation/Discrete Derivative'
//  '<S33>'  : 'ground_test_EMF/EMF CLAWS/ACAH EMF/OnGroundController/Get ACAH Commands1'
//  '<S34>'  : 'ground_test_EMF/EMF CLAWS/ACAH EMF/OnGroundController/OL rotor speeds from throttle'
//  '<S35>'  : 'ground_test_EMF/EMF CLAWS/ACAH EMF/OnGroundController/remap'
//  '<S36>'  : 'ground_test_EMF/EMF CLAWS/ACAH EMF/OnGroundController/Get ACAH Commands1/remap throttle to RPM'
//  '<S37>'  : 'ground_test_EMF/EMF CLAWS/ACAH EMF/PWM to Linear Model Inputs/remap1'
//  '<S38>'  : 'ground_test_EMF/Turn on FB Upon takeoff/D Latch1'
//  '<S39>'  : 'ground_test_EMF/Turn on FB Upon takeoff/D Latch1/D Latch'
//  '<S40>'  : 'ground_test_EMF/command selection/e-stop'
//  '<S41>'  : 'ground_test_EMF/command selection/mode_norm'
//  '<S42>'  : 'ground_test_EMF/command selection/pitch_norm_deadband'
//  '<S43>'  : 'ground_test_EMF/command selection/roll_norm_deadband'
//  '<S44>'  : 'ground_test_EMF/command selection/throttle_norm'
//  '<S45>'  : 'ground_test_EMF/command selection/yaw_norm_deadband'
//  '<S46>'  : 'ground_test_EMF/command selection/e-stop/remap'
//  '<S47>'  : 'ground_test_EMF/command selection/mode_norm/remap'
//  '<S48>'  : 'ground_test_EMF/command selection/pitch_norm_deadband/remap_with_deadband'
//  '<S49>'  : 'ground_test_EMF/command selection/roll_norm_deadband/remap_with_deadband'
//  '<S50>'  : 'ground_test_EMF/command selection/throttle_norm/remap'
//  '<S51>'  : 'ground_test_EMF/command selection/yaw_norm_deadband/remap_with_deadband'
//  '<S52>'  : 'ground_test_EMF/determine arm and mode selection/Compare To Constant1'


//-
//  Requirements for '<Root>': ground_test_EMF


#endif                                 // autocode_h_

//
// File trailer for generated code.
//
// [EOF]
//
