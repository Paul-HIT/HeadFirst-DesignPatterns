//
// Created by Paul on 2020/12/7.
//

#ifndef WEATHERDATA_WEATHERDATA_H
#define WEATHERDATA_WEATHERDATA_H

#include "Subject.h"

using namespace std;

class WeatherData: public Subject {
public:
    WeatherData();
    void notifyObserver() override;

    void setMeasurement(double t, double h, double p);
    void measurementsChanged();

private:
    double m_temperature;
    double m_humidity;
    double m_pressure;
};


#endif //WEATHERDATA_WEATHERDATA_H
