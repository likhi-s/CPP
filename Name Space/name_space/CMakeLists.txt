cmake_minimum_required(VERSION 3.16)

project(name_space LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(name_space main.cpp
    a.h a.cpp
    a.h a.cpp
    a.h a.cpp
    b.h b.cpp)

include(GNUInstallDirs)
install(TARGETS name_space
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
