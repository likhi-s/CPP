cmake_minimum_required(VERSION 3.16)

project(In_Array_to_check_even LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(In_Array_to_check_even main.cpp)

include(GNUInstallDirs)
install(TARGETS In_Array_to_check_even
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
