cmake_minimum_required(VERSION 3.16)

project(practice_1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(practice_1 main.cpp
    a.h a.cpp
    b.h b.cpp)

include(GNUInstallDirs)
install(TARGETS practice_1
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
