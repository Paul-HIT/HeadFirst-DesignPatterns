//
// Created by Paul on 2020/12/6.
//

#include "MallardDuck.h"
#include <iostream>

using std::cout;
using std::endl;

MallardDuck::MallardDuck()
{
    quackBehavior = new Quack;
    flyBehavior = new FlyWithWings;
}


void MallardDuck::display()
{
    cout << "I am a real Mallard Duck" << endl;
}