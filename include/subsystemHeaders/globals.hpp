#include "main.h"

// MOTORS
extern Motor frontRight;
extern Motor backRight;
extern Motor frontLeft;
extern Motor backLeft;

extern Motor flywheel1;
extern Motor flywheel2;
extern Motor intake;
extern Motor roller;

// PNEUMATICS
extern ADIPort trigger1;
extern ADIPort trigger2;

// MISC
extern Imu gyro;
extern Controller controller;

// MATH
#define driveGearRatio 2.3333
#define wheelDiameter 4

// PORTS
#define frontRightPort 1
#define backRightPort 2
#define frontLeftPort 3
#define backLeftPort 4

#define intakePort 15
#define flywheelPort1 12
#define flywheelPort2 13
#define rollerPort 11

#define triggerPort1 'F'
#define triggerPort2 'H'