#include <iostream>
#include "owner.h"
using namespace std;

int main()
{
    Owner *owner = new Owner("ABC","PQR",35,"984562345");
    Driver *driver = new Driver("Likhitha","XYZ",24,"9743076146");
    owner->assignDriver(driver);
    cout << "Hello World!" << endl;


    delete owner,driver;
    return 0;
}


