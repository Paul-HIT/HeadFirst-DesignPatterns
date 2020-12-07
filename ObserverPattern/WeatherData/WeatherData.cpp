//
// Created by Paul on 2020/12/7.
//

#include "WeatherData.h"

WeatherData::WeatherData() {

}

void WeatherData::notifyObserver() {
    if (changed) {
        for (vector<Observer*>::iterator it = m_observerList.begin(); it != m_observerList.end(); it++) {
            Observer* obs = *it;
            obs->update(m_temperature, m_humidity, m_pressure);
        }
    }
    changed = false;
}

void WeatherData::setMeasurement(double t, double h, double p) {
    setChanged();
    m_temperature = t;
    m_humidity = h;
    m_pressure = p;
    measurementsChanged();
}

void WeatherData::measurementsChanged() {
    notifyObserver();
}