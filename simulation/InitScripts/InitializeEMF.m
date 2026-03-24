function [EMF] = InitializeEMF(AircraftModel, trimSpeed)
% =========================================================================
% function: InitializeEMF()
% Author: Dakota Musso, Ph.D. - Senior Research Engineer
%         email: dmusso@systemstech.com
%
% Copyright (c) Systems Technology, Inc.
% =========================================================================
%     
% -------------------------------------------------------------------------
% REVISIONS:
% 2025.17.04 (D. Musso) - Initial
% 2025.30.10 (A. Walter) - Modified to work with Johnny RMAC model
% -------------------------------------------------------------------------

% Outputs

% =========================================================================
% Model trim points
% -------------------------------------------------------------------------
EMF.VTAB = AircraftModel.TrimSpeeds; % Vector of airspeeds for scheduling

% =========================================================================
% Max Commands 
% -------------------------------------------------------------------------
EMF.MaxCmd.phi_rad = 30*pi/180;
EMF.MaxCmd.theta_rad = 30*pi/180;
EMF.MaxCmd.w_mps = -3; 
EMF.MaxCmd.r_rps = 20*pi/180;
EMF.MaxCmd.wdot = 5;
EMF.MaxCmd.pdot = 30;
EMF.MaxCmd.qdot = 30;
EMF.MaxCmd.rdot = 5;

% --------------
% CLAW state IC - Set to zero for linear model
% --------------
EMF.w0 = interp1(EMF.VTAB, AircraftModel.TrimStates(9,:), trimSpeed)*0;
EMF.p0 = interp1(EMF.VTAB, AircraftModel.TrimStates(10,:), trimSpeed)*0;
EMF.q0 = interp1(EMF.VTAB, AircraftModel.TrimStates(11,:), trimSpeed)*0;
EMF.r0 = interp1(EMF.VTAB, AircraftModel.TrimStates(12,:), trimSpeed)*0;
EMF.phi0 = round(interp1(EMF.VTAB, AircraftModel.TrimStates(4,:), trimSpeed),6)*0; %Linear Model
EMF.tht0 = round(interp1(EMF.VTAB, AircraftModel.TrimStates(5,:), trimSpeed),6)*0; %Linear Model

% --------
% General
% --------
EMF.g = 32.174; % ft/s^2
%EMF.tauf = 0.01; % General time delay time constant to synchronize trackin error and vehicle dymamics (seconds)
EMF.RollDelay = 0.01;
EMF.PitchDelay = 0.01;
EMF.HeaveDelay = 0.01;
EMF.YawDelay = 0.01;

% -----------------
% ACAH Roll
% -----------------
% : Command Filter
EMF.wnRoll  = 4; % rad/s
EMF.zetaRoll = 0.7; % damping ratio

% -----------------
% ACAH Pitch
% -----------------
% : Command Filter
EMF.wnPitch  = 3; % rad/s
EMF.zetaPitch = 0.7; % damping ratio

% -----------------
% ACAH heave/yaw
% -----------------
% : Command Filter
EMF.wTau = 0.18;
EMF.rTau = 0.18;

% -----------------
% TRC outer loop
% -----------------
% : Command Filter
EMF.vzTau = 0.4;
EMF.vxTau = 0.4;

% ----------------
% Control Mixing
% ----------------
%Based on un-weighted pseudo inverse of B matrix for each flight speed 
EMF.Mixer = AircraftModel.Mixer;

% ============================================
% Speed scheduled parameters for inverse model
% --------------------------------------------
for ii = 1:length(EMF.VTAB)

    % Get the linear model
    A = AircraftModel.WithMixer{ii}.A;
    B = AircraftModel.WithMixer{ii}.B;
    
    % ----------------------
    % Stability Derivatives
    % ----------------------
    EMF.Lp(ii) = A(10,10);
    EMF.Lv(ii) = A(10,8);
    EMF.Yv(ii) = A(8,8);
    EMF.Mq(ii) = A(11,11);
    EMF.Mu(ii) = A(11,7);
    EMF.Xu(ii) = A(7,7);
    EMF.Nr(ii) = A(12,12);
    EMF.Zw(ii) = A(9,9); 
    EMF.Xtht(ii) = A(7,5);
    EMF.Ztht(ii) = A(9,5);

    % --------------------
    % Control Derivatives
    % --------------------
    EMF.Llat(ii) = B(10,2);
    EMF.Mlon(ii) = B(11,3);
    EMF.Zcol(ii) = B(9,1);
    EMF.Nped(ii) = B(12,4);

    EMF.Nlat(ii) = B(12,2);
    EMF.Lped(ii) = B(10,4);
    EMF.Zlon(ii) = B(9,3);
    EMF.Mcol(ii) = B(11,1);

    EMF.Xcol(ii) = B(7,3);
end

% --------------
% Initailize for Tracking Response (integral anti-windup)
% --------------
EMF.TR.Enable_TR = 1;
EMF.TR.Ktr_Col = 0.3; 
EMF.TR.Ktr_Lat = 3;
EMF.TR.Ktr_Lon = 0.5;
EMF.TR.Ktr_Ped = 1;

% --------------
% ACAH Gains
% --------------
MixerGain(1) = mean(abs(AircraftModel.Mixer(:,1,1)));
MixerGain(2) = mean(abs(AircraftModel.Mixer(:,2,1)));
MixerGain(3) = mean(abs(AircraftModel.Mixer(:,3,1)));
MixerGain(4) = mean(abs(AircraftModel.Mixer(:,4,1)));
MaxOm_rps = AircraftModel.MaxOmegaLimit(1);
EMF.ACAH.RollP = 15*MaxOm_rps/1000/MixerGain(2);
EMF.ACAH.RollI = EMF.ACAH.RollP*0.5;
EMF.ACAH.RollD = 30*MaxOm_rps/1000/MixerGain(2);
EMF.ACAH.PitchP = 15*MaxOm_rps/1000/MixerGain(3);
EMF.ACAH.PitchI = EMF.ACAH.PitchP*0.5;
EMF.ACAH.PitchD = 30*MaxOm_rps/1000/MixerGain(3);
EMF.ACAH.YawP = 30*MaxOm_rps/1000/MixerGain(4);
EMF.ACAH.YawI = 15*MaxOm_rps/1000/MixerGain(4);

% --------------
% RCHH Gains 
% --------------
EMF.RCHH.P = 3;
EMF.RCHH.I = 1.5;

end