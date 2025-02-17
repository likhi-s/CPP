cmake_minimum_required(VERSION 3.16)

project(Template_function LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Template_function main.cpp
    test.h test.cpp)

include(GNUInstallDirs)
install(TARGETS Template_function
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
