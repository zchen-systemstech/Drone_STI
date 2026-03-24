%% plot_flight_states.m
% Script to plot key flight states and commands from sys_output log.
% Assumes a struct named "sys_output" exists in the workspace with fields:
%   - sys_time_s
%   - bfs_ins_accel_*, bfs_ins_gyro_*, bfs_ins_*_rad, bfs_ins_*_vel_mps
%   - aux_ins_ned_pos_*
%   - vms_pwm_cmd0-3
%   - vms_aux0-4 (throttle, pitch, roll, yaw, arm mode)

clear;

%% Load data
sys_output = load('1_14_26\malt1_0.mat');

%% Time vector
t = sys_output.sys_time_s;              % [s]
t = t - t(1);                           % start from zero

tstart = 0;
tend = t(end);
idx = (t >= tstart) & (t <= tend);

t = t(idx);
t = t - t(1);

%% Acceleration (body frame, BFS INS)
figure('Name','Acceleration (BFS INS)','NumberTitle','off');
subplot(3,1,1);
plot(t, sys_output.bfs_ins_accel_x_mps2(idx)); grid on;
ylabel('a_x [m/s^2]'); title('BFS INS Acceleration');
subplot(3,1,2);
plot(t, sys_output.bfs_ins_accel_y_mps2(idx)); grid on;
ylabel('a_y [m/s^2]');
subplot(3,1,3);
plot(t, sys_output.bfs_ins_accel_z_mps2(idx)); grid on;
ylabel('a_z [m/s^2]');
xlabel('Time [s]');

%% Angular rate (body frame, BFS INS)
figure('Name','Angular Rates (BFS INS)','NumberTitle','off');
subplot(3,1,1);
plot(t, sys_output.fmu_imu_gyro_x_radps(idx)); grid on;
ylabel('p [rad/s]'); title('BFS INS Angular Rates');
subplot(3,1,2);
plot(t, sys_output.fmu_imu_gyro_y_radps(idx)); grid on;
ylabel('q [rad/s]');
subplot(3,1,3);
plot(t, sys_output.fmu_imu_gyro_z_radps(idx)); grid on;
ylabel('r [rad/s]');
xlabel('Time [s]');


% % compare vms pqr with recorded pqr
% subplot(3,1,1);
% plot(t, sys_output.vms_aux15(idx),t,sys_output.bfs_ins_gyro_x_radps(idx)); grid on;
% ylabel('p [rad/s]'); title('BFS INS Angular Rates');
% subplot(3,1,2);
% plot(t, sys_output.vms_aux16(idx),t,sys_output.bfs_ins_gyro_y_radps(idx)); grid on;
% ylabel('q [rad/s]');
% subplot(3,1,3);
% plot(t, sys_output.vms_aux17(idx),t,sys_output.bfs_ins_gyro_z_radps(idx)); grid on;
% ylabel('r [rad/s]');
% xlabel('Time [s]');

%% Attitude (Euler angles from BFS INS)
roll_deg  = rad2deg(sys_output.bfs_ins_roll_rad(idx));
pitch_deg = rad2deg(sys_output.bfs_ins_pitch_rad(idx));
yaw_deg   = rad2deg(sys_output.bfs_ins_heading_rad(idx));

figure('Name','Attitude (BFS INS)','NumberTitle','off');
subplot(3,1,1);
plot(t, roll_deg); grid on;
ylabel('\phi [deg]'); title('BFS INS Attitude');
subplot(3,1,2);
plot(t, pitch_deg); grid on;
ylabel('\theta [deg]');
subplot(3,1,3);
plot(t, yaw_deg); grid on;
ylabel('\psi [deg]');
xlabel('Time [s]');


%% Velocity (NED components from BFS INS)
figure('Name','Velocity (BFS INS)','NumberTitle','off');
subplot(3,1,1);
plot(t, sys_output.bfs_ins_north_vel_mps(idx)); grid on;
ylabel('V_N [m/s]'); title('BFS INS Velocity (NED)');
subplot(3,1,2);
plot(t, sys_output.bfs_ins_east_vel_mps(idx)); grid on;
ylabel('V_E [m/s]');
subplot(3,1,3);
plot(t, sys_output.bfs_ins_down_vel_mps(idx)); grid on;
ylabel('V_D [m/s]');
xlabel('Time [s]');

%% Position (NED position from AUX INS)
figure('Name','Position (AUX INS NED)','NumberTitle','off');
subplot(3,1,1);
plot(t, sys_output.aux_ins_ned_pos_north_m(idx)); grid on;
ylabel('N [m]'); title('AUX INS Position (NED)');
subplot(3,1,2);
plot(t, sys_output.aux_ins_ned_pos_east_m(idx)); grid on;
ylabel('E [m]');
subplot(3,1,3);
plot(t, sys_output.aux_ins_ned_pos_down_m(idx)); grid on;
ylabel('D [m]');
xlabel('Time [s]');

%% Motor PWM commands (first 4 channels)
figure('Name','Motor PWM Commands','NumberTitle','off');
plot(t, sys_output.vms_pwm_cmd0(idx), ...
     t, sys_output.vms_pwm_cmd1(idx), ...
     t, sys_output.vms_pwm_cmd2(idx), ...
     t, sys_output.vms_pwm_cmd3(idx));
grid on;
xlabel('Time [s]');
ylabel('PWM [µs]');
title('VMS PWM Commands (Motors 1-4)');
legend('PWM 1','PWM 2','PWM 3','PWM 4','Location','best');

%% Command inputs (first 6: throttle, pitch, roll, yaw, arm, control mode)

figure('Name','VMS Command Inputs','NumberTitle','off');
subplot(6,1,1);
plot(t, sys_output.vms_aux10(idx)); grid on;
ylabel('Thr'); title('VMS Commands');
subplot(6,1,2);
plot(t, sys_output.vms_aux11(idx)); grid on;
ylabel('Pitch');
subplot(6,1,3);
plot(t, sys_output.vms_aux12(idx)); grid on;
ylabel('Roll');
subplot(6,1,4);
plot(t, sys_output.vms_aux13(idx)); grid on;
ylabel('Yaw');
subplot(6,1,5);
plot(t, sys_output.vms_aux14(idx)); grid on;
ylabel('Arm'); xlabel('Time [s]');
subplot(6,1,6);
plot(t, sys_output.vms_aux15(idx)); grid on;
ylabel('Control Mode'); xlabel('Time [s]');

%% Link x-axes for easier browsing (optional)
% Grab all axes and link their x-axes
% allAxes = findall(0, 'Type', 'axes');
% linkaxes(allAxes, 'x');
PWM = [sys_output.vms_pwm_cmd0(idx)'; sys_output.vms_pwm_cmd1(idx)'; ...
    sys_output.vms_pwm_cmd2(idx)'; sys_output.vms_pwm_cmd3(idx)'];
ColMixer = [0.7 0.7 0.7 0.7]/norm([0.7 0.7 0.7 0.7],2);
LatMixer = [0.3 0.3 -0.3 -0.3]/norm([0.3 0.3 -0.3 -0.3],2);
LonMixer = [0.3 -0.3 0.3 -0.3]/norm([0.3 -0.3 0.3 -0.3],2);
DirMixer = [-0.3 0.3 0.3 -0.3]/norm([-0.3 0.3 0.3 -0.3],2);
Mixer = [ColMixer',LatMixer',LonMixer',DirMixer']*2;
PWMMixed = inv(Mixer)*PWM;
figure('Name','Motor PWM Commands Mixed','NumberTitle','off');
plot(t, PWMMixed);
grid on;
xlabel('Time [s]');
ylabel('PWM [µs]');
title('VMS PWM Commands (Mixed)');
legend('Collective PWM','Lat PWM','Lon PWM','DirPWM','Location','best');


%%
% figure
% subplot(2,1,1)
% plot(t,sys_output.vms_pwm_cmd0(idx)-1245,t,sys_output.vms_pwm_cmd3(idx)-1245);
% hold on
% plot(t,rad2deg(sys_output.bfs_ins_gyro_z_radps(idx)));
% hold off
% grid on
% xlim([84 107])
% legend('PWM1','PWM4')
% subplot(2,1,2)
% plot(t,sys_output.vms_pwm_cmd1(idx)-1240,t,sys_output.vms_pwm_cmd2(idx)-1240);
% hold on
% plot(t,rad2deg(sys_output.bfs_ins_gyro_z_radps(idx)));
% hold off
% grid on
% xlim([84 107])
% legend('PWM2','PWM3')

%% cmdsACT

figure('Name','PID cmd','NumberTitle','off');
subplot(3,1,1);
plot(t, sys_output.vms_aux0(idx)); grid on;
ylabel('throttle'); title('PID cmd');
subplot(3,1,1);
plot(t, sys_output.vms_aux1(idx)); grid on;
ylabel('roll');
subplot(3,1,2);
plot(t, sys_output.vms_aux2(idx)); grid on;
ylabel('pitch');
subplot(3,1,3);
plot(t, sys_output.vms_aux3(idx)); grid on;
ylabel('yaw');
xlabel('Time [s]');

%% PID signal

% % roll channel
% figure
% subplot(3,1,1);
% plot(t, sys_output.vms_aux16(idx)); grid on;
% ylabel('P roll'); xlabel('Time [s]');
% subplot(3,1,2);
% plot(t, sys_output.vms_aux17(idx)); grid on;
% ylabel('I roll'); xlabel('Time [s]');
% subplot(3,1,3);
% plot(t, sys_output.vms_aux18(idx)); grid on;
% ylabel('D roll'); xlabel('Time [s]');
% 
% % pitch channel
% figure
% subplot(3,1,1);
% plot(t, sys_output.vms_aux19(idx)); grid on;
% ylabel('P pitch'); xlabel('Time [s]');
% subplot(3,1,2);
% plot(t, sys_output.vms_aux20(idx)); grid on;
% ylabel('I pitch'); xlabel('Time [s]');
% subplot(3,1,3);
% plot(t, sys_output.vms_aux21(idx)); grid on;
% ylabel('D pitch'); xlabel('Time [s]');
% 
% % yaw channel
% figure
% subplot(2,1,1);
% plot(t, sys_output.vms_aux22(idx)); grid on;
% ylabel('P yaw'); xlabel('Time [s]');
% subplot(2,1,2);
% plot(t, sys_output.vms_aux23(idx)); grid on;
% ylabel('I yaw'); xlabel('Time [s]');