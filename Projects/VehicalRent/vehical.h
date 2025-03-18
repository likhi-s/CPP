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
    virtual int getId() = 0;
    virtual string getModel() = 0;
    virtual float getCost() = 0;
    virtual string getStatus() = 0;
    virtual int getDuration() =0;
    virtual void setStatus(string status) = 0 ;
    virtual void setCost(float cost) =0;


};

#endif // VEHICAL_H
