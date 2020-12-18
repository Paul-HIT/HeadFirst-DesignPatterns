//
// Created by Paul on 2020/12/18.
//

#ifndef PIZZASTORE1_PIZZA_H
#define PIZZASTORE1_PIZZA_H
#include <iostream>
#include "Sauce.h"
#include "Cheese.h"
#include "PizzaIngredientFactory.h"
using namespace std;

class Pizza {
public:
    Pizza() {

    }

    virtual void prepare() = 0;
    void bake() {
        cout << "Bake for 25 minutes at 350." << endl;
    }

    void cut() {
        cout << "Cutting the pizza into diagonal slices." << endl;
    }

    void box() {
        cout << "Place pizza in official PizzaStore box" << endl;
    }

    void setName(string name) {
        m_name = name;
    }

    string getName() {
        return m_name;
    }

protected:
    string m_name;
    Sauce* m_sauce;
    Cheese* m_cheese;
};

class CheesePizza: public Pizza {
public:
    CheesePizza(PizzaIngredientFactory* pizzaIngredientFactory) {
        m_pizzaIngredientFactory = pizzaIngredientFactory;
    }

    void prepare() {
        m_sauce = m_pizzaIngredientFactory->createSauce();
        m_cheese = m_pizzaIngredientFactory->createCheese();
        cout << "Prepare ingredients: ***" << m_sauce->getName() << "***, ***" << m_cheese->getName() << "***" << endl;
    }

private:
    PizzaIngredientFactory* m_pizzaIngredientFactory;
};

#endif //PIZZASTORE1_PIZZA_H
