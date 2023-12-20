#include "Ledv8.hpp"
#include <iostream>


int Led::Number;
void Led::setNumber(int num)
{
    Number=num;
}
int  Led::getNumber(void)
{
    return Number;
}
 
void Led::sayHello(int temp)
{
    int temp2=10;
    Number++;
    temp2++;
    temp++;
    //pin_count=50; error to acces member to class with in static methods
    std::cout<<"hell0  "<<Number<<" "<<temp2<<" "<<temp<<std::endl;

}
Led::Led():x(50)
{
    //x=50;
   std::cout<<"wellocome to constructor\n"<<std::endl;
}

Led::Led(int pin_num,int pin_count,bool STATE,int x) : pin_num(pin_num) , pin_count(pin_count) , state(STATE) , x(x)
{
   // this->x=x; //error: assignment of read-only member
   
    std::cout<<"parametrized coustractor "<<pin_num<<"  "<<pin_count<<" "<<STATE<<std::endl;
}
Led::~Led()
{
/*Deconstructor*/
    std::cout<<"Goodbye to deconstructor\n"<<std::endl;
}

void Led::print()
{
     std::cout<<"Hello led\n"<<std::endl;
     std::cout<<"const x is "<<x<<"\n"<<std::endl;
     std::cout<<"copy coustractor "<<pin_num<<"  "<<pin_count<<" "<<state<<std::endl;
}

void Led::Display(void) const
{
    std::cout<<"Display constant method\n"<<std::endl;
}