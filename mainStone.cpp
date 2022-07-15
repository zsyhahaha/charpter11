//
// Created by »ªË¶ on 15/7/2022.
//
#include <iostream>
#include "stone.h"

using namespace std;

void display(const Stone & st,int n)
{
    for (int i = 0; i < n; ++i) {
        cout<<"Wow!";
        st.show_stn();
    }
}

int main()
{
    Stone inco = 275;
    Stone wolfe(285.7);
    Stone taft(21,8);

    Stone popins(9,2.8);
    double p_wt = popins;

    cout<<"Convert to double: => "<<"Poppins: "<<p_wt<<"pounds."<<endl;
    cout<<"Convert to int: => "<<"Poppins: "<<int(popins)<<"pounds."<<endl;

    cout<<"The celebrity weight: ";
    inco.show_stn();
    cout<<"The detective weight: ";
    wolfe.show_stn();
    cout<<"The president weight: ";
    taft.show_stn();

    inco = 276.8;
    taft = 325;

    cout<<"After dinner ,the celebrity weight: ";
    inco.show_stn();
    cout<<"After dinner ,the president weight: ";
    taft.show_lbs();

    display(taft,2);
    cout<<"The wrestler weighted even more."<<endl;
    display(422,2);
    cout<<"No stone left unearned."<<endl;
    return 0;
}