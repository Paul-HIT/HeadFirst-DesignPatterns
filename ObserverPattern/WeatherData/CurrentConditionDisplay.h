//
// Created by Paul on 2020/12/7.
//

#ifndef WEATHERDATA_CURRENTCONDITIONDISPLAY_H
#define WEATHERDATA_CURRENTCONDITIONDISPLAY_H

#include "Observer.h"
#include "Display.h"
#include "Subject.h"

class CurrentConditionDisplay: public Observer, public Display {
public:
    CurrentConditionDisplay(Subject* sbj);
    void update(double temperature, double humidity, double pressure) override;
    void display() override;

private:
    double m_temperature;
    double m_humidity;
    double m_pressure;

    Subject* m_sbj;
};


#endif //WEATHERDATA_CURRENTCONDITIONDISPLAY_H
