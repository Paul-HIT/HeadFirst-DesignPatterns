cmake_minimum_required(VERSION 3.17)
project(Starbuzz)

set(CMAKE_CXX_STANDARD 14)

add_executable(Starbuzz main.cpp Beverage.cpp Beverage.h HouseBlend.cpp HouseBlend.h CondimentDecorator.cpp CondimentDecorator.h Mocha.cpp Mocha.h Whip.cpp Whip.h)