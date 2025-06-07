cmake_minimum_required(VERSION 3.31)
project(SolarSystem_C)

set(CMAKE_CXX_STANDARD 20)

add_executable(SolarSystem_C- main.cpp
        CelestialBody.cpp
        CelestialBody.h
        SolarSystem.cpp
        SolarSystem.h)