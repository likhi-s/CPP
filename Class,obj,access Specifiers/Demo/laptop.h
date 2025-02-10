#ifndef LAPTOP_H
#define LAPTOP_H

#include <string>
using namespace std;


class Laptop
{
public:
    float m_price;
    string m_colour;
    float m_id;
    Laptop(float price, string colour);
    Laptop(float id);
    void display();
    void add(int a, int b);
    void add(float a, float b);
    void sub(double a, double b);
    void sub(int a ,string b);

};

#endif // LAPTOP_H
