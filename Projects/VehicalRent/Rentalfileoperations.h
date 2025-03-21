#ifndef RENTALFILEOPERATIONS_H
#define RENTALFILEOPERATIONS_H
#include "RentalBikeDetails.h"
#include "RentalCarDetails.h"
#include "OnlinePayment.h"
#include "CashPayment.h"
#include "RentalDetails.h"
#include <list>

class RentalFileOperation
{
public:
    RentalFileOperation();
    ~RentalFileOperation();


    list<RentalBikeDetails*> readBikeData();
    list<RentalCarDetails*> readCarData();
    list<RentalDetails*>readRentalData();


    void writeCarData(list<RentalCarDetails*> &car);
    void writeRentalData(list<RentalDetails*> &rent);
    void writeBikeData(list<RentalBikeDetails*> &bike);




};

#endif // RENTALFILEOPERATIONS_H




































































