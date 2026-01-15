#include <bn_core.h>
#include <bn_backdrop.h>
#include <bn_color.h>
#include <bn_keypad.h>
#include <bn_green_swap.h>

int main()
{

    bn::core::init();
    bn::backdrop::set_color(bn::color(20, 20, 31));

    while (true)
    {

        if (bn::keypad::a_pressed())
        {
            bn::backdrop::set_color(bn::color(23, 1, 12));
        }

        if (bn::keypad::b_pressed())
        {
            bn::backdrop::set_color(bn::color(3, 25, 3));
        }

        if (bn::keypad::b_held())
        {
            bn::backdrop::set_color(bn::color(3, 25, 3));
        }
        if (bn::keypad::b_released())
        {
            bn::backdrop::set_color(bn::color(20, 20, 31));
        }

        bn::core::update();
    }
}
