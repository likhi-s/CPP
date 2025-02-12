cmake_minimum_required(VERSION 3.16)

project(using_namespace_pthinks LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(using_namespace_pthinks main.cpp
    employee.h employee.cpp
    employee1.h employee1.cpp)

include(GNUInstallDirs)
install(TARGETS using_namespace_pthinks
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
