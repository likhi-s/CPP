#ifndef CAR_H
#define CAR_H
#include <iostream>
using namespace std;
#include "vehical.h"

class Car:public Vehical
{
public:
    Car();
    ~Car();
    Car(int id,string model,float cost,string status,int duration);
    string getModel();
    float getCost();
    string getStatus();
    int getDuration();
     int getCarId();
    void setStatus(string status);
    void setCost(float cost);

};

#endif // CAR_H
