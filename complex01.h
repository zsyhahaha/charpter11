//
// Created by »ªË¶ on 15/7/2022.
//

#ifndef CHARPTER11_COMPLEX01_H
#define CHARPTER11_COMPLEX01_H
#include <iostream>

class Complex {
    friend std::ostream & operator <<(std::ostream & os,const Complex & c);
    friend std::istream & operator >>(std::istream & os,Complex & c);
    friend Complex operator*(double n, const Complex &co)
    { return co * n; }
public:
    Complex();
    Complex(double x ,double y );
    Complex operator+(const Complex & a) const;
    Complex operator-(const Complex & a) const;
    Complex operator*(const Complex & a) const;
    Complex operator*(double a) const;
    Complex operator~() const;//¹²éîÔËËã·û
private:
    double x;
    double y;
};


#endif //CHARPTER11_COMPLEX01_H
