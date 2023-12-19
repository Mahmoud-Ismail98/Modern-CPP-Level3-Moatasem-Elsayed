#include <iostream>
#include "Led.hpp"
//#include "Date.hpp"

void friend_fun(void)
{
    Led led_green(1,5,true);
    led_green.pin_num=5;
  // printf();
}

int main(void)
{
        Led led_red(3,5,false);  //pass defualt constractor or paramtrized constructor 
        led_red.~Led();
        led_red.print();
        return 0;
}