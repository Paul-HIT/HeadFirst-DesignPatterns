//
// Created by Paul on 2020/12/13.
//

#ifndef STARBUZZ_BEVERAGE_H
#define STARBUZZ_BEVERAGE_H

#include <string>

using namespace std;

class Beverage {
public:
    Beverage(string description = "Unknown Beverage");
    virtual string getDescription();
    virtual double cost() = 0;

private:
    string m_description;
};


#endif //STARBUZZ_BEVERAGE_H
