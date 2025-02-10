cmake_minimum_required(VERSION 3.16)

project(Class LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Class main.cpp
    a.h a.cpp
    b.h b.cpp)

include(GNUInstallDirs)
install(TARGETS Class
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
