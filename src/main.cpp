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

    /* smile
     bn::sprite_ptr myCircle = bn::sprite_items::dot.create_sprite(10, 40);
     bn::sprite_ptr myCircle2 = bn::sprite_items::dot.create_sprite(0, 40);
     bn::sprite_ptr myCircle3 = bn::sprite_items::dot.create_sprite(-10, 40);
     bn::sprite_ptr myCircle4 = bn::sprite_items::dot.create_sprite(-20, 40);
     bn::sprite_ptr myCircle5 = bn::sprite_items::dot.create_sprite(-30, 40);

     //left side of smile
     bn::sprite_ptr myCircle6 = bn::sprite_items::dot.create_sprite(-40, 30);

     //right side of smile
         bn::sprite_ptr myCircle7 = bn::sprite_items::dot.create_sprite(20, 30);

         //eyes

         //right eye
             bn::sprite_ptr myCircle8 = bn::sprite_items::dot.create_sprite(0, 10);

         //left eye
             bn::sprite_ptr myCircle9 = bn::sprite_items::dot.create_sprite(-20, 10);

             */

    for (int x = -40; x <= 40; x += 10)
    {
        bn::sprite_ptr myCircle = bn::sprite_items::dot.create_sprite(x, 40);
    }

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
