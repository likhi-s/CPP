cmake_minimum_required(VERSION 3.16)

project(accessSpecifiers LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(accessSpecifiers main.cpp
    Likhitha.h Likhitha.cpp)

include(GNUInstallDirs)
install(TARGETS accessSpecifiers
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
