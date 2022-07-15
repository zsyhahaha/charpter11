//
// Created by »ªË¶ on 15/7/2022.
//
#include <iostream>
#include "complex01.h"

using namespace std;

int main()
{
    Complex a(3.0,4.0);
    Complex c;

    cout<<"Enter a complex number (q to quit) "<<endl;
    while (cin >> c)
    {
        cout<<"c "<<c<<endl;
        cout<<"complex conjugate "<< ~c <<endl;
        cout<<"a "<<a<<endl;
        cout<<"a + c = "<<a + c<<endl;
        cout<<"a - c = "<<a - c<<endl;
        cout<<"a * c = "<<a * c<<endl;
        cout<<"2 * c = "<<2 * c<<endl;
        cout<<"Enter a complex number (q to quit) "<<endl;
    }
    cout<<"Bye!"<<endl;
    return 0;
}