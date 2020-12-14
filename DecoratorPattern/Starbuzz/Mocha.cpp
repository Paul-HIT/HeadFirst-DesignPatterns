//
// Created by Paul on 2020/12/13.
//

#include "Mocha.h"

Mocha::Mocha(Beverage* beverage) {
    m_beverage = beverage;
}

string Mocha::getDescription() {
    return m_beverage->getDescription() + ", Mocha";
}

double Mocha::cost() {
    return 0.20 + m_beverage->cost();
}