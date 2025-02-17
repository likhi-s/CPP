#include "accelerator.h"


Accelerator::Accelerator()
{
    cout<<"Accelerator constructor called"<<endl;
}


Accelerator::~Accelerator()
{
    cout<<"Accelerator destructor called"<<endl;

}

void Accelerator::speedUp(Wheel *w)
{
    cout << "Accelerator  speed increased"<<endl;
    w->rotateWheel();
}

void Accelerator::speedDown()
{
    cout << "Accelerator  speed decreased "<<endl;

}
