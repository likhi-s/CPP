#include <iostream>
#include "complex.h"

using namespace std;

int main()
{
    Complex a1(11);
    Complex a2(4);

    //without using operator overloading
    Complex obj(a1);
    obj.addfunc(a2);

    // + Operator
    Complex a3 = a1+a2;
    a3.printme();



    //- Operator
    Complex a4 = a2-a1;
    a4.printme();

    //* Operator
    Complex a5 = a2*a1;
    a5.printme();

    // / Operator
    Complex a6 = a2/a1;
    a6.printme();



    // >= Operator

    if( a2 >= a1)
    {
        cout<<"True"<<endl;
    }
    else
    {
        cout<<"False"<<endl;
    }

    //  <= Operator

    if( a2 <= a1)
    {
        cout<<"True"<<endl;
    }
    else
    {
        cout<<"False"<<endl;
    }


   //  == Operator
    if( a2 == a1)
    {
        cout<<"True"<<endl;
    }
    else
    {
        cout<<"False"<<endl;
    }


    // = Operator

    // Complex a7 = a2 = a1;
    // a7.printme();

    // << Operator

    Complex a8 = a2 << a1;
    a8.printme();






    cout << "Hello World!" << endl;
    return 0;
}
