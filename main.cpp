#include <iostream>
#include "myTime.h"

using namespace std;

int main() {
    myTime planning;
    myTime coding(2,40);
    myTime fixing(5);
    myTime total;
    myTime diff;
    myTime adjust;

    cout<<"Planning Time = ";
    planning.show();
    cout<<endl;

    cout<<"Coding Time = ";
    coding.show();
    cout<<endl;

    cout<<"Fixing Time = ";
    fixing.show();
    cout<<endl;

    total = coding + fixing;
    cout<<"Total Time = ";
    total.show();
    cout<<endl;

    diff = fixing - coding;
    cout<<"Diff Time = ";
    diff.show();
    cout<<endl;

    adjust = coding * 2;
    cout<<"Adjust Coding Time * 2 = ";
    adjust.show();
    cout<<endl;

    cout<<"10.0 * adjust : "<<10.0 * adjust<<endl;

    return 0;
}
