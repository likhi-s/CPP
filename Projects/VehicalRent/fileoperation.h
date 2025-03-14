#ifndef FILEOPERATION_H
#define FILEOPERATION_H
#include "bike.h"
#include "car.h"
#include "rentaldetails.h"
#include <list>

class FileOperation
{
public:
    FileOperation();
    ~ FileOperation();


    list<Bike *> readBikeData();
    list<Car *> readCarData();
    list<RentalDetails *>readRentalData();

    void writeCarData();
    void writeRentalData();
    void writeBikeData();
};

#endif // FILEOPERATION_H
