#include <iostream>
//#include "Led.hpp"


class Date{

    private:
        int private_num=5;
    public:
        int puplic_num;
        void print(void);

        Date();
        ~Date();


};
void Date::print(void)
{
std::cout<<"hello my private date is    "<<private_num<<"and puplic is"<<puplic_num<<"\n"<<std::endl;   
}
//Date::puplic_num=6;

/*Constructor*/
Date::Date()
{
    std::cout<<"wellocome to constructor\n"<<std::endl;
}
/*Deconstructor*/
Date::~Date()
{
    std::cout<<"Goodbye to deconstructor"<<std::endl;
}

int main (void)
{
    //Led Red_Led;
    {
    Date d1;
    d1.print();
    std::cout<<"size of class is    "<<sizeof(d1)<<std::endl;
    }
    return 0;
}
  