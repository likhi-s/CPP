cmake_minimum_required(VERSION 3.16)

project(Task_OperatorOverloading LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Task_OperatorOverloading main.cpp
    complex.h complex.cpp)

include(GNUInstallDirs)
install(TARGETS Task_OperatorOverloading
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
