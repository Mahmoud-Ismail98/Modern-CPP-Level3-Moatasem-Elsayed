#include <iostream>
#include "Led.hpp"

int main(void)
{

        Led led_red(3,5,false);  //pass defualt constractor or paramtrized constructor 
        led_red.~Led();
        //led_red.pin_num=9;  // cant be acess private member from another layer similar to static global var or fun         
        led_red.print();

    return 0;
}