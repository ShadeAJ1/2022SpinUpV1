#include "main.h"

void controlTrigger()
{
    if (controller.get_digital_new_press(DIGITAL_Y))
    {
        trigger.set_value(!trigger.get_value());
    }
}