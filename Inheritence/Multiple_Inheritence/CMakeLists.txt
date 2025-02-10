cmake_minimum_required(VERSION 3.16)

project(Multiple_Inheritence LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Multiple_Inheritence main.cpp
    phone.h phone.cpp
    camera.h camera.cpp
    music.h music.cpp
    smartphone.h smartphone.cpp)

include(GNUInstallDirs)
install(TARGETS Multiple_Inheritence
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
