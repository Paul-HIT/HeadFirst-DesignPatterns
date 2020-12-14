#include <iostream>
#include "HouseBlend.h"
#include "Mocha.h"
#include "Whip.h"

using namespace std;

int main() {
    Beverage* houseBlend = new HouseBlend();
    cout << houseBlend->getDescription() << ", $" << houseBlend->cost() << endl;

    houseBlend = new Mocha(houseBlend);
    cout << houseBlend->getDescription() << ", $" << houseBlend->cost() << endl;

    houseBlend =  new Whip(houseBlend);
    cout << houseBlend->getDescription() << ", $" << houseBlend->cost() << endl;
    return 0;
}
