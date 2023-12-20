#include "Led.hpp"
#include "Date.hpp"
#include <iostream>

Led::Led()
{
    std::cout<<"wellocome to constructor\n"<<std::endl;
}
/*paramatrized constructor*/
// Led::Led(int pin_num,int pin_count,bool STATE)
// {
//     /*in private member    passd member  */
//     this->pin_num=pin_num;
//     this->pin_count=pin_count;
//     this->state=STATE; 
//     std::cout<<"parametrized coustractor "<<pin_num<<""<<pin_count<<" "<<STATE<<std::endl;
// }    

Led::Led(int pin_num,int pin_count,bool STATE) : pin_num(pin_num) , pin_count(pin_count) , state(STATE)
{
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
     std::cout<<"copy coustractor "<<pin_num<<"  "<<pin_count<<" "<<state<<std::endl;

}