//
// Created by Paul on 2020/12/13.
//

#ifndef STARBUZZ_CONDIMENTDECORATOR_H
#define STARBUZZ_CONDIMENTDECORATOR_H

#include "Beverage.h"


class CondimentDecorator: public Beverage {
public:
    string getDescription() {
        return "";
    };
};


#endif //STARBUZZ_CONDIMENTDECORATOR_H
