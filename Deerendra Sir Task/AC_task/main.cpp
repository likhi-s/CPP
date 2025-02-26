#include <iostream>
#include "polycab.h"
#include "finolex.h"
#include "switch.h"
#include "ac.h"
#include "havells.h"
using namespace std;

enum choice
{
    POLYCAB=1,FINOLEX,HAVELLS
};

int main()
{

    Switch switch1;
    AC ac1;
    cout<<"Enter Wire brand "<<endl;
    int choice;
    cin>>choice;

    switch(choice)
    {
    case POLYCAB:
    {
        Polycab polycab;
        switch1.pinit(&polycab);
        ac1.setPolycabWire(&polycab);
        break;
    }
    case FINOLEX:
    {
        Finolex finolex;
        switch1.finit(&finolex);
        ac1.setFinolexWire(&finolex);
        break;
    }
    case HAVELLS:
    {
        Havells havells;
        switch1.hinit(&havells);
        ac1.setHavellsWire(&havells);
        break;
    }
    }
    switch1.switchOn();


    cout << "Hello World!" << endl;
    return 0;










}
