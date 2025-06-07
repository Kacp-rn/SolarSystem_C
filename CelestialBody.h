//
// Created by kacp_r on 07.06.25.
//
#pragma once
#include <iosfwd>
#include <string>
#include <iostream>
#include <math.h>


namespace celestialbody {

    struct Vector2D{
        double x;
        double y;
    };

    class CelestialBody {

    public:
        CelestialBody(std::string c_name, double c_orbitalRadius, double c_angularVelocity, double c_angle, double c_mass);
        std::string name;
        double orbitalRadius;
        double angularVelocity;
        double angle;
        double mass;

        std::pair<double, double> getPosition() const;



    };

}