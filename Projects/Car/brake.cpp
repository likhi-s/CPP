#include "brake.h"

Brake::Brake()
{
    cout<<"Brake constructor called"<<endl;

}

Brake::~Brake()
{
    cout<<"Brake destructor called"<<endl;

}
void Brake::setWheel(Wheel *w)
{
    m_wheel = w;
}

void Brake::applyBreak()
{
    cout<<"Applying Break"<<endl;
    m_wheel->stopWheel();
}
