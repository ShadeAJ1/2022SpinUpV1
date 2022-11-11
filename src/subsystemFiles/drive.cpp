#include "main.h"

// helper functions
void setDrive(double left, double right)
{
    frontLeft = left;
    backLeft = left;
    frontRight = right;
    backRight = right;
}

double avgDrivePosition()
{

    return (fabs(frontLeft.get_position()) + fabs(backLeft.get_position()) + fabs(frontRight.get_position()) + fabs(backRight.get_position())) / 4;
}

void setDriveCoast()
{
    frontLeft.set_brake_mode(MOTOR_BRAKE_COAST);

    backLeft.set_brake_mode(MOTOR_BRAKE_COAST);
    frontRight.set_brake_mode(MOTOR_BRAKE_COAST);

    backRight.set_brake_mode(MOTOR_BRAKE_COAST);
}

void resetDriveEncoders()
{
    frontLeft.tare_position();

    backLeft.tare_position();
    frontRight.tare_position();

    backRight.tare_position();
}

// main functions

void controlDrive()
{
    double left = master.get_analog(ANALOG_LEFT_Y);
    double right = master.get_analog(ANALOG_RIGHT_Y);
    setDrive(left, right);
}

void moveFeet(double feet, double voltage)
{
    double units = ((feet * 12) / (wheelDiameter * M_PI)) * driveGearRatio * 900;
    int direction = abs(units) / units;

    resetDriveEncoders();
    chassis.imu.tare_heading();

    while (avgDrivePosition() < abs(units))
    {
        setDrive(voltage * direction - chassis.imu.get_heading(), voltage * direction + chassis.imu.get_heading());
        pros::delay(10);
    }

    setDrive(-10 * direction, -10 * direction);
    pros::delay(50);
    setDrive(0, 0);
}

void turnDegrees(double degrees, double voltage, double direction)
{
    chassis.imu.tare_heading();
    chassis.set_drive_brake(MOTOR_BRAKE_HOLD);

    if (direction == -1)
    {
        setDrive(-voltage, voltage);
        pros::delay(50);
        while ((chassis.imu.get_heading()) > (360 - (degrees - 37)))
        {
            pros::delay(10);
        }

        // if ((chassis.imu.get_heading()) < (360 - degrees))
        // {
        //     setDrive(0.5 * voltage, 0.5 * -voltage);
        //     while ((chassis.imu.get_heading()) < (360 - degrees))
        //     {
        //         pros::delay(10);
        //     }
        // }

        // if ((chassis.imu.get_heading()) > (360 - degrees))
        // {
        //     setDrive(0.5 * voltage, 0.5 * -voltage);
        //     while ((chassis.imu.get_heading()) > (360 - degrees))
        //     {
        //         pros::delay(10);
        //     }
        // }
        // wait for robot to lose momentum
        setDrive(0, 0);
        pros::delay(100);
    }

    if (direction == 1)
    {
        setDrive(voltage, -voltage);
        pros::delay(50);
        while ((chassis.imu.get_heading()) < (degrees - 50))
        {
            pros::delay(10);
        }

        // if ((chassis.imu.get_heading()) < (360 - degrees))
        // {
        //     setDrive(0.5 * voltage, 0.5 * -voltage);
        //     while ((chassis.imu.get_heading()) < (360 - degrees))
        //     {
        //         pros::delay(10);
        //     }
        // }

        // if ((chassis.imu.get_heading()) > (360 - degrees))
        // {
        //     setDrive(0.5 * voltage, 0.5 * -voltage);
        //     while ((chassis.imu.get_heading()) > (360 - degrees))
        //     {
        //         pros::delay(10);
        //     }
        // }
        // wait for robot to lose momentum
        setDrive(0, 0);
        pros::delay(100);
    }
}