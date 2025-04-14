#ifndef OWNER_H
#define OWNER_H
#include "personaldetails.h"
#include <iostream>
#include "car.h"

using namespace std;

class Owner:public PersonalDetails
{
private:
    Car *car = new Car;
public:
    Owner();
    Owner(string name, string address, int age, string number);
    ~Owner();
    void assignDriver(Driver *driver);
};

#endif // OWNER_H
