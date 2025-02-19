#include <iostream>
#include "polycab.h"
#include "finolex.h"
#include "switch.h"
#include "ac.h"
using namespace std;

int main()
{

    Switch switch1;
    AC ac1;

    cout<<"Enter Wire brand "<<endl;
    int choice;
    switch(choice)
    {
    case 1:
    {
        Polycab polycab;
        switch1.pinit(&polycab);
        ac1.setPolycabWire(&polycab);
    }
    case 2:
    {
        Finolex finolex;
        switch1.finit(&finolex);
        ac1.setFinolexWire(&finolex);
    }
    }
    switch1.switchOn();


    cout << "Hello World!" << endl;
    return 0;










}
