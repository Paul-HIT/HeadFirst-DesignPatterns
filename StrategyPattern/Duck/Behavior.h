//
// Created by Paul on 2020/12/6.
//

#ifndef DUCK_BEHAVIOR_H
#define DUCK_BEHAVIOR_H

#include <iostream>
using namespace std;

class FlyBehavior {
public:
    virtual void fly(void) = 0;
};

class FlyWithWings: public FlyBehavior {
public:
    void fly(void) override;
};

class FlyNoWay: public FlyBehavior {
public:
    void fly(void) override;
};

class FlyRocketPowered: public FlyBehavior {
public:
    void fly(void) override;
};

class QuackBehavior {
public:
    virtual void quack(void) = 0;
};

class Quack: public QuackBehavior {
public:
    void quack(void) override;
};

class Squack: public QuackBehavior {
public:
    void quack(void) override;
};

class MutedQuack: public QuackBehavior {
public:
    void quack(void) override;
};



#endif //DUCK_BEHAVIOR_H
