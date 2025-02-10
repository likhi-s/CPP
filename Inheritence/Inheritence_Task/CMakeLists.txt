cmake_minimum_required(VERSION 3.16)

project(Inheritence_Task LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Inheritence_Task main.cpp
    a.h a.cpp
    b.h b.cpp
    c.h c.cpp
    d.h d.cpp)

include(GNUInstallDirs)
install(TARGETS Inheritence_Task
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
