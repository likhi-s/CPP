#ifndef RENTALDETAILS_H
#define RENTALDETAILS_H
#include <iostream>
#include "car.h"
#include "bike.h"
#include "paymentmode.h"

using namespace std;

class RentalDetails
{

public:

    RentalDetails();
    RentalDetails(string name, string mobile, int age, int bookingid, string vehicalType, string paymentType, Vehical *rentedVehical, PaymentMode *payment);
    ~RentalDetails();

    string getName();
    string getMobile();
    int getAge();
    int getBookingId();
    string getVehicalType();
    string getPaymentType();
    string getUPIid();
    float getAmount();
    float getBalance();
    string getPaymentStatus();
    int getTransactionId();


    int getId();
    string getModel();
    float getCost();
    string getStatus();
    int getDuration();




private:
    string m_name;
    string m_mobile;
    int m_age;
    int m_bookingId;
    string m_vehicalType;
    string m_paymentType;
    Vehical *m_rentedVehical;
    PaymentMode *m_payment;
};


#endif // RENTALDETAILS_H
