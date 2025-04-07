cmake_minimum_required(VERSION 3.16)

project(Q_Widget LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Q_Widget main.cpp
    qwidget.h qwidget.cpp
    qpaintevent.h qpaintevent.cpp)

include(GNUInstallDirs)
install(TARGETS Q_Widget
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
