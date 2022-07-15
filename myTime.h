//
// Created by »ªË¶ on 15/7/2022.
//

#ifndef CHARPTER11_MYTIME_H
#define CHARPTER11_MYTIME_H

#include <iostream>

class myTime {
private:
    int hours;
    int minutes;
public:
    myTime();
    myTime(int h,int m = 0);
    void addMin(int m);
    void addHour(int h);
    void Reset(int h = 0,int m = 0);
    myTime sum(const myTime & T) const;
    void show() const;
    myTime operator+(const myTime & T) const;
    myTime operator-(const myTime & T) const;
    myTime operator*(double n) const;
    friend myTime operator *(double m,const myTime & T)
    {
        return T * m;
    }
    friend std::ostream & operator << (std::ostream & os,const myTime & T);
};


#endif //CHARPTER11_MYTIME_H
