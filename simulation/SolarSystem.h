//
// Created by kacp_r on 07.06.25.
//

#include "CelestialBody.h"

namespace solarsystem {

    class SolarSystem {
    private:
        std::vector<celestialbody::CelestialBody> bodies;
        int currentDay;
        int timeScale;
        int max_Days;
    public:
        SolarSystem();
        void setTimeScale(double);
        void addBody(const celestialbody::CelestialBody& body);
        void update();
        void printPositions();
        void getDay() const;
        void SetAmountofDays(int f_Days);
    };
}