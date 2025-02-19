#ifndef CAR_H
#define CAR_H
#include <iostream>
using namespace std;
#include "engine.h"
#include "accelerator.h"
#include "wheel.h"
#include "brake.h"

class Car
{
    Engine *m_engine;
    Accelerator* m_accelerator;
    Wheel* m_wheel;
    Brake* m_brake;

    string m_colour;
    string m_brand;
    string m_model;
public:
    Car();
    ~Car();


    void setEngine(Engine* engine);
    void setAccelerator(Accelerator* accelerator);
    void setWheel(Wheel* wheel);
    void setBrake(Brake* brake);

    void startCar();
    void accelerateCar();
    void stopCar();

    // void stopCar();
};

#endif // CAR_H
