#include "main.h"

void setFlywheel(int power)
{
    flywheel1 = power;
    flywheel2 = power;
}

void controlFlywheel()
{
    int power = -127 * (controller.get_digital(DIGITAL_L2) - controller.get_digital(DIGITAL_L1));
    setFlywheel(power);
}
