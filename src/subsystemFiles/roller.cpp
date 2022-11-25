#include "main.h"

void setRoller(int power)
{
}

void controlRoller()
{
    if (controller.get_digital(DIGITAL_X))
    {
        setRoller(127);
    }
    else if (controller.get_digital(DIGITAL_B))
    {
        setRoller(-127);
    }
    else
    {
        setRoller(0);
    }
}