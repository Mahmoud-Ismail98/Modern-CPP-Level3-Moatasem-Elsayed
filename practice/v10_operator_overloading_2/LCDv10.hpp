#ifndef LCD_H
#define LCD_H
#pragma once
#include<iostream>
class LCD
{
public:
    LCD();
    ~LCD();
    void setText(std::string text);
    std::string getText();
    //std::string operator+(std::string msg);
    LCD & operator +(std::string msg);
    LCD &operator -(std::string msg);
private:
    std::string text;
    int raw;


};

#endif