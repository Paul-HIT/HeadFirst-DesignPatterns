cmake_minimum_required(VERSION 3.17)
project(PizzaStore)

set(CMAKE_CXX_STANDARD 14)

add_executable(PizzaStore main.cpp Pizza.cpp Pizza.h PizzaStore.cpp PizzaStore.h)