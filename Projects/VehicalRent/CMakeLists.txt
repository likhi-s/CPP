cmake_minimum_required(VERSION 3.16)

project(VehicalRent LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(VehicalRent main.cpp
    RentalvehicalDetails.h RentalvehicalDetails.cpp
    RentalBikeDetails.h RentalBikeDetails.cpp
    RentalCarDetails.h RentalCarDetails.cpp
    Rentalvehicalmanagement.h Rentalvehicalmanagement.cpp
    Rentalfileoperations.h Rentalfileoperations.cpp
    RentalDetails.h RentalDetails.cpp
    paymentmode.h paymentmode.cpp
    OnlinePayment.h OnlinePayment.cpp
    CashPayment.h CashPayment.cpp
    logindetails.h logindetails.cpp
    admindetails.h admindetails.cpp
    userdetails.h userdetails.cpp
    loginmanagementuser.h loginmanagementuser.cpp
)

include(GNUInstallDirs)
install(TARGETS VehicalRent
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
