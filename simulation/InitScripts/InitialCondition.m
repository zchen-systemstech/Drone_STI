function [InitCond] = InitialCondition(AircraftModel, TrimSpeed)
% =========================================================================
% function: InitalCondition() 
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

Vs = AircraftModel.TrimSpeeds;

% --------------
% Initalize States
% --------------
InitCond.lat_rad = 0.6229;
InitCond.lon_rad = -1.8491;
InitCond.ze_m = -100; %Inital Altitude
InitCond.phi_rad = interp1(Vs, AircraftModel.TrimStates(4,:), TrimSpeed);
InitCond.theta_rad = interp1(Vs, AircraftModel.TrimStates(5,:), TrimSpeed);
InitCond.psi_rad = interp1(Vs, AircraftModel.TrimStates(5,:), TrimSpeed);
InitCond.u_mps = interp1(Vs, AircraftModel.TrimStates(6,:), TrimSpeed);
InitCond.v_mps = interp1(Vs, AircraftModel.TrimStates(7,:), TrimSpeed);
InitCond.w_mps = interp1(Vs, AircraftModel.TrimStates(8,:), TrimSpeed);
InitCond.ze_m = -200;

% --------------
% Initalize Inputs
% --------------
for i = 1:length(AircraftModel.TrimInputs(:,1))
    InitCond.TrimInputs(i) = interp1(Vs, AircraftModel.TrimInputs(i,:), TrimSpeed);
end

%eul_0 = [InitCond.phi_rad; InitCond.theta_rad; InitCond.psi_rad]; % Used to initialize Boulder Body to Earth Transform
%eul_statename = 'eul_statename';

%InitCond.euler_rad = eul_0; %Used in Boulder Nav Filter Model, zeroed out for linear model

end