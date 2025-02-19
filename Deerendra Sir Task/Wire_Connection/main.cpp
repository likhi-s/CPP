#include <iostream>
#include "ac.h"
#include "switch.h"
#include "wire.h"
#include "finolex.h"
#include "polycab.h"
#include "havells.h"

enum choice
{
    POLYCAB=1,
    FINOLEX,
    HAVELLS
};

using namespace std;

int main()
{

    Switch switch1;
    AC ac1;
    cout<<"Enter Required Wire Brand"<<endl;
    cout<<"1. Polycab"<<endl<<"2.Finolex"<<endl<<"3.Havells"<<endl;
    int choice;
    cin>>choice;
    switch(choice)
    {
    case POLYCAB:
    {
        Polycab *polycab = new Polycab ;
        switch1.init(polycab);
        ac1.setWire(polycab);
        break;
    }
    case FINOLEX:
    {
        Finolex *finolex = new Finolex;
        switch1.init(finolex);
        ac1.setWire(finolex);
        break;
    }
    case HAVELLS:
    {
        Havells *havells = new Havells;
        switch1.init(havells);
        ac1.setWire(havells);
        break;
    }
    default:
        cout<<"invalid choice"<<endl;
        break;

    }

    switch1.switchOn();
    return 0;
}
