//
// Created by Paul on 2020/12/18.
//

#ifndef PIZZASTORE1_CHEESE_H
#define PIZZASTORE1_CHEESE_H

#include <string>
using namespace std;

class Cheese {
public:
    Cheese() {

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

class NYCheese: public Cheese {
public:
    NYCheese() {
        m_name = "New York Cheese";
    }
};

class ChicagoSCheese: public Cheese {
public:
    ChicagoSCheese() {
        m_name = "Chicago Cheese";
    }
};

#endif //PIZZASTORE1_CHEESE_H
