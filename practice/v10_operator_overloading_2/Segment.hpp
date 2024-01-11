#ifndef SEGMENT_H
#define SEGMENT_H
#include<iostream>
#pragma once

class Segment
{
public:
    Segment();
    ~Segment();
    void DisplayNumber(int number);
   // const Segment &operator <(int number);
    bool operator <(int x);
    //copy constructor
    bool operator >(const Segment &temp);
   const std::string& operator==(const Segment &temp);
private:
    int m_number;
};

#endif