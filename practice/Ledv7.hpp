#ifndef LED_H
#define LED_H
#pragma once

class Led
{
public:
    void Display(void) const;
    void print();
    Led();
    Led(int pin_num,int pin_count,bool state,int x);
    ~Led();
private:
    int  pin_num;    
    int  pin_count;
    bool state ;
    const int x;
};


#endif