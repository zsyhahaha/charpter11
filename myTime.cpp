//
// Created by »ªË¶ on 15/7/2022.
//

#include "myTime.h"
#include <iostream>

myTime::myTime()
{
   hours = minutes = 0;
}

myTime::myTime(int h,int m )
{
    hours = h;
    minutes = m;
}

void myTime::addMin(int m)
{
    minutes += m;
    hours += minutes/60;
    minutes %= 60;
}

void myTime::addHour(int h)
{
    hours += h;
}

void myTime::Reset(int h ,int m )
{
    hours = h;
    minutes = m;
}

myTime myTime::sum(const myTime & T) const
{
    myTime sum;
    sum.minutes = minutes + T.minutes;
    sum.hours = hours + T.hours + sum.minutes/60;
    sum.minutes %= 60;
    return sum;
}

void myTime::show() const
{
    std::cout<<hours<<" hours,"<<minutes<<" minutes."<<std::endl;
}

myTime myTime::operator+(const myTime & T) const
{
    myTime sum;
    sum.minutes = minutes + T.minutes;
    sum.hours = hours + T.hours + sum.minutes/60;
    sum.minutes %= 60;
    return sum;
}

myTime myTime::operator-(const myTime & T) const
{
    myTime diff;
    int tot1,tot2;
    tot1 = T.minutes + 60 * T.hours;
    tot2 = minutes + 60 * hours;
    diff.minutes = (tot2 - tot1) % 60;
    diff.hours = (tot2 - tot1) / 60;
    return diff;
}

myTime myTime::operator*(double n) const
{
    myTime result;
    long total_min = hours * n * 60 + minutes * n;
    result.hours = total_min / 60;
    result.minutes = total_min % 60;
    return result;
}

std::ostream & operator << (std::ostream & os,const myTime & T)
{
    os<<T.hours<<" hours,"<<T.minutes<<" minutes.";
    return os;
}