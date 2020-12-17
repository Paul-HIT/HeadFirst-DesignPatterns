//
// Created by Paul on 2020/12/17.
//

#ifndef PIZZASTORE_PIZZA_H
#define PIZZASTORE_PIZZA_H

#include <string>
#include <vector>
#include <iostream>

using namespace std;

class Pizza {
public:
    Pizza() {

    }
    void prepare() {
        cout << "Preparing " + name << endl;
        cout << "Tossing dough..." << endl;
        cout << "Adding sauce..." << endl;
        cout << "Adding toppings..." << endl;
        vector<string>::iterator it;
        for (it = toppings.begin(); it != toppings.end(); it ++) {
            cout << "    " << (*it) << endl;
        }
    }

    void bake() {
        cout << "Bake for 25 minutes at 350" << endl;
    }

    void cut() {
        cout << "Cutting the pizza into diagonal slices" << endl;
    }

    void box() {
        cout << "Place pizza in official PizzaStore box" << endl;
    }

    string getName() {
        return name;
    }

protected:
    string name;
    string dough;
    string sauce;
    vector<string> toppings;
};

class NYStyleCheesePizza: public Pizza {
public:
    NYStyleCheesePizza() {
        name = "NY Style Sauce and Cheese Pizza";
        dough = "Thin Crust Dough";
        sauce = "Marinara Sauce";
        toppings.push_back("Grated Reggiano Cheese");
    }
};

class ChicagoStyleCheesePizza: public Pizza {
public:
    ChicagoStyleCheesePizza() {
        name = "Chicago Style Deep Dish Cheese Pizza";
        dough = "Extra Thick Crust Dough";
        sauce = "Plum Tomato Sauce";
        toppings.push_back("Shredded Mozzarella Cheese");
    }

    void cut() {
        cout << "Cutting the pizza into square slices" << endl;
    }
};

#endif //PIZZASTORE_PIZZA_H
