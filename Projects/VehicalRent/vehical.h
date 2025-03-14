#ifndef VEHICAL_H
#define VEHICAL_H
#include <iostream>
using namespace std;
class Vehical
{
protected:
    int m_id;
    string m_model;
    float m_cost;
    string m_status;
    int m_duration;

public:
    Vehical();
    ~Vehical();
};

#endif // VEHICAL_H
