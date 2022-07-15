//
// Created by 华硕 on 15/7/2022.
//

#include "complex01.h"
#include <iostream>

Complex::Complex()
{
    x = y = 0.0;
}

Complex::Complex(double x ,double y )
{
    this->x = x;
    this->y = y;
}

Complex Complex::operator+(const Complex & a) const
{
    return Complex(x + a.x, y + a.y);
}

Complex Complex::operator-(const Complex & a) const
{
    return Complex(x - a.x, y - a.y);
}

Complex Complex::operator*(const Complex & a) const
{
    return Complex(x * a.x - y * a.y,x * a.y + y * a.x);
}

Complex Complex::operator*(double a) const
{
    return Complex(a * x, a * y);
}

Complex Complex::operator~() const
{
    return Complex(x, -y);
}

std::ostream & operator <<(std::ostream & os,const Complex & c)
{
    os << "Real = "<<c.x<<" Imaginary = "<<c.y;
    return os;
}

std::istream & operator >>(std::istream & is,Complex & c)
{
    std::cout << "real: ";
    if (is >> c.x) //若实数部分读取失败则虚数部分不读取;
    {
        std::cout << "imaginary: ";
        is >> c.y;
    }
    return is;
}
