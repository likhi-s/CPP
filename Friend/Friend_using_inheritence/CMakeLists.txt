cmake_minimum_required(VERSION 3.16)

project(Friend_using_inheritence LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Friend_using_inheritence main.cpp
    base.h base.cpp
    derived.h derived.cpp)

include(GNUInstallDirs)
install(TARGETS Friend_using_inheritence
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
