//
// File: autocode.h
//
// Code generated for Simulink model 'ground_test_EMF_new'.
//
// Model version                  : 8.117
// Simulink Coder version         : 24.1 (R2024a) 19-Nov-2023
// C/C++ source code generated on : Tue Mar 24 12:53:50 2026
//
#ifndef autocode_h_
#define autocode_h_
#include "rtwtypes.h"
#include "global_defs.h"

// Class declaration for model ground_test_EMF_new
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
            real_T DiscreteTimeIntegrator_DSTATE_o;// '<S23>/Discrete-Time Integrator' 
            real_T DiscreteTimeIntegrator1_DSTATE;// '<S23>/Discrete-Time Integrator1' 
            real_T Delay_DSTATE;       // '<S12>/Delay'
            real_T Delay1_DSTATE;      // '<S12>/Delay1'
            real_T DiscreteTimeIntegrator_DSTATE_n;// '<S19>/Discrete-Time Integrator' 
            real_T DiscreteTimeIntegrator1_DSTAT_p;// '<S22>/Discrete-Time Integrator1' 
            real_T DiscreteTimeIntegrator_DSTATE_m;// '<S22>/Discrete-Time Integrator' 
            real_T Delay2_DSTATE;      // '<S12>/Delay2'
            real_T Delay3_DSTATE;      // '<S12>/Delay3'
            real_T DiscreteTimeIntegrator_DSTATE_p;// '<S18>/Discrete-Time Integrator' 
            real_T DiscreteTimeIntegrator_DSTATE_a;// '<S20>/Discrete-Time Integrator' 
            real_T UD_DSTATE_k;        // '<S30>/UD'
            real_T DiscreteTimeIntegrator1_DSTAT_k;// '<S20>/Discrete-Time Integrator1' 
            real32_T DiscreteTimeIntegrator_DSTATE_l;// '<S21>/Discrete-Time Integrator' 
            real32_T Delay4_DSTATE;    // '<S12>/Delay4'
            real32_T DiscreteTimeIntegrator_DSTATE_i;// '<S11>/Discrete-Time Integrator' 
            real32_T DiscreteTimeIntegrator_DSTATE_g;// '<S10>/Discrete-Time Integrator' 
            real32_T DiscreteTimeIntegrator_DSTAT_ax;// '<S24>/Discrete-Time Integrator' 
            real32_T DiscreteTimeIntegrator2_DSTATE;// '<S20>/Discrete-Time Integrator2' 
            real32_T Delay5_DSTATE;    // '<S12>/Delay5'
            uint32_T m_bpIndex;        // '<S17>/1-D Lookup Table1'
            uint32_T m_bpIndex_b;      // '<S18>/1-D Lookup Table1'
            uint32_T m_bpIndex_p;      // '<S19>/1-D Lookup Table1'
            uint32_T m_bpIndex_g;      // '<S20>/1-D Lookup Table1'
            uint32_T m_bpIndex_h;      // '<S21>/1-D Lookup Table'
            uint32_T m_bpIndex_d;      // '<S21>/1-D Lookup Table1'
            uint32_T m_bpIndex_o;      // '<S22>/1-D Lookup Table'
            uint32_T m_bpIndex_i;      // '<S22>/1-D Lookup Table1'
            uint32_T m_bpIndex_l;      // '<S23>/1-D Lookup Table'
            uint32_T m_bpIndex_iy;     // '<S23>/1-D Lookup Table2'
            uint32_T m_bpIndex_iq;     // '<S24>/1-D Lookup Table1'
            uint32_T m_bpIndex_g0;     // '<S24>/1-D Lookup Table2'
            struct {
                uint_T D:1;            // '<S47>/D'
            } bitsForTID0;

            int8_T DiscreteTimeIntegrator_PrevRese;// '<S11>/Discrete-Time Integrator' 
            int8_T DiscreteTimeIntegrator_PrevRe_i;// '<S10>/Discrete-Time Integrator' 
        };

        // Invariant block signals (default storage)
        struct ConstBlockIO {
            real_T uDLookupTable1;     // '<S17>/1-D Lookup Table1'
            real_T Sign;               // '<S17>/Sign'
            real_T uDLookupTable1_o;   // '<S18>/1-D Lookup Table1'
            real_T Sign_a;             // '<S18>/Sign'
            real_T uDLookupTable1_d;   // '<S19>/1-D Lookup Table1'
            real_T Sign_l;             // '<S19>/Sign'
            real_T uDLookupTable1_ox;  // '<S20>/1-D Lookup Table1'
            real_T Sign_o;             // '<S20>/Sign'
            real_T uDLookupTable;      // '<S22>/1-D Lookup Table'
            real_T uDLookupTable1_f;   // '<S22>/1-D Lookup Table1'
            real_T Square;             // '<S22>/Square'
            real_T Square1;            // '<S22>/Square1'
            real_T uDLookupTable_n;    // '<S23>/1-D Lookup Table'
            real_T uDLookupTable2;     // '<S23>/1-D Lookup Table2'
            real_T Gain5;              // '<S23>/Gain5'
            real_T Square_h;           // '<S23>/Square'
            real_T Square1_o;          // '<S23>/Square1'
            real32_T uDLookupTable_i;  // '<S21>/1-D Lookup Table'
            real32_T uDLookupTable1_p; // '<S21>/1-D Lookup Table1'
            real32_T uDLookupTable1_pb;// '<S24>/1-D Lookup Table1'
            real32_T uDLookupTable2_a; // '<S24>/1-D Lookup Table2'
            boolean_T DataTypeConversion2;// '<S3>/Data Type Conversion2'
        };

        // Constant parameters (default storage)
        struct ConstParam {
            // Expression: inv(EMF.Mixer(:,:,1))
            //  Referenced by: '<S7>/Constant17'

            real_T Constant17_Value[16];

            // Expression: EMF.Mixer(:,:,1)
            //  Referenced by: '<S13>/Constant'

            real_T Constant_Value_b[16];

            // Pooled Parameter (Expression: AircraftModel.MinOmegaLimit)
            //  Referenced by:
            //    '<S8>/Constant11'
            //    '<S16>/Constant1'

            real_T pooled13[4];

            // Pooled Parameter (Expression: AircraftModel.MaxOmegaLimit)
            //  Referenced by:
            //    '<S8>/Constant2'
            //    '<S16>/Constant2'

            real_T pooled14[4];

            // Pooled Parameter (Expression: AircraftModel.MinPWMLimit*ones(1,4))
            //  Referenced by:
            //    '<S8>/Constant9'
            //    '<S16>/Constant3'

            real_T pooled15[4];

            // Pooled Parameter (Mixed Expressions)
            //  Referenced by:
            //    '<S8>/Constant1'
            //    '<S16>/Constant4'

            real_T pooled16[4];

            // Computed Parameter: Constant6_Value
            //  Referenced by: '<Root>/Constant6'

            real32_T Constant6_Value[8];
        };

        // model initialize function
        void initialize();

        // model step function
        void Run(VmsData *arg_VmsData, TelemData *arg_Telemetry_Data,
                 StateEstData *arg_StateEstData, SensorData *arg_Sensor_Data,
                 SysData *arg_System_Data);

        // Constructor
        Autocode();

        // Destructor
        ~Autocode();

        // private data and function members
      private:
        // Block states
        D_Work rtDWork;

        // private member function(s) for subsystem '<S16>/remap'
        static void remap(const real_T rtu_norm_in[4], const real_T rtu_in_min[4],
                          const real_T rtu_in_max[4], const real_T rtu_out_min[4],
                          const real_T rtu_out_max[4], real_T rty_raw_out[4]);

        // private member function(s) for subsystem '<S48>/remap'
        static void remap_m(real32_T rtu_raw_in, real32_T rtu_in_min, real32_T
                            rtu_in_max, real32_T rtu_out_min, real32_T
                            rtu_out_max, real32_T *rty_norm_out);

        // private member function(s) for subsystem '<S50>/remap_with_deadband'
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
//  Block '<S26>/Gain' : Unused code path elimination
//  Block '<S27>/Gain' : Unused code path elimination
//  Block '<S18>/q' : Unused code path elimination
//  Block '<S18>/theta' : Unused code path elimination
//  Block '<S19>/Phi' : Unused code path elimination
//  Block '<S28>/Gain' : Unused code path elimination
//  Block '<S29>/Gain' : Unused code path elimination
//  Block '<S19>/roll rate' : Unused code path elimination
//  Block '<S30>/Data Type Duplicate' : Unused code path elimination
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
//  Block '<S33>/Compare' : Unused code path elimination
//  Block '<S33>/Constant' : Unused code path elimination
//  Block '<S34>/Compare' : Unused code path elimination
//  Block '<S34>/Constant' : Unused code path elimination
//  Block '<S35>/Compare' : Unused code path elimination
//  Block '<S35>/Constant' : Unused code path elimination
//  Block '<S36>/Compare' : Unused code path elimination
//  Block '<S36>/Constant' : Unused code path elimination
//  Block '<S37>/Compare' : Unused code path elimination
//  Block '<S37>/Constant' : Unused code path elimination
//  Block '<S38>/Compare' : Unused code path elimination
//  Block '<S38>/Constant' : Unused code path elimination
//  Block '<S39>/Compare' : Unused code path elimination
//  Block '<S39>/Constant' : Unused code path elimination
//  Block '<S40>/Compare' : Unused code path elimination
//  Block '<S40>/Constant' : Unused code path elimination
//  Block '<S15>/Logical Operator1' : Unused code path elimination
//  Block '<S15>/Logical Operator2' : Unused code path elimination
//  Block '<S15>/Logical Operator3' : Unused code path elimination
//  Block '<S15>/Logical Operator4' : Unused code path elimination
//  Block '<S43>/Compare' : Unused code path elimination
//  Block '<S43>/Constant' : Unused code path elimination
//  Block '<S44>/Compare' : Unused code path elimination
//  Block '<S44>/Constant' : Unused code path elimination
//  Block '<S41>/Logical Operator4' : Unused code path elimination
//  Block '<S47>/Logic' : Unused code path elimination
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
//  Block '<S8>/Data Type Conversion1' : Eliminate redundant data type conversion
//  Block '<S2>/Cast' : Eliminate redundant data type conversion
//  Block '<S2>/Cast To Boolean1' : Eliminate redundant data type conversion
//  Block '<S2>/Cast To Boolean2' : Eliminate redundant data type conversion
//  Block '<S2>/Cast To Single' : Eliminate redundant data type conversion
//  Block '<S2>/Cast To Single1' : Eliminate redundant data type conversion
//  Block '<S2>/Cast To Single2' : Eliminate redundant data type conversion
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
//  '<Root>' : 'ground_test_EMF_new'
//  '<S1>'   : 'ground_test_EMF_new/EMF CLAWS'
//  '<S2>'   : 'ground_test_EMF_new/To VMS Data'
//  '<S3>'   : 'ground_test_EMF_new/Turn on FB Upon takeoff'
//  '<S4>'   : 'ground_test_EMF_new/command selection'
//  '<S5>'   : 'ground_test_EMF_new/determine arm and mode selection'
//  '<S6>'   : 'ground_test_EMF_new/EMF CLAWS/ACAH Cmds & Spd Hold'
//  '<S7>'   : 'ground_test_EMF_new/EMF CLAWS/ACAH EMF1'
//  '<S8>'   : 'ground_test_EMF_new/EMF CLAWS/PWM to Linear Model Inputs'
//  '<S9>'   : 'ground_test_EMF_new/EMF CLAWS/ACAH Cmds & Spd Hold/Enable Speed Hold'
//  '<S10>'  : 'ground_test_EMF_new/EMF CLAWS/ACAH Cmds & Spd Hold/Forward Speed Hold'
//  '<S11>'  : 'ground_test_EMF_new/EMF CLAWS/ACAH Cmds & Spd Hold/Sideways Speed Hold'
//  '<S12>'  : 'ground_test_EMF_new/EMF CLAWS/ACAH EMF1/Inner Loop - ACAH'
//  '<S13>'  : 'ground_test_EMF_new/EMF CLAWS/ACAH EMF1/Mixer'
//  '<S14>'  : 'ground_test_EMF_new/EMF CLAWS/ACAH EMF1/OnGroundController'
//  '<S15>'  : 'ground_test_EMF_new/EMF CLAWS/ACAH EMF1/Rate Saturation'
//  '<S16>'  : 'ground_test_EMF_new/EMF CLAWS/ACAH EMF1/Remap Rotor Speeds to PWM'
//  '<S17>'  : 'ground_test_EMF_new/EMF CLAWS/ACAH EMF1/Inner Loop - ACAH/Heave-rate Compensation'
//  '<S18>'  : 'ground_test_EMF_new/EMF CLAWS/ACAH EMF1/Inner Loop - ACAH/Pitch Compensation'
//  '<S19>'  : 'ground_test_EMF_new/EMF CLAWS/ACAH EMF1/Inner Loop - ACAH/Roll Compensation'
//  '<S20>'  : 'ground_test_EMF_new/EMF CLAWS/ACAH EMF1/Inner Loop - ACAH/Yaw-rate Compensation'
//  '<S21>'  : 'ground_test_EMF_new/EMF CLAWS/ACAH EMF1/Inner Loop - ACAH/[Heave] Cmd Filter // Inv Model'
//  '<S22>'  : 'ground_test_EMF_new/EMF CLAWS/ACAH EMF1/Inner Loop - ACAH/[Pitch] Cmd Filter // Inv Model'
//  '<S23>'  : 'ground_test_EMF_new/EMF CLAWS/ACAH EMF1/Inner Loop - ACAH/[Roll] Cmd Filter // Inv Model'
//  '<S24>'  : 'ground_test_EMF_new/EMF CLAWS/ACAH EMF1/Inner Loop - ACAH/[Yaw] Cmd Filter // Inv Model'
//  '<S25>'  : 'ground_test_EMF_new/EMF CLAWS/ACAH EMF1/Inner Loop - ACAH/Heave-rate Compensation/Discrete Derivative'
//  '<S26>'  : 'ground_test_EMF_new/EMF CLAWS/ACAH EMF1/Inner Loop - ACAH/Pitch Compensation/Radians to Degrees'
//  '<S27>'  : 'ground_test_EMF_new/EMF CLAWS/ACAH EMF1/Inner Loop - ACAH/Pitch Compensation/Radians to Degrees1'
//  '<S28>'  : 'ground_test_EMF_new/EMF CLAWS/ACAH EMF1/Inner Loop - ACAH/Roll Compensation/Radians to Degrees'
//  '<S29>'  : 'ground_test_EMF_new/EMF CLAWS/ACAH EMF1/Inner Loop - ACAH/Roll Compensation/Radians to Degrees1'
//  '<S30>'  : 'ground_test_EMF_new/EMF CLAWS/ACAH EMF1/Inner Loop - ACAH/Yaw-rate Compensation/Discrete Derivative'
//  '<S31>'  : 'ground_test_EMF_new/EMF CLAWS/ACAH EMF1/OnGroundController/Get ACAH Commands1'
//  '<S32>'  : 'ground_test_EMF_new/EMF CLAWS/ACAH EMF1/OnGroundController/Get ACAH Commands1/remap throttle to RPM'
//  '<S33>'  : 'ground_test_EMF_new/EMF CLAWS/ACAH EMF1/Rate Saturation/Compare To Constant1'
//  '<S34>'  : 'ground_test_EMF_new/EMF CLAWS/ACAH EMF1/Rate Saturation/Compare To Constant2'
//  '<S35>'  : 'ground_test_EMF_new/EMF CLAWS/ACAH EMF1/Rate Saturation/Compare To Constant3'
//  '<S36>'  : 'ground_test_EMF_new/EMF CLAWS/ACAH EMF1/Rate Saturation/Compare To Constant4'
//  '<S37>'  : 'ground_test_EMF_new/EMF CLAWS/ACAH EMF1/Rate Saturation/Compare To Constant5'
//  '<S38>'  : 'ground_test_EMF_new/EMF CLAWS/ACAH EMF1/Rate Saturation/Compare To Constant6'
//  '<S39>'  : 'ground_test_EMF_new/EMF CLAWS/ACAH EMF1/Rate Saturation/Compare To Constant7'
//  '<S40>'  : 'ground_test_EMF_new/EMF CLAWS/ACAH EMF1/Rate Saturation/Compare To Constant8'
//  '<S41>'  : 'ground_test_EMF_new/EMF CLAWS/ACAH EMF1/Remap Rotor Speeds to PWM/Rotor Speed Saturation'
//  '<S42>'  : 'ground_test_EMF_new/EMF CLAWS/ACAH EMF1/Remap Rotor Speeds to PWM/remap'
//  '<S43>'  : 'ground_test_EMF_new/EMF CLAWS/ACAH EMF1/Remap Rotor Speeds to PWM/Rotor Speed Saturation/Compare To Constant7'
//  '<S44>'  : 'ground_test_EMF_new/EMF CLAWS/ACAH EMF1/Remap Rotor Speeds to PWM/Rotor Speed Saturation/Compare To Constant8'
//  '<S45>'  : 'ground_test_EMF_new/EMF CLAWS/PWM to Linear Model Inputs/remap'
//  '<S46>'  : 'ground_test_EMF_new/Turn on FB Upon takeoff/D Latch1'
//  '<S47>'  : 'ground_test_EMF_new/Turn on FB Upon takeoff/D Latch1/D Latch'
//  '<S48>'  : 'ground_test_EMF_new/command selection/e-stop'
//  '<S49>'  : 'ground_test_EMF_new/command selection/mode_norm'
//  '<S50>'  : 'ground_test_EMF_new/command selection/pitch_norm_deadband'
//  '<S51>'  : 'ground_test_EMF_new/command selection/roll_norm_deadband'
//  '<S52>'  : 'ground_test_EMF_new/command selection/throttle_norm'
//  '<S53>'  : 'ground_test_EMF_new/command selection/yaw_norm_deadband'
//  '<S54>'  : 'ground_test_EMF_new/command selection/e-stop/remap'
//  '<S55>'  : 'ground_test_EMF_new/command selection/mode_norm/remap'
//  '<S56>'  : 'ground_test_EMF_new/command selection/pitch_norm_deadband/remap_with_deadband'
//  '<S57>'  : 'ground_test_EMF_new/command selection/roll_norm_deadband/remap_with_deadband'
//  '<S58>'  : 'ground_test_EMF_new/command selection/throttle_norm/remap'
//  '<S59>'  : 'ground_test_EMF_new/command selection/yaw_norm_deadband/remap_with_deadband'
//  '<S60>'  : 'ground_test_EMF_new/determine arm and mode selection/Compare To Constant1'


//-
//  Requirements for '<Root>': ground_test_EMF_new


#endif                                 // autocode_h_

//
// File trailer for generated code.
//
// [EOF]
//
