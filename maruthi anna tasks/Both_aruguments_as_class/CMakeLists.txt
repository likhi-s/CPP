cmake_minimum_required(VERSION 3.16)

project(Both_aruguments_as_class LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Both_aruguments_as_class main.cpp
    state.h state.cpp
    capital.h capital.cpp)

include(GNUInstallDirs)
install(TARGETS Both_aruguments_as_class
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
