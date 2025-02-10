cmake_minimum_required(VERSION 3.16)

project(ClassTask LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(ClassTask main.cpp
    Student.h Student.cpp
    School.h School.cpp)

include(GNUInstallDirs)
install(TARGETS ClassTask
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
