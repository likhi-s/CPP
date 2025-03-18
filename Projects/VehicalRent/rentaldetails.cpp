#include "rentaldetails.h"

RentalDetails::RentalDetails()
{
    cout<<"Rental Details constructor called"<<endl;

}

RentalDetails::~RentalDetails()
{
    cout<<"Rental Details Destructor called"<<endl;

}
void RentalDetails::initBike()
{
  m_rentedVehical = new Bike;
}
void RentalDetails::initCar()
{
    m_rentedVehical = new Car;
}

RentalDetails::RentalDetails(string name, string mobile, int age, int bookingid,string vehicalType , string paymentStatus,int id,string model,float cost,string status,int duration)/*: bike(id, model, cost, status, duration),car(id, model, cost, status, duration)*/
{
    cout<<"Rental Details Parameterized Constructor Called"<<endl;
    m_name = name;
    m_mobile = mobile;
    m_age = age;
    m_bookingId = bookingid;
    m_vehicalType = vehicalType;
    m_paymentStatus = paymentStatus;

}

string RentalDetails::getName()
{
    return m_name;
}

string RentalDetails::getMobile()
{
    return m_mobile;
}

int RentalDetails::getAge()
{
    return m_age;
}

int RentalDetails::getBookingId()
{
    return m_bookingId;
}

string RentalDetails::getVehicalType()
{
    return m_vehicalType;
}

string RentalDetails::getPaymentStatus()
{
    return m_paymentStatus;
}

int RentalDetails::getId()
{
    return m_rentedVehical->getId();
    //return car.getCarId();
}

string RentalDetails::getModel()
{
    return m_rentedVehical->getModel();
}

float RentalDetails::getCost()
{

    return m_rentedVehical-> getCost();

}

string RentalDetails::getStatus()
{
    return m_rentedVehical->getStatus();
}

int RentalDetails::getDuration()
{
    return m_rentedVehical-> getDuration();
}

// int RentalDetails::getRentalBikeId()
// {
//     return m_rentedVehical-> getId();
// }

// string RentalDetails::getBikeModel()
// {
//     return m_rentedVehical-> getModel();
// }

// float RentalDetails::getBikeCost()
// {
//     return m_rentedVehical-> getCost();
// }

// string RentalDetails::getBikeStatus()
// {
//     return m_rentedVehical -> getStatus();
// }

// int RentalDetails::getBikeDuration()
// {
//     return m_rentedVehical-> getDuration();
// }
