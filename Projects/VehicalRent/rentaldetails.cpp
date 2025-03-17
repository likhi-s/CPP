#include "rentaldetails.h"

RentalDetails::RentalDetails()
{
    cout<<"Rental Details constructor called"<<endl;

}

RentalDetails::~RentalDetails()
{
    cout<<"Rental Details Destructor called"<<endl;

}

RentalDetails::RentalDetails(string name, string mobile, int age, int bookingid,string vehicalType , string paymentStatus,int id,string model,float cost,string status,int duration): bike(id, model, cost, status, duration),car(id, model, cost, status, duration)
{
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

int RentalDetails::getRentalCarId()
{
    return car.getCarId();
}

string RentalDetails::getCarModel()
{
    return car.getModel();
}

float RentalDetails::getCarCost()
{

    return car.getCost();

}

string RentalDetails::getCarStatus()
{
    return car.getStatus();
}

int RentalDetails::getCarDuration()
{
    return car.getDuration();
}

int RentalDetails::getRentalBikeId()
{
    return bike.getBikeId();
}

string RentalDetails::getBikeModel()
{
    return bike.getModel();
}

float RentalDetails::getBikeCost()
{
    return bike.getCost();
}

string RentalDetails::getBikeStatus()
{
    return bike.getStatus();
}

int RentalDetails::getBikeDuration()
{
    return bike.getDuration();
}
