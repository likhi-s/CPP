cmake_minimum_required(VERSION 3.16)

project(encapsulation_get_set LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(encapsulation_get_set main.cpp
    base.h base.cpp)

include(GNUInstallDirs)
install(TARGETS encapsulation_get_set
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
