#ifndef PEN_H
#define PEN_H
#include <string>

class Pen
{
public:

    std::string m_colour;
    float m_price;
    float m_length;
    Pen(std::string colour,float price,float length);
    void fun();
};

#endif // PEN_H
