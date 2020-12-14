//
// Created by Paul on 2020/12/13.
//

#include "Beverage.h"

Beverage::Beverage(string description) {
    m_description = description;
}

string Beverage::getDescription() {
    return m_description;
}