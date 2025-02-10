cmake_minimum_required(VERSION 3.16)

project(operator_Overloading LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(operator_Overloading main.cpp
    a.h a.cpp
    assign.h assign.cpp)

include(GNUInstallDirs)
install(TARGETS operator_Overloading
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
