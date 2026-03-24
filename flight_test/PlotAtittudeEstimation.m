%% Plots of fedback states
% Compares raw sensor (gyro) data to filtered signal (from EKF) for states
% that are used in feedback compensation in EMF (phi, theta, p, q, r)
close all;

data = load('2_27_2026_EMF\malt1_2.mat');

%% Time vector
t = data.sys_time_s;              % [s]
t = t - t(1);                           % start from zero

tstart = 0;
tend = t(end);
idx = (t >= tstart) & (t <= tend);

t = t(idx);
t = t - t(1);

%% Plots

% Roll Attitude
figure
hold on; grid on;
Roll_Raw = cumtrapz(t, data.fmu_imu_gyro_x_radps*180/pi);
plot(t, Roll_Raw)
plot(t, data.bfs_ins_roll_rad*180/pi)
ylabel('Measured Roll Attitude (deg)')
xlabel('Time (s)')
legend('Raw Integrated Gyro Measurement', 'Estimiated State')

%Pitch Attitude
figure
hold on; grid on;
Pitch_Raw = cumtrapz(t, data.fmu_imu_gyro_y_radps*180/pi);
plot(t, Pitch_Raw)
plot(t, data.bfs_ins_pitch_rad*180/pi)
ylabel('Measured Pitch Attitude (deg)')
xlabel('Time (s)')
legend('Raw Integrated Gyro Measurement', 'Estimiated State')

%Roll Rate
figure
hold on; grid on;
plot(t, data.fmu_imu_gyro_x_radps*180/pi)
plot(t, data.bfs_ins_gyro_x_radps*180/pi)
ylabel('Measured Roll Rate (deg/s)')
xlabel('Time (s)')
legend('Raw Gyro Measurement', 'Estimiated State')

%Pitch Rate
figure
hold on; grid on;
plot(t, data.fmu_imu_gyro_y_radps*180/pi)
plot(t, data.bfs_ins_gyro_y_radps*180/pi)
ylabel('Measured Pitch Rate (deg/s)')
xlabel('Time (s)')
legend('Raw Gyro Measurement', 'Estimiated State')

%Yaw Rate
figure
hold on; grid on;
plot(t, data.fmu_imu_gyro_z_radps*180/pi)
plot(t, data.bfs_ins_gyro_z_radps*180/pi)
ylabel('Measured Yaw Rate (deg/s)')
xlabel('Time (s)')
legend('Raw Gyro Measurement', 'Estimiated State')
