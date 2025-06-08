#include <iostream>
#include "simulation/CelestialBody.h"
#include "simulation/SolarSystem.h"

#include <chrono>
#include <thread>

using namespace celestialbody;

char choise;
int Days = 0;
double m_timeScale = 1.0;

int main() {

    CelestialBody sun("Sun", 0.0, 0.0, 0.0, 1.989e30);
    CelestialBody mercury("Mercury", 0.387, 0.0714, 0.0, 3.301e23);
    CelestialBody venus("Venus", 0.723, 0.0279, 0.0, 4.867e24);
    CelestialBody earth("Earth", 1.0, 0.0172, 0.0, 5.972e24);
    CelestialBody mars("Mars", 1.524, 0.00915, 0.0, 6.417e23);
    CelestialBody jupiter("Jupiter", 5.204, 0.00145, 0.0, 1.898e27);
    CelestialBody saturn("Saturn", 9.582, 0.00058, 0.0, 5.683e26);
    CelestialBody uranus("Uranus", 19.201, 0.00020, 0.0, 8.681e25);
    CelestialBody neptune("Neptune", 30.047, 0.00010, 0.0, 1.024e26);

    solarsystem::SolarSystem Uklad;
    Uklad.addBody(sun);
    Uklad.addBody(mercury);
    Uklad.addBody(venus);
    Uklad.addBody(earth);
    Uklad.addBody(mars);
    Uklad.addBody(jupiter);
    Uklad.addBody(saturn);
    Uklad.addBody(uranus);
    Uklad.addBody(neptune);

    do {
        std::cout << "1. Print positions" << std::endl;
        std::cout<<"2. Set time scale" << std::endl;
        std::cout<<"3. Set how long the simulation should last"<<std::endl;
        std::cout<<"4. Execute the simulation"<<std::endl;
        std::cout<<"5. Exit"<<std::endl;
        std::cin >> choise;

        switch(choise)
        {
            case '1':{
                Uklad.printPositions();
                break;
            }
            case '2': {
                std::cin>>m_timeScale;
                Uklad.setTimeScale(m_timeScale);
                break;
            }
            case '3':{
                std::cin>>Days;
                Uklad.SetAmountofDays(Days);
                break;
            }
            case '4': {
                for (int i = 0; i < Days; i++)
                {
                    Uklad.update();
                    Uklad.printPositions();
                }
                break;
            }
            case '5':{std::cout << "Goodbye!" << std::endl; break;}
            default:{std::cout << "Wrong key pressed!" << std::endl;}
        }


    }while(choise != '5');

    return 0;
}