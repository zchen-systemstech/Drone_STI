function [InitSensors] = InitializeSensorModel(fmu_version)
% =========================================================================
% function: InitalizeSensorModel 
% Author: Ariel Walter, Ph.D. - Reisident Engineer
%         email: awalter@systemstech.com
%
% Copyright (c) Systems Technology, Inc.
% =========================================================================
%     
% -------------------------------------------------------------------------
% REVISIONS:
% 2026.27.02 (A. Walter) - Initial
% -------------------------------------------------------------------------

% Setup Paths to Matlab functions used in sim
addpath('./SensorScripts')

InitSensors.Delay = 0.1;

% % Accel
InitSensors.Imu.Accel.scale_factor = eye(3);
InitSensors.Imu.Accel.bias_mps2 = [0 0 0]';
InitSensors.Imu.Accel.noise_mps2 = 0.0785 * ones(3, 1);
InitSensors.Imu.Accel.upper_limit_mps2 = 156.9064 * ones(3, 1);
InitSensors.Imu.Accel.lower_limit_mps2 = -InitSensors.Imu.Accel.upper_limit_mps2;
% % Gyro
InitSensors.Imu.Gyro.scale_factor = eye(3);
InitSensors.Imu.Gyro.bias_radps = [0 0 0]';
% % G-sensitivity in rad/s per m/s/s
InitSensors.Imu.Gyro.accel_sens_radps = [0 0 0]';  
InitSensors.Imu.Gyro.noise_radps = deg2rad(0.1) * ones(3, 1);
InitSensors.Imu.Gyro.upper_limit_radps = deg2rad(2000) * ones(3, 1);
InitSensors.Imu.Gyro.lower_limit_radps = -InitSensors.Imu.Gyro.upper_limit_radps;
% % Magnetometer
InitSensors.Imu.Mag.scale_factor = eye(3);
InitSensors.Imu.Mag.bias_ut = [0 0 0]';
InitSensors.Imu.Mag.noise_ut =  0.6 * ones(3, 1);
InitSensors.Imu.Mag.upper_limit_ut =  4800 * ones(3, 1);
InitSensors.Imu.Mag.lower_limit_ut = -InitSensors.Imu.Mag.upper_limit_ut;
% % GNSS model
InitSensors.Gnss.sample_rate_hz = 5;
InitSensors.Gnss.fix = 3; % 3D fix
InitSensors.Gnss.num_satellites = 16;
InitSensors.Gnss.horz_accuracy_m = 1.5;
InitSensors.Gnss.vert_accuracy_m = 5.5;
InitSensors.Gnss.vel_accuracy_mps = 0.05;
InitSensors.Gnss.track_accuracy_rad = deg2rad(2);
InitSensors.Gnss.hdop = 0.7;
InitSensors.Gnss.vdop = 0.7;
% % Air data model
% % Static pressure
% Aircraft.Sensors.PitotStaticInstalled = 0;
% Aircraft.Sensors.StaticPres.scale_factor = 1;
% Aircraft.Sensors.StaticPres.bias_pa = 0;
% Aircraft.Sensors.StaticPres.upper_limit_pa = 120000;
% Aircraft.Sensors.StaticPres.lower_limit_pa = 70000;
% % 1% of the full-scale range
% Aircraft.Sensors.StaticPres.noise_pa = 0.01 * (Aircraft.Sensors.StaticPres.upper_limit_pa - Aircraft.Sensors.StaticPres.lower_limit_pa);
% % Differential pressure
% Aircraft.Sensors.DiffPres.scale_factor = 1;
% Aircraft.Sensors.DiffPres.bias_pa = 0;
% Aircraft.Sensors.DiffPres.upper_limit_pa = 1000;
% Aircraft.Sensors.DiffPres.lower_limit_pa = 0;
% % 2% of the full-scale range
% Aircraft.Sensors.DiffPres.noise_pa =  0.02 * (Aircraft.Sensors.DiffPres.upper_limit_pa - Aircraft.Sensors.DiffPres.lower_limit_pa);