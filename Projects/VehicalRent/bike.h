#ifndef BIKE_H
#define BIKE_H
#include <iostream>
using namespace std;
#include "vehical.h"

class Bike:public Vehical
{
public:
    Bike();
    ~Bike();
    Bike(int id,string model,float cost,string status,int duration);
    string getModel();
    float getCost();
    string getStatus();
    int getDuration();
    int getBikeId();
    void setStatus(string status);
    void setCost(float cost);

};

#endif // BIKE_H
