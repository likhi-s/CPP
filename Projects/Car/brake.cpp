#include "brake.h"

Brake::Brake()
{

}

Brake::~Brake()
{

}

void Brake::applyBreak(Wheel *w)
{
    m_wheel = w;
    cout<<"Applying Break"<<endl;
    m_wheel->stopWheel();
}
