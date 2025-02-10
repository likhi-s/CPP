cmake_minimum_required(VERSION 3.16)

project(Demo LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Demo main.cpp
    demo.h demo.cpp
    pen.h pen.cpp
    laptop.h laptop.cpp)

include(GNUInstallDirs)
install(TARGETS Demo
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
