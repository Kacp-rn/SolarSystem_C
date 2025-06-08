//
// Created by kacp_r on 07.06.25.
//

#include "CelestialBody.h"

namespace celestialbody {

    std::pair<double, double> CelestialBody::getPosition() const
    {
        double posX = orbitalRadius * cos(angle);
        double posY = orbitalRadius * sin(angle);

        return std::make_pair(posX, posY);
    }

    CelestialBody::CelestialBody(std::string c_name, double c_orbitalRadius, double c_angularVelocity, double c_angle, double c_mass) {
        name = c_name;
        orbitalRadius = c_orbitalRadius;
        angularVelocity = c_angularVelocity;
        angle = c_angle;
        mass = c_mass;
    }

}