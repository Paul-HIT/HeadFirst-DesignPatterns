//
// Created by Paul on 2020/12/6.
//

#include "Duck.h"
#include <iostream>

using namespace std;

Duck::Duck() {

}

void Duck::swim() {
    cout << "All ducks can swim." << endl;
}

void Duck::performFlyBehavior() {
    flyBehavior->fly();
}

void Duck::performQuackBehavior() {
    quackBehavior->quack();
}

void Duck::setFlyBehavior(FlyBehavior *fb) {
    if (flyBehavior != nullptr) {
        delete flyBehavior;
    }

    flyBehavior = fb;
}

void Duck::setQuackBehavior(QuackBehavior *qb) {
    if (quackBehavior != nullptr) {
        delete quackBehavior;
    }

    quackBehavior = qb;
}
