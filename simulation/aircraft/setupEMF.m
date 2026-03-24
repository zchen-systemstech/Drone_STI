function [EMF, aircraftIC] = setupEMF(modelpath, trimSpeed)
% =========================================================================
% function: setupEMF()
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

% States
% [1]  x_m
% [2]  y_m
% [3]  z_m
% [4]  phi_rad
% [5]  theta_rad
% [6]  psi_rad
% [7]  u_mps
% [8]  v_mps
% [9]  w_mps
% [10] p_rps
% [11] q_rps
% [12] r_rps

% Controls
% [1] dcol
% [2] dlat
% [3] dlon
% [4] dped

% Outputs

% =========================================================================
% Load model
% -------------------------------------------------------------------------
tmp = load(modelpath);
x_trim = tmp.x_trim;
Mixer = tmp.Mixer;
EMF.VTAB = tmp.FFSpeeds; % Vector of airspeeds for scheduling

% =========================================================================
% Max Commands 
% -------------------------------------------------------------------------
EMF.MaxCmd.phi_rad = 90*pi/180;
EMF.MaxCmd.theta_rad = 90*pi/180;
EMF.MaxCmd.w_mps = -3; 
EMF.MaxCmd.r_rps = 300*pi/180;
EMF.MaxCmd.wdot = 5;
EMF.MaxCmd.pdot = 30;
EMF.MaxCmd.qdot = 30;
EMF.MaxCmd.rdot = 5;

% --------------
% CLAW state IC - Set to zero for linear model
% --------------
EMF.w0 = interp1(EMF.VTAB, x_trim(9,:), trimSpeed)*0;
EMF.p0 = interp1(EMF.VTAB, x_trim(10,:), trimSpeed)*0;
EMF.q0 = interp1(EMF.VTAB, x_trim(11,:), trimSpeed)*0;
EMF.r0 = interp1(EMF.VTAB, x_trim(12,:), trimSpeed)*0;
EMF.phi0 = round(interp1(EMF.VTAB, x_trim(4,:), trimSpeed),6)*0; %Linear Model
EMF.tht0 = round(interp1(EMF.VTAB, x_trim(5,:), trimSpeed),6)*0; %Linear Model

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
%EMF.wnRoll  = 6.3; % rad/s
EMF.wnRoll  = 4; % rad/s
EMF.zetaRoll = 0.7071; % damping ratio

% -----------------
% ACAH Pitch
% -----------------
% : Command Filter
%EMF.wnPitch  = 5.4; % rad/s
EMF.wnPitch  = 3; % rad/s
EMF.zetaPitch = 0.7071; % damping ratio

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
EMF.Mixer = Mixer;

% ============================================
% Speed scheduled parameters for inverse model
% --------------------------------------------
for ii = 1:length(EMF.VTAB)

    % Get the linear model
    A = tmp.As(:,:,ii);
    B = tmp.Bs(:,:,ii);
    
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

% % -------------------------------------------------------------------------
% % Grab Aircraft IC while here
% % -------------------------------------------------------------------------
% % States
% aircraftIC.u_fps = interp1(EMF.VTAB, aircraft.y0tab(1,:), trimSpeed);
% aircraftIC.v_fps = interp1(EMF.VTAB, aircraft.y0tab(2,:), trimSpeed);
% aircraftIC.w_fps = interp1(EMF.VTAB, aircraft.y0tab(3,:), trimSpeed);
% aircraftIC.p_rps = interp1(EMF.VTAB, aircraft.y0tab(4,:), trimSpeed);
% aircraftIC.q_rps = interp1(EMF.VTAB, aircraft.y0tab(5,:), trimSpeed);
% aircraftIC.r_rps = interp1(EMF.VTAB, aircraft.y0tab(6,:), trimSpeed);
% aircraftIC.phi_rad     = interp1(EMF.VTAB, aircraft.y0tab(7,:), trimSpeed);
% aircraftIC.theta_rad   = interp1(EMF.VTAB, aircraft.y0tab(8,:), trimSpeed);
% aircraftIC.heading_rad = interp1(EMF.VTAB, aircraft.y0tab(9,:), trimSpeed);
% aircraftIC.north_ft    = interp1(EMF.VTAB, aircraft.y0tab(10,:), trimSpeed);
% aircraftIC.east_ft     = interp1(EMF.VTAB, aircraft.y0tab(11,:), trimSpeed);
% aircraftIC.down_ft     = interp1(EMF.VTAB, aircraft.y0tab(12,:), trimSpeed);
% 
% 
% % Controls
% aircraftIC.dlat0 = interp1(EMF.VTAB, aircraft.u0tab(1,:), trimSpeed);
% aircraftIC.dlon0 = interp1(EMF.VTAB, aircraft.u0tab(2,:), trimSpeed);
% aircraftIC.dcol0 = interp1(EMF.VTAB, aircraft.u0tab(3,:), trimSpeed);
% aircraftIC.dped0 = interp1(EMF.VTAB, aircraft.u0tab(4,:), trimSpeed);
% aircraftIC.daux0 = interp1(EMF.VTAB, aircraft.u0tab(5,:), trimSpeed);
% 
% % States Dot
% aircraftIC.headingDot_rps  = interp1(EMF.VTAB, aircraft.y0tab(9+52,:), trimSpeed);
% aircraftIC.northDot_fps    = interp1(EMF.VTAB, aircraft.y0tab(10+52,:), trimSpeed);
% aircraftIC.eastDot_fps     = interp1(EMF.VTAB, aircraft.y0tab(11+52,:), trimSpeed);
% aircraftIC.downDot_fps     = interp1(EMF.VTAB, aircraft.y0tab(12+52,:), trimSpeed);
% % -------------------------------------------------------------------------

% % State trim lookup and store
% aircraftIC.TAB.u_fps = aircraft.y0tab(1,:);
% aircraftIC.TAB.w_fps = aircraft.y0tab(3,:);
% aircraftIC.TAB.theta_rad = aircraft.y0tab(8,:);
% 
% % Control trim lookup and store
% aircraftIC.TAB.dlat0 = aircraft.u0tab(1,:);
% aircraftIC.TAB.dlon0 = aircraft.u0tab(2,:);
% aircraftIC.TAB.dcol0 = aircraft.u0tab(3,:);
% aircraftIC.TAB.dped0 = aircraft.u0tab(4,:);
% aircraftIC.TAB.daux0 = aircraft.u0tab(5,:);
aircraftIC = [];

end