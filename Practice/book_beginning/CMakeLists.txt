cmake_minimum_required(VERSION 3.16)

project(book_beginning LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(book_beginning main.cpp
    mystatic.h mystatic.cpp)

include(GNUInstallDirs)
install(TARGETS book_beginning
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
