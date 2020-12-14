//
// Created by Paul on 2020/12/14.
//

#include "Whip.h"

Whip::Whip(Beverage* beverage) {
    this->m_beverage = beverage;
}

string Whip::getDescription() {
    return m_beverage->getDescription() + ", Whip";
}

double Whip::cost() {
    return 0.15 + m_beverage->cost();
}