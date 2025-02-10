#include "pen.h"
#include <iostream>

using namespace std;

Pen::Pen(std::string colour,float price,float length)
{

    m_colour = colour;
    m_price = price;
    m_length = length;
}
void Pen ::fun()
{
    cout<<"Colour is green"<<endl;
}

