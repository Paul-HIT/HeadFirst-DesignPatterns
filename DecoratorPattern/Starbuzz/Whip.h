//
// Created by Paul on 2020/12/14.
//

#ifndef STARBUZZ_WHIP_H
#define STARBUZZ_WHIP_H

#include "CondimentDecorator.h"

class Whip: public CondimentDecorator{
public:
    Whip(Beverage* beverage);
    string getDescription();
    double cost();

private:
    Beverage* m_beverage;
};


#endif //STARBUZZ_WHIP_H
