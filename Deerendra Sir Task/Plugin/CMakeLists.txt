cmake_minimum_required(VERSION 3.16)

project(Plugin LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Plugin main.cpp
    studentmanagement.h studentmanagement.cpp
    fileoperations.h fileoperations.cpp
    csv.h csv.cpp
    json.h json.cpp
    xml.h xml.cpp)

include(GNUInstallDirs)
install(TARGETS Plugin
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
