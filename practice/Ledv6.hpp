#ifndef LED_H
#define LED_H
#pragma once

class Led
{
public:
    void print();
    //Led() = default;    //do nothing
    Led()=delete; //delete to prevent use that constructor and generate error
    Led(const Led &led)=default;  //copy constructor
    /*
        that will be happen behind the sence
        :pin_num(led.pin_num),pin_count(led.pin_count),Pin_state(led.pin_state);
    */
    Led&operator=(const Led&led)=default;  //assignement operator
    ~Led()=default;  //do noting 
    Led(int pin_num,int pin_count,bool state);

//    friend class Date;
private:
    int  pin_num=1;    
    int  pin_count=1;
    bool state =1;
};

#endif