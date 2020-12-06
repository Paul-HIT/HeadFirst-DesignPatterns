//
// Created by Paul on 2020/12/6.
//

#include "ModelDuck.h"
#include <iostream>

using namespace std;

ModelDuck::ModelDuck() {
    flyBehavior = new FlyRocketPowered;
    quackBehavior = new MutedQuack;
}

void ModelDuck::display() {
    cout << "I am a model duck." << endl;
}