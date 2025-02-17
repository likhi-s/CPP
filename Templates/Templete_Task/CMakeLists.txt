cmake_minimum_required(VERSION 3.16)

project(Templete_Task LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Templete_Task main.cpp
    task.h task.cpp)

include(GNUInstallDirs)
install(TARGETS Templete_Task
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
