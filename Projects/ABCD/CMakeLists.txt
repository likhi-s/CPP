cmake_minimum_required(VERSION 3.16)

project(ABCD LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(ABCD main.cpp
    a.h a.cpp
    b.h b.cpp
    c.h c.cpp
)

include(GNUInstallDirs)
install(TARGETS ABCD
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
