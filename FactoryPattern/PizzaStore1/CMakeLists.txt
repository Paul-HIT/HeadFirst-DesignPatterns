cmake_minimum_required(VERSION 3.17)
project(PizzaStore1)

set(CMAKE_CXX_STANDARD 14)

add_executable(PizzaStore1 main.cpp Pizza.h Cheese.h Sauce.h PizzaIngredientFactory.h PizzaStore.h)