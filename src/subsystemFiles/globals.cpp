#include "main.h"

Motor frontLeft(frontLeftPort, E_MOTOR_GEARSET_06, true);
Motor backLeft(backLeftPort, E_MOTOR_GEARSET_06, false);

Motor frontRight(frontRightPort, E_MOTOR_GEARSET_06, false);
Motor backRight(backRightPort, E_MOTOR_GEARSET_06, true);

Motor flywheel1(flywheelPort1, E_MOTOR_GEARSET_06, false);
Motor flywheel2(flywheelPort2, E_MOTOR_GEARSET_06, false);
Motor intake1(intakePort1, E_MOTOR_GEARSET_06);
Motor intake2(intakePort2, E_MOTOR_GEARSET_06);

ADIPort trigger(triggerPort, ADI_DIGITAL_OUT);

// Imu gyro(gyroPort);

Controller controller(E_CONTROLLER_MASTER);
