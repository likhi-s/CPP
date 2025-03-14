cmake_minimum_required(VERSION 3.16)

project(VehicalRent LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(VehicalRent main.cpp
    vehical.h vehical.cpp
    bike.h bike.cpp
    car.h car.cpp
    vehicalmanagement.h vehicalmanagement.cpp
    fileoperation.h fileoperation.cpp
    rentaldetails.h rentaldetails.cpp)

include(GNUInstallDirs)
install(TARGETS VehicalRent
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
