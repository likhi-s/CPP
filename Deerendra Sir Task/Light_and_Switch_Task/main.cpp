#include <iostream>
#include "switch.h"

using namespace std;

int main()
{    Light light1("Green",250,"brand1");
    Light light2("Red",150,"brand2");
    Light light3("Blue",350,"brand3");

    Wire wire1(32,200,"Black","Havells",1500,&light1);
    Wire wire2(32,250,"White","Polycab",2500,&light2);
    Wire wire3(24,150,"Red","Finolex",2000,&light3);
    Switch switch1("White","Brand1",350,&wire1,&wire2,&wire3);
    switch1.switchOn();


    cout << "Hello World!" << endl;
    return 0;
}
