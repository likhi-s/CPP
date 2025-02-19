cmake_minimum_required(VERSION 3.16)

project(Operator_Oveloading_for_insertion LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Operator_Oveloading_for_insertion main.cpp
    student.h student.cpp)

include(GNUInstallDirs)
install(TARGETS Operator_Oveloading_for_insertion
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
