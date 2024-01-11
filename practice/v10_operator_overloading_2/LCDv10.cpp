#include "LCDv10.hpp"
#include <iostream>
LCD::LCD()
{

}

LCD::~LCD()
{

}
void LCD::setText(std::string text)
{
    this->text=text;
}
std::string LCD::getText()
{
    return text;
}

LCD& LCD::operator -(std::string msg)
{
 //text=text-msg-->error as inside string not found subtract

 //first argument of erase find the find the position of first element of msg (hello)--h is 9  
  text=text.erase(text.find(msg),msg.length());
   return *this; 
}
/*
std::string LCD::operator+(std::string msg)
{
    text=text+" "+msg+" done\n";
    return text;
}
*/
/*LCD & because i want to return in class from lcd  */
LCD & LCD::operator+(std::string msg)
{
    //or this->text
    text =text + " "+msg+" is done\n";
    return *this; //return what LCD contain because this point on lcd 
}