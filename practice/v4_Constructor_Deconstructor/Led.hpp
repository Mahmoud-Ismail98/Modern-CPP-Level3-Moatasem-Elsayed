#ifndef LED_H
#define LED_H
#pragma once

class Led
{
public:
    void print();
    Led();
    Led(int pin_num,int pin_count,bool state);
    ~Led();
  //  friend class Date;
private:
    int  pin_num;    
    int  pin_count;
    bool state ;

   // friend void friend_fun(void);
};

#endif