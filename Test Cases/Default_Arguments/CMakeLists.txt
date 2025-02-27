cmake_minimum_required(VERSION 3.16)

project(Default_Arguments LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Default_Arguments main.cpp)

include(GNUInstallDirs)
install(TARGETS Default_Arguments
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
