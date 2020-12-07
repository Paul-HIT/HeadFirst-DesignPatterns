//
// Created by Paul on 2020/12/7.
//

#include "CurrentConditionDisplay.h"
#include <iostream>

using std::cout, std::endl;

CurrentConditionDisplay::CurrentConditionDisplay(Subject *sbj) {
    m_sbj = sbj;
    sbj->registerObserver(this);
}

void CurrentConditionDisplay::update(double temperature, double humidity, double pressure) {
    m_temperature = temperature;
    m_humidity = humidity;
    m_pressure = pressure;
    display();
}

void CurrentConditionDisplay::display() {
    std::cout << "Current temperature: " << m_temperature << "F degree" << endl;
    std::cout << "Current humidity: " << m_humidity << "%" << endl;
    std::cout << "Current pressure: " << m_pressure << " * 10^5 Pa" << endl;
}