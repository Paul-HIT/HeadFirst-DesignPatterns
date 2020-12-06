#include <iostream>
#include "ModelDuck.h"
#include "MallardDuck.h"

using namespace std;

int main() {
    ModelDuck* modelDuck = new ModelDuck;
    modelDuck->display();
    modelDuck->performFlyBehavior();
    modelDuck->performQuackBehavior();

    cout << endl;

    MallardDuck* mallardDuck = new MallardDuck;
    mallardDuck->display();
    mallardDuck->performFlyBehavior();
    mallardDuck->performQuackBehavior();
    return 0;
}
