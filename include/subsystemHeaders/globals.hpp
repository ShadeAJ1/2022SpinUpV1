#include "main.h"

// MOTORS
extern Motor frontRight;
extern Motor backRight;
extern Motor frontLeft;
extern Motor backLeft;

extern Motor flywheel1;
extern Motor flywheel2;
extern Motor intake1;
extern Motor intake2;

// PNEUMATICS
extern ADIPort trigger;

// MISC
extern Imu gyro;
extern Controller controller;

// MATH
#define driveGearRatio 2.3333
#define wheelDiameter 4

// PORTS
#define frontRightPort 11
#define backRightPort 9
#define frontLeftPort 15
#define backLeftPort 10

#define intakePort1 3
#define intakePort2 14
#define flywheelPort1 12
#define flywheelPort2 13

#define triggerPort 'F'