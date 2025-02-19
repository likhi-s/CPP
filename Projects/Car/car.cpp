#include "car.h"

Car::Car()
{
    cout<<"Car Constructor called"<<endl;

}
Car::~Car()
{
    cout<<"Car Destructor called"<<endl;
}

void Car::setEngine(Engine* engine)
{
    m_engine = engine;
}

void Car::setAccelerator(Accelerator* accelerator)
{
    m_accelerator = accelerator;
}

void Car::setWheel(Wheel* wheel)
{
    m_wheel = wheel;
}

void Car::setBrake(Brake* brake)
{
    m_brake = brake;
}

void Car::startCar()
{
    cout<<"Starting the Car"<<endl;
    m_engine->startEngine();
}


void Car::accelerateCar()
{
    m_accelerator->speedUp();

}

void Car::stopCar()

{
    cout<<"Stopping  the car"<<endl;
    m_brake->applyBreak();
    m_accelerator->speedDown();
    m_engine->stopEngine();
}
