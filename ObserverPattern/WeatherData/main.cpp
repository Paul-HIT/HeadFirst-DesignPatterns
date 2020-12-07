#include <iostream>
#include "WeatherData.h"
#include "CurrentConditionDisplay.h"

int main() {
    WeatherData* wd = new WeatherData();
    CurrentConditionDisplay* currentConditon = new CurrentConditionDisplay(wd);

    wd->setMeasurement(80.0, 65, 1);
    return 0;
}
