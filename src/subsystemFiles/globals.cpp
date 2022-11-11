#include "main.h"

Motor frontLeft(frontLeftPort, E_MOTOR_GEARSET_06, true);
Motor backLeft(backLeftPort, E_MOTOR_GEARSET_06, false);

Motor frontRight(frontRightPort, E_MOTOR_GEARSET_06, false);
Motor backRight(backRightPort, E_MOTOR_GEARSET_06, true);

Motor flywheel1(flywheelPort1, E_MOTOR_GEARSET_06, false);
Motor flywheel2(flywheelPort2, E_MOTOR_GEARSET_06, false);
Motor intake(intakePort, E_MOTOR_GEARSET_06);
Motor roller(rollerPort, E_MOTOR_GEARSET_18);

ADIPort trigger1(triggerPort1, ADI_DIGITAL_OUT);
ADIPort trigger2(triggerPort2, ADI_DIGITAL_OUT);

// Imu gyro(gyroPort);

Controller controller(E_CONTROLLER_MASTER);
