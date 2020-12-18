//
// Created by Paul on 2020/12/18.
//

#ifndef PIZZASTORE1_PIZZAINGREDIENTFACTORY_H
#define PIZZASTORE1_PIZZAINGREDIENTFACTORY_H

#include "Sauce.h"
#include "Cheese.h"

class PizzaIngredientFactory {
public:
    PizzaIngredientFactory() {

    }

    virtual Sauce* createSauce() = 0;
    virtual Cheese* createCheese() = 0;
};

class NYPizzaIngredientFactory: public PizzaIngredientFactory {
public:
    NYPizzaIngredientFactory() {

    }

    Sauce* createSauce() {
        return new NYSauce;
    }

    Cheese* createCheese() {
        return new NYCheese;
    }
};

class ChicagoPizzaIngredientFactory: public PizzaIngredientFactory {
public:
    ChicagoPizzaIngredientFactory() {

    }

    Sauce* createSauce() {
        return new ChicagoSauce;
    }

    Cheese* createCheese() {
        return new ChicagoSCheese;
    }
};

#endif //PIZZASTORE1_PIZZAINGREDIENTFACTORY_H
