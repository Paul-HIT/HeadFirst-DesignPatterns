//
// Created by Paul on 2020/12/6.
//

#ifndef DUCK_DUCK_H
#define DUCK_DUCK_H

#include "Behavior.h"
#include <iostream>

using namespace std;

class Duck {
public:
    Duck();
    virtual void display(void) = 0;
    void swim();
    void performFlyBehavior();
    void performQuackBehavior();
    void setFlyBehavior(FlyBehavior* fb);
    void setQuackBehavior(QuackBehavior* qb);

protected:
    FlyBehavior* flyBehavior;
    QuackBehavior* quackBehavior;
};


#endif //DUCK_DUCK_H
