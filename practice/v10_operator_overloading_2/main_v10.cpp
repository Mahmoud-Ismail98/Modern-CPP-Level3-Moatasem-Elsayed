#include <iostream>
#include "LCDv10.hpp"

#include "Segment.hpp"
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

    //create instance from the class
    Segment seg1;
    Segment seg2;
    seg1.DisplayNumber(3);
    seg2.DisplayNumber(5);
    int Number; 
    std::cin>>Number;
    if(seg1 <9 )
    {
        seg1.DisplayNumber(Number);
    }

    if (seg1 > seg2)
    {
        std::cout<<"seg1 is greater than seg2\n";
    }
    std::string str= seg1==seg2;
     std::cout <<str;
    return 0;   
}
