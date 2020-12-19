#include <iostream>
#include "ChocolateBoiler.h"

int main() {
    ChocolateBoiler* boiler = ChocolateBoiler::getInstance();
    if (boiler->isEmpty()) {
        boiler->fill();
        boiler->boil();
        if (boiler->isBoiled()) {
            boiler->drain();
        }
    }

    ChocolateBoiler::deleteInstance();
    return 0;
}
