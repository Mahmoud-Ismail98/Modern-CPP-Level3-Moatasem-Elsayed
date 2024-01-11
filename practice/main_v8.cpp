#include <iostream>
#include "Ledv8.hpp"


int main(void)
{
    Led ledblue(20,21,0,50);
    ledblue.print();
    ledblue.Display();
    /*if i declare the static at as puplic static member  */
    /*
    std::cout<<"puplic static number is "<<Led::Number<<"\n"<<std::endl;
    Led::Number=88 ;
    std::cout<<"puplic static number is "<<Led::Number<<"\n"<<std::endl;

    */
    ledblue.setNumber(100);
    std::cout<<"private static number is "<<ledblue.getNumber()<<"\n"<<std::endl;
    Led::sayHello(50);
    ledblue.sayHello(32);   //we can call static meber or method from the instance
    const Led ledgreen; 
    ledgreen.Display(); 
    //ledgreen.print(); 
    return 0;   
}
