#include "main.h"

void setFlywheel(int power)
{
    flywheel1 = power;
    flywheel2 = -power;
}

void controlFlywheel()
{
    if (controller.get_digital(DIGITAL_UP))
    {
        // 1.0
        setFlywheel(127);
    }
    else if (controller.get_digital(DIGITAL_RIGHT))
    {
        // 0.9
        setFlywheel(114);
    }
    else if (controller.get_digital(DIGITAL_DOWN))
    {
        // 0.8
        setFlywheel(101);
    }
    else if (controller.get_digital(DIGITAL_LEFT))
    {
        // 0.7
        setFlywheel(89);
    }
    else
    {
        setFlywheel(0);
    }

    // int power = -127 * (controller.get_digital(DIGITAL_L2) - controller.get_digital(DIGITAL_L1));
    // setFlywheel(power);
}
