cmake_minimum_required(VERSION 3.16)

project(Operator_Overloading_task LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Operator_Overloading_task main.cpp
    add.h add.cpp)

include(GNUInstallDirs)
install(TARGETS Operator_Overloading_task
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
