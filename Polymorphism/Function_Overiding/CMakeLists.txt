cmake_minimum_required(VERSION 3.16)

project(Function_Overiding LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Function_Overiding main.cpp
    base.h base.cpp
    derived.h derived.cpp)

include(GNUInstallDirs)
install(TARGETS Function_Overiding
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
