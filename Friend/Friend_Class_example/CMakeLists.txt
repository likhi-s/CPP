cmake_minimum_required(VERSION 3.16)

project(Friend_Class_example LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Friend_Class_example main.cpp
    a.h a.cpp
    b.h b.cpp)

include(GNUInstallDirs)
install(TARGETS Friend_Class_example
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
