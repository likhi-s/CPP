cmake_minimum_required(VERSION 3.16)

project(Wire_Connection LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Wire_Connection main.cpp
    ac.h ac.cpp
    switch.h switch.cpp
    wire.h wire.cpp
    finolex.h
    havells.h
    polycab.h
    finolex.cpp
    havells.cpp polycab.cpp)

include(GNUInstallDirs)
install(TARGETS Wire_Connection
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
