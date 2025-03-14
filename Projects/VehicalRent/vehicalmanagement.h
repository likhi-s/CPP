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

public:
    VehicalManagement();
    ~VehicalManagement();
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

    void addBikeList();

};

enum choice{Book =1,Exit };
#endif // VEHICALMANAGEMENT_H
