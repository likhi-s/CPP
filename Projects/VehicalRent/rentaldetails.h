#ifndef RENTALDETAILS_H
#define RENTALDETAILS_H
#include <iostream>
using namespace std;
#include "vehical.h"

class RentalDetails
{
private:
    string m_name;
    string m_mobile;
    int m_age;
    int m_bookingId;
    Vehical vehical;
public:

    RentalDetails();
    ~RentalDetails();
    RentalDetails(string name,string mobile,int age,int id);

};

#endif // RENTALDETAILS_H
