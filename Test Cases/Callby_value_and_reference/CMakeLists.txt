cmake_minimum_required(VERSION 3.16)

project(Callby_value_and_reference LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Callby_value_and_reference main.cpp)

include(GNUInstallDirs)
install(TARGETS Callby_value_and_reference
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
