//
// Created by Paul on 2020/12/7.
//

#ifndef WEATHERDATA_OBSERVER_H
#define WEATHERDATA_OBSERVER_H

class Observer {
public:
    Observer() {

    }
    virtual void update(double temperature, double humidity, double pressure) = 0;
};


#endif //WEATHERDATA_OBSERVER_H
