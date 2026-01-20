#include <bn_core.h>
#include <bn_backdrop.h>
#include <bn_color.h>
#include <bn_keypad.h>
#include <bn_sprite_ptr.h>
#include <bn_sprite_items_dot.h>

int main()
{

    bn::core::init();
    bn::backdrop::set_color(bn::color(20, 20, 31));

        bn::sprite_ptr myCircle = bn::sprite_items::dot.create_sprite(10,40);
        bn::sprite_ptr myCircle2 = bn::sprite_items::dot.create_sprite(5,40);
        bn::sprite_ptr myCircle3 = bn::sprite_items::dot.create_sprite(0,40);
        bn::sprite_ptr myCircle4 = bn::sprite_items::dot.create_sprite(-5,40);
        bn::sprite_ptr myCircle5 = bn::sprite_items::dot.create_sprite(-10,40);


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
