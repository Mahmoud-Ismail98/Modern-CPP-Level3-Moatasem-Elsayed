#include <iostream>
#include "LCDv9.hpp"
int main(void)
{
    LCD l1;
    std::string msg="world";
    l1.setText("hello");
    //std::string temp =l1+msg;
    
    l1=l1+msg;
    std::cout<<l1.getText()<<std::endl;
    l1=l1-msg;
    std::cout<<l1.getText()<<std::endl;
    return 0;   
}
