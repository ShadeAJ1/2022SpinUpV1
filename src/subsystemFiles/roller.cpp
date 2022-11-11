#include "main.h"

void setRoller(int power)
{
    roller = power;
}

void controlRoller()
{
    int power = -127 * (controller.get_digital(DIGITAL_X) - controller.get_digital(DIGITAL_B));
    setRoller(power);
}