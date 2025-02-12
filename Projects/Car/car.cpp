#include "car.h"

Car::Car()
{
    cout<<"Car Constructor called"<<endl;

    m_engine = new Engine;
    m_accelerator = new Accelerator;
    m_wheel = new Wheel;
    m_brake = new Brake;
}
Car::~Car()
{
    cout<<"Car Destructor called"<<endl;
}
void Car::startCar()
{
    cout<<"Starting the Car"<<endl;
    m_engine->startEngine();
    m_accelerator->speedUp();
    m_wheel->rotateWheel();
}

void Car::stopCar()

{
    cout<<"Stopping  the car"<<endl;
    m_brake->applyBreak(m_wheel);
    m_accelerator->speedDown();
    m_engine->stopEngine();
}
