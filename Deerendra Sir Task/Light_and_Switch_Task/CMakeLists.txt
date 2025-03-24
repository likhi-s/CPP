cmake_minimum_required(VERSION 3.16)

project(Light_and_Switch_Task LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Light_and_Switch_Task main.cpp
    switch.h switch.cpp
    wire.h wire.cpp
    light.h light.cpp)

include(GNUInstallDirs)
install(TARGETS Light_and_Switch_Task
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
