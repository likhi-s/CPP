#include <iostream>
#include "ac.h"
#include "switch.h"
#include "wire.h"
<<<<<<< Updated upstream
#include "finolex.h"
#include "polycab.h"
#include "havells.h"

enum choice
{
    POLYCAB=1,
    FINOLEX,
    HAVELLS
=======
#include "polycab.h"
#include "finolex.h"
#include "havells.h"


enum choice
{
    POLYCAB = 1,
    FINOLEX,
    HAVELLS

>>>>>>> Stashed changes
};

using namespace std;

int main()
{
<<<<<<< Updated upstream

    Switch switch1;
    AC ac1;
    cout<<"Enter Required Wire Brand"<<endl;
    cout<<"1. Polycab"<<endl<<"2.Finolex"<<endl<<"3.Havells"<<endl;
=======
    //Wire w;
    Switch switch1;
    AC ac1;
    cout<<"which wire brand"<<endl;
    cout<<"1.Polycab"<<endl<<"2.Finolex"<<endl<<"3.Havells"<<endl;
    cout<<"Enter choice"<<endl;
>>>>>>> Stashed changes
    int choice;
    cin>>choice;
    switch(choice)
    {
    case POLYCAB:
    {
<<<<<<< Updated upstream
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
=======
        Polycab polycab;
        switch1.init(&polycab);
        ac1.setWire(&polycab);
        switch1.switchOn();
        break;
    }

    case FINOLEX:
    {
        Finolex finolex;
        switch1.init(&finolex);
        ac1.setWire(&finolex);
        switch1.switchOn();
>>>>>>> Stashed changes
        break;
    }
    case HAVELLS:
    {
<<<<<<< Updated upstream
        Havells *havells = new Havells;
        switch1.init(havells);
        ac1.setWire(havells);
        break;
    }
    default:
        cout<<"invalid choice"<<endl;
=======
        Havells havells;
        switch1.init(&havells);
        ac1.setWire(&havells);
        switch1.switchOn();
        break;
    }
    default:
        cout<<"invalid"<<endl;
>>>>>>> Stashed changes
        break;

    }

<<<<<<< Updated upstream
    switch1.switchOn();
=======

>>>>>>> Stashed changes
    return 0;
}
