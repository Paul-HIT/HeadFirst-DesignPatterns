//
// Created by Paul on 2020/12/7.
//

#ifndef WEATHERDATA_SUBJECT_H
#define WEATHERDATA_SUBJECT_H

#include "Observer.h"
#include <vector>
using std::vector;

class Subject {
public:
    Subject();
    void registerObserver(Observer* ob);
    void removeObserver(Observer* ob);
    virtual void notifyObserver() = 0;
    void setChanged();

protected:
    bool changed;
    vector<Observer*> m_observerList;
};


#endif //WEATHERDATA_SUBJECT_H
