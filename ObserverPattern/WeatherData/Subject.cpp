//
// Created by Paul on 2020/12/7.
//

#include "Subject.h"
#include <algorithm>

using std::count, std::find;

Subject::Subject() {

}

void Subject::registerObserver(Observer* ob) {
    if (count(m_observerList.begin(), m_observerList.end(), ob) == 0) {
        m_observerList.push_back(ob);
    }
}

void Subject::removeObserver(Observer* ob) {
    vector<Observer*>::iterator it = find(m_observerList.begin(), m_observerList.end(), ob);
    if (it != m_observerList.end()) {
        it = m_observerList.erase(it);
    }
}

void Subject::setChanged() {
    changed = true;
}