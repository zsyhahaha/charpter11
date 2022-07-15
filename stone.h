//
// Created by »ªË¶ on 15/7/2022.
//

#ifndef CHARPTER11_STONE_H
#define CHARPTER11_STONE_H


class Stone {
private:
    enum {Lbs_per_stone = 14};
    int stone;
    double pds_left;
    double pounds;
public:
    Stone(double lbs);
    Stone(int stn,double lbs);
    Stone();
    ~Stone();
    void show_lbs() const;
    void show_stn() const;
    //operate overloading
    operator int() const;
    operator double () const;
};


#endif //CHARPTER11_STONE_H
