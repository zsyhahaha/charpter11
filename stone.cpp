//
// Created by »ªË¶ on 15/7/2022.
//

#include "stone.h"
#include <iostream>

Stone::Stone(double lbs)
{
    stone = int (lbs) / Lbs_per_stone;
    pds_left = int (lbs) % Lbs_per_stone + lbs - int (lbs);
    pounds = lbs;
}

Stone::Stone(int stn,double lbs)
{
    stone = stn;
    pds_left = lbs;
    pounds = stn * Lbs_per_stone + lbs;
}

Stone::Stone() {
    stone = pounds = pds_left = 0;
}

Stone::~Stone() {

}

void Stone::show_lbs() const
{
    std::cout<<" Pounds: "<<pounds<<std::endl;
}

void Stone::show_stn() const
{
    std::cout<<"Stone: "<<stone<<" Pounds: "<<pds_left<<std::endl;
}

Stone::operator double() const {
    return pounds;
}

Stone::operator int() const {
    return int(pounds + 0.5);
}

