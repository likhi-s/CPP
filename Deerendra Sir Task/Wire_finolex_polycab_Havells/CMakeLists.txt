cmake_minimum_required(VERSION 3.16)

project(Wire_finolex_polycab_Havells LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Wire_finolex_polycab_Havells main.cpp
    wire.h wire.cpp
    finolex.h finolex.cpp
    havells.h havells.cpp
    polycab.h polycab.cpp)

include(GNUInstallDirs)
install(TARGETS Wire_finolex_polycab_Havells
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
