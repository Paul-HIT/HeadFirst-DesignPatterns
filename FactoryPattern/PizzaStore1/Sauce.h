//
// Created by Paul on 2020/12/18.
//

#ifndef PIZZASTORE1_SAUCE_H
#define PIZZASTORE1_SAUCE_H

#include <string>
using namespace std;

class Sauce {
public:
    Sauce() {

    }

    string getName() {
        return m_name;
    }

    void setName(string name) {
        m_name = name;
    }

protected:
    string m_name;
};

class NYSauce: public Sauce {
public:
    NYSauce() {
        m_name = "New York Sauce";
    }
};

class ChicagoSauce: public Sauce {
public:
    ChicagoSauce() {
        m_name = "Chicago Sauce";
    }
};

#endif //PIZZASTORE1_SAUCE_H
