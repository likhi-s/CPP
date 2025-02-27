cmake_minimum_required(VERSION 3.16)

project(inline_functions LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(inline_functions main.cpp)

include(GNUInstallDirs)
install(TARGETS inline_functions
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
