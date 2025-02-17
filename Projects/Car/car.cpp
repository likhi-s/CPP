#include "car.h"

Car::Car()
{
    m_engine = new Engine;
    m_accelerator = new Accelerator;
    m_wheel = new Wheel;
    m_brake = new Brake;
    cout<<"Car Constructor called"<<endl;

}
Car::~Car()
{
    cout<<"Car Destructor called"<<endl;
}
void Car::startCar()
{
    cout<<"Starting the Car"<<endl;
    m_engine->startEngine();
}
void Car::accelerateCar()
{
    m_accelerator->speedUp(m_wheel);

}

void Car::stopCar()

{
    cout<<"Stopping  the car"<<endl;
    m_brake->applyBreak(m_wheel);
    m_accelerator->speedDown();
    m_engine->stopEngine();
}
