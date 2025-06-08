cmake_minimum_required(VERSION 3.31)
project(SolarSystem_C)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 🔹 Dodaj executable z plikami źródłowymi
add_executable(SolarSystem_C-
        main.cpp
        simulation/CelestialBody.cpp
        simulation/CelestialBody.h
        simulation/SolarSystem.cpp
        simulation/SolarSystem.h
        graphics/Window.cpp
        graphics/Window.h
)

# 🔹 GLFW
find_package(PkgConfig REQUIRED)
pkg_check_modules(GLFW REQUIRED glfw3)
include_directories(${GLFW_INCLUDE_DIRS})
link_directories(${GLFW_LIBRARY_DIRS})

# 🔹 Vulkan
find_package(Vulkan REQUIRED)

# 🔹 Linkowanie bibliotek
target_link_libraries(SolarSystem_C-
        ${GLFW_LIBRARIES}
        Vulkan::Vulkan
)