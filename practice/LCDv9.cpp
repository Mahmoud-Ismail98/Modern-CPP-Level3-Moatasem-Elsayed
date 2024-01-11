#include "LCDv9.hpp"
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
LCD & LCD::operator+(std::string msg)
{
    text =text + " "+msg+" is done\n";
    return *this; //return what LCD contain
}