cmake_minimum_required(VERSION 3.16)

project(FileOperations_Class LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(FileOperations_Class main.cpp
    student.h student.cpp)

include(GNUInstallDirs)
install(TARGETS FileOperations_Class
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
