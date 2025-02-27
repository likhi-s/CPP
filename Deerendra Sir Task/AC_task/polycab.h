#ifndef POLYCAB_H
#define POLYCAB_H

#include <iostream>
using namespace std;

class AC;

class Polycab
{
    private:
    float m_thickness;
    float m_length;
    string m_colour;
    string m_brand;
    float m_price;
    AC* acptr;

public:
   Polycab();
   Polycab(float thickness, float length, string colour, string brand, float price);
   ~Polycab();
   void setMe(AC* ac);
   void wireOn();

};

#endif // POLYCAB_H
