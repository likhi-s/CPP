#ifndef CAR_H
#define CAR_H
#include <iostream>
using namespace std;
#include "driver.h"


class Car
{
private:
    string m_name;
    string m_model;
    string m_Number;
    Driver *m_driver;
public:
    Car();
    ~Car();
    void assignDriver(Driver *driver);
};

#endif // CAR_H
