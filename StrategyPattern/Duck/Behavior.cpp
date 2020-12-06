//
// Created by Paul on 2020/12/6.
//
#include "Behavior.h"

void FlyWithWings::fly() {
    cout << "I can fly with wings." << endl;
}

void FlyNoWay::fly() {
    cout << "I can not fly." << endl;
}

void FlyRocketPowered::fly() {
    cout <<  "I can fly with a rocket." << endl;
}

void Quack::quack() {
    cout << "Quack, quack, quack..." << endl;
}

void Squack::quack() {
    cout << "Squack, squack, squack..." << endl;
}

void MutedQuack::quack() {
    cout << "<<Silence>>" << endl;
}