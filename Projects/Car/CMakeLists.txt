cmake_minimum_required(VERSION 3.16)

project(Car LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Car main.cpp
    car.h car.cpp
    engine.h engine.cpp
    accelerator.h accelerator.cpp
    wheel.h wheel.cpp
    brake.h brake.cpp)

include(GNUInstallDirs)
install(TARGETS Car
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
