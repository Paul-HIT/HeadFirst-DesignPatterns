#include <iostream>
#include "PizzaStore.h"
#include "Pizza.h"

int main() {
    PizzaStore* nyPizzaStore = new NYPizzaStore;
    Pizza* nyCheesePizza = nyPizzaStore->orderPizza("Cheese");
    cout << "Alice orders a " << nyCheesePizza->getName() << "." << endl;

    cout << endl;

    PizzaStore* chicagoPizzaStore =  new ChicagoPizzaStore;
    Pizza* chicagoCheesePizza = chicagoPizzaStore->orderPizza("Cheese");
    cout << "Bob orders a " << chicagoCheesePizza->getName() << "." << endl;

    return 0;
}
