cmake_minimum_required(VERSION 3.16)

project(AC_task LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(AC_task main.cpp
    ac.h ac.cpp
    switch.h switch.cpp
    finolex.h finolex.cpp
    havells.h havells.cpp
    polycab.h polycab.cpp)

include(GNUInstallDirs)
install(TARGETS AC_task
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
