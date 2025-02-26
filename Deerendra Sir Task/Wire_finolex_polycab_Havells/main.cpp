#include <iostream>
using namespace std;
#include "wire.h"
#include "polycab.h"
#include "havells.h"
#include "finolex.h"

int main()
{
    Wire *wire;
    wire = new Polycab;
    delete wire;
    wire = new Finolex;
    delete wire;
    wire = new Havells;
    delete wire;
    cout << "Hello World!" << endl;
    return 0;
}
