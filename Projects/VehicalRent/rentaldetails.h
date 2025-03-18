#ifndef RENTALDETAILS_H
#define RENTALDETAILS_H
#include <iostream>
#include "car.h"
#include "bike.h"

using namespace std;

class RentalDetails
{
private:
    string m_name;
    string m_mobile;
    int m_age;
    int m_bookingId;
    string m_vehicalType;
    string m_paymentStatus;

    // Bike bike;
    // Car car;
     Vehical *m_rentedVehical;

public:

    RentalDetails();
    RentalDetails(string name, string mobile, int age, int bookingid, string vehicalType,string paymentStatus, int id,string model, float cost, string status, int duration);
    ~RentalDetails();

    string getName();
    string getMobile();
    int getAge();
    int getBookingId();
    string getVehicalType();
    string getPaymentStatus();

    int getId();
    string getModel();
    float getCost();
    string getStatus();
    int getDuration();

    // int getRentalBikeId();
    // string getBikeModel();
    // float getBikeCost();
    // string getBikeStatus();
    // int getBikeDuration();



    void initBike();
    void initCar();
};

#endif // RENTALDETAILS_H
