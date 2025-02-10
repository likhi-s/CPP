#include <iostream>
#include "shopping.h"
#include "discount.h"



using namespace std;

int main()
{
    Shopping sobj;
    sobj.search("Milk","Amul");
    sobj.search("Milk",23.5f);
    Discount dobj;
    dobj.apply(12);
    dobj.apply("AMKDF845");
    cout << "Hello World!" << endl;
    return 0;
}
