#include <iostream>
#include "Ledv7.hpp"


int main(void)
{
    Led ledblue(20,21,0,50);
    ledblue.print();
    ledblue.Display();
    const Led ledgreen;
    ledgreen.Display();
    ledgreen.print();
    return 0;

}