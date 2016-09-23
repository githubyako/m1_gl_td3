cmake_minimum_required(VERSION 2.6)
project(td3)

add_executable(td3 person.cpp main.cpp)
add_definitions(-std=c++11 -O3)
install(TARGETS td3 RUNTIME DESTINATION bin)
