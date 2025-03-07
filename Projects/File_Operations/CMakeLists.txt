cmake_minimum_required(VERSION 3.16)

project(File_Operations LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(File_Operations main.cpp
    CsvfileOperations.h CsvfileOperations.cpp
    TxtFileOperations.h TxtFileOperations.cpp
    student.h student.cpp
    studentmanagement.h studentmanagement.cpp
    fileoperations.h fileoperations.cpp)

include(GNUInstallDirs)
install(TARGETS File_Operations
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
