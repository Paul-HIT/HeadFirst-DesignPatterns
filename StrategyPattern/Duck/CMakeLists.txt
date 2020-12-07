cmake_minimum_required(VERSION 3.17)
project(Duck)

set(CMAKE_CXX_STANDARD 14)

add_executable(Duck main.cpp Behavior.h Duck.cpp Duck.h ModelDuck.cpp ModelDuck.h MallardDuck.cpp MallardDuck.h Behavior.cpp)