#ifndef LED_H
#define LED_H
#pragma once

class Led
{
public:
    void Display(void) const;
    void print();
    static void sayHello(int temp);
    Led();
    Led(int pin_num,int pin_count,bool state,int x);
    ~Led();
    void setNumber(int num);
    int getNumber(void);
    
private:
    int  pin_num;    
    int  pin_count;
    bool state ;
    const int x;
    static int Number;    
};


#endif