//
// Created by Paul on 2020/12/17.
//

#ifndef PIZZASTORE_PIZZASTORE_H
#define PIZZASTORE_PIZZASTORE_H

#include "Pizza.h"


class PizzaStore {
public:
    PizzaStore() {

    }
    Pizza* orderPizza(string type) {
        Pizza* pizza = createPizza(type);
        pizza->prepare();
        pizza->bake();
        pizza->cut();
        pizza->box();

        return pizza;
    }

    virtual Pizza* createPizza(string type) = 0;

private:
    Pizza* m_pizza;
};

class NYPizzaStore: public PizzaStore {
public:
    NYPizzaStore() {

    }
    Pizza * createPizza(string type) {
        if (type == "Cheese") {
            return new NYStyleCheesePizza;
        }
        else {
            // Other type pizza...
            return nullptr;
        }
    }
};

class ChicagoPizzaStore: public PizzaStore {
public:
    ChicagoPizzaStore() {

    }
    Pizza * createPizza(string type) {
        if (type == "Cheese") {
            return new ChicagoStyleCheesePizza;
        }
        else {
            // Other type pizza...
            return nullptr;
        }
    }
};

#endif //PIZZASTORE_PIZZASTORE_H
