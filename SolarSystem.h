//
// Created by kacp_r on 07.06.25.
//

#include "CelestialBody.h"
#include <vector>

namespace solarsystem {

    class SolarSystem {
    private:
        std::vector<celestialbody::CelestialBody> bodies;
        int currentDay;
    public:
        SolarSystem();
        void addBody(const celestialbody::CelestialBody& body);
        void update();
        void printPositions();
        void getDay() const;
    };
}