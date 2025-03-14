#include "rentaldetails.h"

RentalDetails::RentalDetails()
{
    cout<<"Rental Details constructor called"<<endl;
}

RentalDetails::~RentalDetails()
{
    cout<<"Rental Details Destructor called"<<endl;

}

RentalDetails::RentalDetails(string name, string mobile, int age, int id)
{
    m_name = name;
    m_mobile = mobile;
    m_age = age;
    m_bookingId = id;
}
