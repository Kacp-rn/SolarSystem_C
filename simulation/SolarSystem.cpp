//
// Created by kacp_r on 07.06.25.
//

#include "SolarSystem.h"

namespace solarsystem {

    SolarSystem::SolarSystem()
    {
        currentDay = 0;
    }

    void SolarSystem::addBody(const celestialbody::CelestialBody& body)
    {
        bodies.push_back(body);
    }

    void SolarSystem::setTimeScale(double f_timeScale)
    {
           timeScale = f_timeScale;
           currentDay += f_timeScale;
    }

    void SolarSystem::update()
    {
        currentDay++;
        for (auto& body : bodies) {
            body.angle += body.angularVelocity * timeScale;
        }
    }

    void SolarSystem::printPositions()
    {
        std::cout <<"Day: "<< currentDay << std::endl;

        for (auto& body : bodies) {
            auto pos = body.getPosition();
            std::cout << body.name << " " << pos.first << ", "<< pos.second << std::endl;
        }
    }

    void SolarSystem::getDay() const
    {
        std::cout<<"Day: "<< currentDay << std::endl;
    }

    void SolarSystem::SetAmountofDays(int f_Days)
    {
        max_Days = f_Days;
    }
} // solarsystem