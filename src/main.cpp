#include <bn_core.h>
#include <bn_backdrop.h>
#include <bn_color.h>
#include <bn_keypad.h>
#include <bn_sprite_ptr.h>
#include <bn_sprite_items_dot.h>
#include <bn_log.h>
#include <bn_vector.h>

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
    bn::vector<bn::sprite_ptr, 10> circles = {};
    bn::vector<bn::sprite_ptr, 10> circles2 = {};
    bn::vector<bn::sprite_ptr, 10> circles3 = {};


    for (int x = -40; x <= 40; x += 10)
    {
        BN_LOG("x value", x);

        bn::sprite_ptr myCircle = bn::sprite_items::dot.create_sprite(x, 40);
        circles.push_back(myCircle);
    }
    for (int x = -50, y = 40; x <= 40 && y >= -40; x += 10, y -= 10)
    {
        BN_LOG("x value", x, "y value", y);
        bn::sprite_ptr myCircle = bn::sprite_items::dot.create_sprite(x, y);

        for (int i = 0; i < circles2.size(); i++)
        {
            circles2[i].set_shear(-2,0); // Not sure why it isn't setting last index's shear. Will debug next time.
        }
        circles2.push_back(myCircle); 
    }
    

        for (int x = -70, y = 40; x <= -60 && y >= -40; y -= 13)
    {
        BN_LOG("x value", x);

        for(int i = 0; i < circles3.size(); i++){
            circles3[i].set_scale(1+(i*0.1));
        }
        bn::sprite_ptr myCircle = bn::sprite_items::dot.create_sprite(x, y);
        circles3.push_back(myCircle);
        }



   //circles[0].set_scale(1.8);

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

            for (int i = 0; i < 60; i++)
            {
                bn::core::update();
            }
            bn::backdrop::set_color(bn::color(20, 20, 31));
        }
        if (bn::keypad::b_released())
        {
            bn::backdrop::set_color(bn::color(20, 20, 31));
        }

        bn::core::update();
    }
}
