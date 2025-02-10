cmake_minimum_required(VERSION 3.16)

project(MultiLevel_Inheritence LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(MultiLevel_Inheritence main.cpp
    student.h student.cpp
    test.h test.cpp
    result.h result.cpp)

include(GNUInstallDirs)
install(TARGETS MultiLevel_Inheritence
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
