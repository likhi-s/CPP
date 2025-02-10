cmake_minimum_required(VERSION 3.16)

project(Inheritence LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Inheritence main.cpp
    car.h car.cpp
    bmw.h bmw.cpp
    benz.h benz.cpp)

include(GNUInstallDirs)
install(TARGETS Inheritence
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
