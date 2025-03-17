#ifndef RENTALDETAILS_H
#define RENTALDETAILS_H
#include <iostream>
using namespace std;
#include "car.h"
#include "bike.h"
class RentalDetails
{
private:
    string m_name;
    string m_mobile;
    int m_age;
    int m_bookingId;
    string m_vehicalType;
    string m_paymentStatus;

    Bike bike;
    Car car;
public:

    RentalDetails();
    ~RentalDetails();
    RentalDetails(string name, string mobile, int age, int bookingid, string vehicalType,string paymentStatus, int id,string model, float cost, string status, int duration);
    string getName();
    string getMobile();
    int getAge();
    int getBookingId();
    string getVehicalType();
    string getPaymentStatus();

    int getRentalCarId();
    string getCarModel();
    float getCarCost();
    string getCarStatus();
    int getCarDuration();

    int getRentalBikeId();
    string getBikeModel();
    float getBikeCost();
    string getBikeStatus();
    int getBikeDuration();



};

#endif // RENTALDETAILS_H
