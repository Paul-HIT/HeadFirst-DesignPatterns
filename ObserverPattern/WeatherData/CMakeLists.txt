cmake_minimum_required(VERSION 3.17)
project(WeatherData)

set(CMAKE_CXX_STANDARD 14)

add_executable(WeatherData main.cpp Subject.cpp Subject.h Observer.cpp Observer.h WeatherData.cpp WeatherData.h CurrentConditionDisplay.cpp CurrentConditionDisplay.h Display.cpp Display.h)