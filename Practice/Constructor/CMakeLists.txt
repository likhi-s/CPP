cmake_minimum_required(VERSION 3.16)

project(wertgyhujikol LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(wertgyhujikol main.cpp
    pen.h pen.cpp
)

include(GNUInstallDirs)
install(TARGETS wertgyhujikol
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
