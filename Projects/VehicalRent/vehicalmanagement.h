#ifndef VEHICALMANAGEMENT_H
#define VEHICALMANAGEMENT_H
#include "fileoperation.h"
#include "vehical.h"
#include "bike.h"
#include "car.h"
#include <list>

class VehicalManagement
{
private:
    FileOperation *fileoperations;
    list<Bike*>m_bikeList;
    list<Car*>m_carList;
    list<RentalDetails*>m_rentalList;

public:
    VehicalManagement();
    ~VehicalManagement();
    void operations();
    void bookBike();
    void bookCar();
    void returnBike();
    void returnCar();
    void displayBike();
    void displayCar();
    void rentalHistory();
    void addBike();
    void addCar();
    void updateCarRent();
    void updateBikeRent();


};

enum choice{Book =1,Exit };
#endif // VEHICALMANAGEMENT_H
