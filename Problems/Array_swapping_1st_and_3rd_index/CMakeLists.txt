cmake_minimum_required(VERSION 3.16)

project(Array_swapping_1st_and_3rd_index LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Array_swapping_1st_and_3rd_index main.cpp)

include(GNUInstallDirs)
install(TARGETS Array_swapping_1st_and_3rd_index
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
