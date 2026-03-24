clear all

% --------------
%Initalize Paths
% --------------
addpath('.\spaaro\simulation')
setup %sparro setup needed to get paths all setup for Boulder Hardware Model
%clear all
addpath ACAH
addpath spaaro
addpath(genpath('.\spaaro\simulation\aircraft'));
addpath(genpath('.\spaaro\simulation\data'));
addpath(genpath('.\spaaro\simulation\matlab'));
addpath(genpath('.\spaaro\simulation\models'));
addpath(genpath('.\spaaro\simulation\vms'));

% --------------
%Initalize Controller
% --------------
modelpath = ['.\JohnnyRMACLinear_UpdatedInertia.mat'];
trimSpeed = 0; % m/s
[EMF, aircraftIC] = setupEMF(modelpath, trimSpeed);

% --------------
% Load Hover Linear Model
% States = [x y z phi theta psi u v w p q r]
% Outputs = [phi theta psi u v w p q r Omegas udot vdot wdot pdot qdot rdot]
% Inputs = [dcol dlat dlon dped]
% --------------
tmp = load(modelpath);
HoverModel.A = tmp.BareAirframeSys{1}.A(:,:);
HoverModel.A(12,8) = 0; % Zero out Nv - likely due to wonky drag modeling but need to check
HoverModel.B = tmp.BareAirframeSys{1}.B(:,:); % Includes pseudo inverse
% Ouputs: phi,theta,psi,u,v,w,p,q,r,Omegas,pdot,qdot,rdot,udot,vdot,wdot
HoverModel.C = [tmp.BareAirframeSys{1}.C(4:12,:); zeros(4,12); tmp.BareAirframeSys{1}.A(7:12,:)];
HoverModel.D = [tmp.BareAirframeSys{1}.D(4:12,:); eye(4); tmp.BareAirframeSys{1}.B(7:12,:)];
EMF.Mixer = tmp.Mixer(:,:,1); %Just Hover mixer


% --------------
% Initalize Environment for Boulder Model
% --------------
Env.terrain_alt_wgs84 = 0; %Sea Level
Env.wmm_nt = 1e4*[2.2479; 0.3187; 4.3848];

% --------------
% Initalize Conditions
% --------------
InitCond.lat_rad = 0.6229;
InitCond.lon_rad = -1.8491;
InitCond.ze_m = -100; %Inital Altitude
InitCond.phi_rad = interp1(EMF.VTAB, tmp.x_trim(4,:), trimSpeed);
InitCond.theta_rad = interp1(EMF.VTAB, tmp.x_trim(5,:), trimSpeed);
InitCond.psi_rad = interp1(EMF.VTAB, tmp.x_trim(5,:), trimSpeed);
InitCond.u_mps = interp1(EMF.VTAB, tmp.x_trim(6,:), trimSpeed);
InitCond.v_mps = interp1(EMF.VTAB, tmp.x_trim(7,:), trimSpeed);
InitCond.w_mps = interp1(EMF.VTAB, tmp.x_trim(8,:), trimSpeed);
InitCond.Omega1_rps = interp1(EMF.VTAB, tmp.u_trim(1,:), trimSpeed);
InitCond.Omega2_rps = interp1(EMF.VTAB, tmp.u_trim(2,:), trimSpeed);
InitCond.Omega3_rps = interp1(EMF.VTAB, tmp.u_trim(3,:), trimSpeed);
InitCond.Omega4_rps = interp1(EMF.VTAB, tmp.u_trim(4,:), trimSpeed);
InitCond.IdleOmega_rps = 1750*pi/30;
eul_0 = [InitCond.phi_rad; InitCond.theta_rad; InitCond.psi_rad]; % Used to initialize Boulder Body to Earth Transform
eul_statename = 'eul_statename';

InitCond.euler_rad = eul_0; %Used in Boulder Nav Filter Model, zeroed out for linear model

% --------------
% Initailize Sensors
% Values copied from Boulder setup.m initalization
% --------------
BoulderInit = load('BoulderSensorInit.mat');
Aircraft.Sensors = BoulderInit.Aircraft.Sensors;

% --------------
% Initailize for PWM signal
% --------------
Kv = 1750; % Motor Constant, RPM/V
MaxOm_rps = Kv*25*pi/30*0.81;
MinOm_rps = 0;
MaxPWM_ms = 2000;
MinPWM_ms = 1000;

% --------------
% Initailize for Tracking Response (integral anti-windup)
% --------------
Enable_TR = 1;
Ktr_Col = 0.3; 
Ktr_Lat = 3;
Ktr_Lon = 0.5;
Ktr_Ped = 1;

% --------------
% ACAH Gains - Updated to match PID rate feedback gains as of 1/14/26
% --------------
MixerGain(1) = mean(abs(HoverModel.D(10:13,1)));
MixerGain(2) = mean(abs(HoverModel.D(10:13,2)));
MixerGain(3) = mean(abs(HoverModel.D(10:13,3)));
MixerGain(4) = mean(abs(HoverModel.D(10:13,4)));
EMF.ACAH.RollP = 15*MaxOm_rps/1000/MixerGain(2);
EMF.ACAH.RollI = EMF.ACAH.RollP*0.1;
EMF.ACAH.RollD = 30*MaxOm_rps/1000/MixerGain(2);
EMF.ACAH.PitchP = 15*MaxOm_rps/1000/MixerGain(3);
EMF.ACAH.PitchI = EMF.ACAH.PitchP*0.1;
EMF.ACAH.PitchD = 30*MaxOm_rps/1000/MixerGain(3);
EMF.ACAH.YawP = 30*MaxOm_rps/1000/MixerGain(4);
EMF.ACAH.YawI = 15*MaxOm_rps/1000/MixerGain(4);

% --------------
% RCHH Gains 
% --------------
EMF.RCHH.P = 3;
EMF.RCHH.I = 1.5;