#include <iostream>
#include "car.h"
using namespace std;

int main()
{
    Car car;
    Engine engine;
    Accelerator accelerator;
    Wheel wheel;
    Brake brake;

    car.setEngine(&engine);
    car.setAccelerator(&accelerator);
    car.setWheel(&wheel);
    car.setBrake(&brake);

    car.startCar();

    accelerator.setSpeedUp(&wheel);

    car.accelerateCar();

    brake.setWheel(&wheel);

    car.stopCar();

    cout << "Hello World!" << endl;
    return 0;
}
