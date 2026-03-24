% Script for initalizing Simulink (DeployableEMF.slx) for baseline testing
% of EMF with speed hold controller.

clear all
run('./setup.m')

%Initialize
addpath('./InitScripts')
AircraftModel = InitializeAircraftModel('./aircraft/Johnny_03032026.mat', 'RMAC');
[InitCond] = InitialCondition(AircraftModel, 0);
EMF = InitializeEMF(AircraftModel, 0);

% Switches
EnableInputNoise = 0;
EnableSpeedHold = 0;
EnableRCHH = 0;
EnableFF = 0;

% % --------------
% % Load Hover Linear Model (Mixer)
% % States = [x y z phi theta psi u v w p q r]
% % Outputs = [phi theta psi u v w p q r Omegas udot vdot wdot pdot qdot rdot]
% % Inputs = [dcol dlat dlon dped]
% % --------------
% % modelpath = ['.\aircraft\JohnnyRMACLinear_UpdatedInertia.mat'];
% % tmp = load(modelpath);
% % HoverModel.A = tmp.As(:,:,1);
% % HoverModel.A(12,8) = 0; % Zero out Nv - likely due to wonky drag modeling but need to check
% % HoverModel.B = tmp.Bs(:,:,1); % Includes pseudo inverse
% % HoverModel.C = [tmp.Cs(4:16,:,1); tmp.As(7:12,:,1)]; % Add accelerations to outpus
% % HoverModel.D = [tmp.Ds(4:16,:,1); tmp.Bs(7:12,:,1)];
% % clear tmp
% % 
% % 
% % --------------
% % Initalize Conditions
% % --------------
% % InitCond.IdleOmega_rps = 1750*pi/30; %Saturation Limit of 2x idle
% % 
% % --------------
% % Initailize for PWM signal
% % --------------
% % Kv = 1750; % Motor Constant, RPM/V
% % MaxOm_rps = Kv*22.2*pi/30;
% % MinOm_rps = 0;
% % MaxPWM_ms = 2000;
% % MinPWM_ms = 1000;