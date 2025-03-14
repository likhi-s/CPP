#include "car.h"

Car::Car()
{
    cout<<"Car Constructor Called"<<endl;
}
Car::~Car()
{
    cout<<"Car Destructor Called"<<endl;

}

Car::Car(int id, string model, float cost, string status, int duration)
{
    m_id =id;
    m_model = model;
    m_cost = cost;
    m_status = status;
    m_duration = duration;

}

string Car::getModel()
{
    return m_model;
}

float Car::getCost()
{
    return m_cost;
}
int Car::getCarId()
{
    return m_id;
}
string Car::getStatus()
{
    return m_status;
}

int Car::getDuration()
{
    return m_duration;
}

void Car::setStatus(string status)
{
    m_status = status;
}

void Car::setCost(float cost)
{
    m_cost = cost;
}
