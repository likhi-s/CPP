cmake_minimum_required(VERSION 3.16)

project(function_overloading LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(function_overloading main.cpp)

include(GNUInstallDirs)
install(TARGETS function_overloading
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
