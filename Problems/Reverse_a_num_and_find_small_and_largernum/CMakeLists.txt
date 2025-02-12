cmake_minimum_required(VERSION 3.16)

project(Reverse_a_num_and_find_small_and_largernum LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Reverse_a_num_and_find_small_and_largernum main.cpp)

include(GNUInstallDirs)
install(TARGETS Reverse_a_num_and_find_small_and_largernum
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
