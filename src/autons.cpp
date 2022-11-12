#include "main.h"

/////
// For instalattion, upgrading, documentations and tutorials, check out website!
// https://ez-robotics.github.io/EZ-Template/
/////

const int DRIVE_SPEED = 110; // This is 110/127 (around 87% of max speed).  We don't suggest making this 127.
                             // If this is 127 and the robot tries to heading correct, it's only correcting by
                             // making one side slower.  When this is 87%, it's correcting by making one side
                             // faster and one side slower, giving better heading correction.
const int TURN_SPEED = 90;
const int SWING_SPEED = 90;

///
// Constants
///

// It's best practice to tune constants when the robot is empty and with heavier game objects, or with lifts up vs down.
// If the objects are light or the cog doesn't change much, then there isn't a concern here.

void default_constants()
{
  chassis.set_slew_min_power(80, 80);
  chassis.set_slew_distance(7, 7);
  chassis.set_pid_constants(&chassis.headingPID, 11, 0, 20, 0);
  chassis.set_pid_constants(&chassis.forward_drivePID, 0.45, 0, 5, 0);
  chassis.set_pid_constants(&chassis.backward_drivePID, 0.45, 0, 5, 0);
  chassis.set_pid_constants(&chassis.turnPID, 5, 0.003, 35, 15);
  chassis.set_pid_constants(&chassis.swingPID, 7, 0, 45, 0);
}

void one_mogo_constants()
{
  chassis.set_slew_min_power(80, 80);
  chassis.set_slew_distance(7, 7);
  chassis.set_pid_constants(&chassis.headingPID, 11, 0, 20, 0);
  chassis.set_pid_constants(&chassis.forward_drivePID, 0.45, 0, 5, 0);
  chassis.set_pid_constants(&chassis.backward_drivePID, 0.45, 0, 5, 0);
  chassis.set_pid_constants(&chassis.turnPID, 5, 0.003, 35, 15);
  chassis.set_pid_constants(&chassis.swingPID, 7, 0, 45, 0);
}

void two_mogo_constants()
{
  chassis.set_slew_min_power(80, 80);
  chassis.set_slew_distance(7, 7);
  chassis.set_pid_constants(&chassis.headingPID, 11, 0, 20, 0);
  chassis.set_pid_constants(&chassis.forward_drivePID, 0.45, 0, 5, 0);
  chassis.set_pid_constants(&chassis.backward_drivePID, 0.45, 0, 5, 0);
  chassis.set_pid_constants(&chassis.turnPID, 5, 0.003, 35, 15);
  chassis.set_pid_constants(&chassis.swingPID, 7, 0, 45, 0);
}

void exit_condition_defaults()
{
  chassis.set_exit_condition(chassis.turn_exit, 100, 3, 500, 7, 500, 500);
  chassis.set_exit_condition(chassis.swing_exit, 100, 3, 500, 7, 500, 500);
  chassis.set_exit_condition(chassis.drive_exit, 80, 50, 300, 150, 500, 500);
}

void modified_exit_condition()
{
  chassis.set_exit_condition(chassis.turn_exit, 100, 3, 500, 7, 500, 500);
  chassis.set_exit_condition(chassis.swing_exit, 100, 3, 500, 7, 500, 500);
  chassis.set_exit_condition(chassis.drive_exit, 80, 50, 300, 150, 500, 500);
}

void rightWinPointAuto()
{

  // lift.set_brake_mode(MOTOR_BRAKE_HOLD);
  // lift.tare_position();
  // chassis.set_drive_brake(E_MOTOR_BRAKE_BRAKE);

  // setDrive(127, 127);
  // lift.move_absolute(210, 127);
  // claw.set_value(!claw.get_value());
  // cover.set_value(true);
  // while (limit.get_value() == false)
  // {
  //   pros::delay(10);
  // }
  // claw.set_value(!claw.get_value());
  // setDrive(-127, -127);
  // pros::delay(790);
  // setDrive(0, 0);
  // pros::delay(500);
  // turnDegrees(95, 100, -1);
  // pros::delay(500);
  // tilt.set_value(!tilt.get_value());
  // pros::delay(300);
  // setDrive(-127, -127);
  // pros::delay(600);
  // setDrive(0, 0);
  // pros::delay(200);
  // tilt.set_value(!tilt.get_value());
  // pros::delay(100);
  // setIntake(-127);
  // pros::delay(10);
  // setDrive(127, 127);
  // lift.move_absolute(1400, 127);
  // pros::delay(250);
  // setDrive(0, 0);
  // pros::delay(500);

  // setDrive(40, 40);
  // pros::delay(4500);
  // setDrive(0, 0);
  // setIntake(0);
  // setDrive(-50, -50);
  // pros::delay(2000);
  // setDrive(0, 0);

  // turnDegrees(50, 100, -1);
  // pros::delay(500);
  // setDrive(40, 40);
  // pros::delay(4000);
  // setDrive(0, 0);
  // setIntake(0);
  // setDrive(-50, -50);
  // pros::delay(800);
  // setDrive(0, 0);
}

void leftWinPointAuto()
{

  // lift.set_brake_mode(MOTOR_BRAKE_HOLD);
  // lift.tare_position();
  // chassis.set_drive_brake(E_MOTOR_BRAKE_BRAKE);

  // setDrive(127, 127);
  // lift.move_absolute(210, 127);
  // claw.set_value(!claw.get_value());
  // cover.set_value(true);
  // while (limit.get_value() == false)
  // {
  //   pros::delay(10);
  // }
  // claw.set_value(!claw.get_value());
  // setDrive(-127, -127);
  // pros::delay(1100);
  // setDrive(0, 0);
  // pros::delay(10);
  // turnDegrees(90, 100, -1);
  // pros::delay(10);
  // tilt.set_value(!tilt.get_value());
  // pros::delay(1);
  // setDrive(-127, -127);
  // pros::delay(400);
  // setDrive(0, 0);
  // pros::delay(200);
  // tilt.set_value(!tilt.get_value());
}

void middleWinPointAuto()
{
  // lift.set_brake_mode(MOTOR_BRAKE_HOLD);
  // lift.tare_position();
  // chassis.set_drive_brake(E_MOTOR_BRAKE_BRAKE);

  // setDrive(127, 127);
  // lift.move_absolute(210, 127);
  // claw.set_value(!claw.get_value());
  // while (limit.get_value() == false)
  // {
  //   pros::delay(10);
  // }
  // cover.set_value(true);
  // claw.set_value(!claw.get_value());
  // setDrive(-127, -127);
  // pros::delay(500);
  // setDrive(0, 0);
  // pros::delay(10);
  // turnDegrees(45, 100, -1);
  // tilt.set_value(!tilt.get_value());
  // setDrive(-127, -127);
  // pros::delay(1000);
  // setDrive(0, 0);
}

void rollerAuto()
{
  setDrive(-80, -80);
  pros::delay(500);
  setRoller(127);
  pros::delay(500);
  setRoller(0);
  setDrive(0, 0);
  pros::delay(500);
  setDrive(80, 80);
  pros::delay(500);
  setDrive(0, 0);
}