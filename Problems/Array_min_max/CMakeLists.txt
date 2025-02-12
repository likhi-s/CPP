cmake_minimum_required(VERSION 3.16)

project(Array_min_max LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Array_min_max main.cpp)

include(GNUInstallDirs)
install(TARGETS Array_min_max
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
