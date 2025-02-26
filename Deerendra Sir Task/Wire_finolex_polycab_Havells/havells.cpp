#include "havells.h"

Havells::Havells()
{
    cout<<"Havells Constructor called"<<endl;
    b = new int[200];
}

Havells::~Havells()
{
    cout<<"Havells Destructor called"<<endl;
    delete b;

}
