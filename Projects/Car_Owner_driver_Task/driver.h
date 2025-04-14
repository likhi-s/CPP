#ifndef DRIVER_H
#define DRIVER_H
#include "personaldetails.h"

#include <iostream>
using namespace std;

class Driver:public PersonalDetails
{
public:
    Driver();
    ~Driver();
    Driver(string name, string address, int age, string number);
};

#endif // DRIVER_H
