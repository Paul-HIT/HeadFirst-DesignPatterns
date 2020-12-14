//
// Created by Paul on 2020/12/13.
//

#ifndef STARBUZZ_MOCHA_H
#define STARBUZZ_MOCHA_H

#include "CondimentDecorator.h"

class Mocha: public CondimentDecorator {
public:
    Mocha(Beverage* beverage);
    string getDescription();
    double cost();

private:
    Beverage* m_beverage;
};


#endif //STARBUZZ_MOCHA_H
