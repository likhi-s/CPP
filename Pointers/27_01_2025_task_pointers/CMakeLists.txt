cmake_minimum_required(VERSION 3.16)

project(27_01_2025_task_pointers LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(27_01_2025_task_pointers main.cpp
    student.h student.cpp)

include(GNUInstallDirs)
install(TARGETS 27_01_2025_task_pointers
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
