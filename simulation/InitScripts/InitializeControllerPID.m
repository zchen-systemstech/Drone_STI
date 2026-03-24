

% --------------
%Initalize Paths
% --------------
addpath('.\InitScripts\SensorSim')
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
modelpath = ['./RMACLinearModels/JohnnyRMACLinear_UpdatedInertia.mat'];
load(modelpath)
trimSpeed = 0; % m/s
[EMF, aircraftIC] = setupEMF(modelpath, trimSpeed);

% --------------
% Initalize Environment for Boulder Model
% --------------
Env.terrain_alt_wgs84 = 0; %Sea Level
Env.wmm_nt = 1e4*[2.2479; 0.3187; 4.3848];


% --------------
% Initailize for scaling of PWM signal
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
% ACAH Gains
% --------------
MixerGain(1) = mean(abs(Mixer(:,1)));
MixerGain(2) = mean(abs(Mixer(:,2)));
MixerGain(3) = mean(abs(Mixer(:,3)));
MixerGain(4) = mean(abs(Mixer(:,4)));
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