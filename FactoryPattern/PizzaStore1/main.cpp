#include <iostream>
#include "PizzaIngredientFactory.h"
#include "PizzaStore.h"

int main() {
    PizzaStore* nyPizzaStore = new NYPizzaStore;
    nyPizzaStore->orderPizza("Cheese");
    cout << "Alice orders a Cheese pizza from NYPizzaStore." << endl;

    cout << endl;

    PizzaStore* chicagoPizzaStore = new ChicagoPizzaStore;
    chicagoPizzaStore->orderPizza("Cheese");
    cout << "Bob orders a Cheese pizza from ChicagoPizzaStore." << endl;
    return 0;
}
