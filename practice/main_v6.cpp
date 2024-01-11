#include <iostream>
#include "Ledv6.hpp"


int main(void)
{
    Led ledred(20,21,true);
    Led ledgreen(ledred); /*copy constructor*/
    ledgreen.print();
    Led ledblack;

    return 0;

}