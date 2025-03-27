cmake_minimum_required(VERSION 3.16)

project(Light_Switch_Vector LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Light_Switch_Vector main.cpp
    switch.h switch.cpp
    light.h light.cpp
    wire.h wire.cpp)

include(GNUInstallDirs)
install(TARGETS Light_Switch_Vector
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
