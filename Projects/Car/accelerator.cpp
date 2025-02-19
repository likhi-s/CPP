#include "accelerator.h"


Accelerator::Accelerator()
{
    cout<<"Accelerator constructor called"<<endl;
}


Accelerator::~Accelerator()
{
    cout<<"Accelerator destructor called"<<endl;

}

void Accelerator::setSpeedUp(Wheel *w)
{
    m_wheel = w;
}


void Accelerator::speedUp()
{

    cout << "Accelerator  speed increased"<<endl;
    m_wheel ->rotateWheel();
}


void Accelerator::speedDown()

{
    cout << "Accelerator  speed decreased "<<endl;

}
