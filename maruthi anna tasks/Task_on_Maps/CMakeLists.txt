cmake_minimum_required(VERSION 3.16)

project(Task_on_Maps LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Task_on_Maps main.cpp
    capital.h capital.cpp)

include(GNUInstallDirs)
install(TARGETS Task_on_Maps
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
