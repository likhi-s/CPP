cmake_minimum_required(VERSION 3.16)

project(Friend LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Friend main.cpp
    person.h person.cpp
    likhitha.h likhitha.cpp)

include(GNUInstallDirs)
install(TARGETS Friend
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
