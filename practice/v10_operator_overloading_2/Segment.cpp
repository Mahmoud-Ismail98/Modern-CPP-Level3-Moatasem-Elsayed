#include "Segment.hpp"
#include <iostream>
Segment::Segment()
{

}

Segment::~Segment()
{

}

void Segment::DisplayNumber(int number)
{
    m_number = number;
    std::cout <<"number is "<<m_number<<std::endl;
}

bool Segment::operator <(int x)
{
    if(m_number < x)
    {
        this->m_number=x;
        return true ;
    }
    else return false;
}
/*
const Segment& Segment::operator <(int number)
{
    
}
*/
bool Segment::operator >(const Segment &temp)
{

    if(this->m_number > temp.m_number)
    {
        return true;
    }
    else return false;  
}

const std::string& Segment::operator == (const Segment &temp) 
{
    static std::string str;
    if (m_number == temp.m_number)
    {
        str = "seg1 is equal to seg2";
       // return str;
    }
    else  
    {
       str = "seg1 is not equal to seg2";
       
    }
     return str;
    
}