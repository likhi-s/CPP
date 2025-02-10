cmake_minimum_required(VERSION 3.16)

project(Operator_ LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Operator_ main.cpp
    base.h base.cpp)

include(GNUInstallDirs)
install(TARGETS Operator_
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
