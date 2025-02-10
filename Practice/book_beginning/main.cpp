#include <iostream>
#include "mystatic.h"

using namespace std;

int main()
{
    // int a=10;
    // int b =20;
    //  int *const ptr = &a;
    // //ptr = &a;
    // *ptr =30;
    // cout<<"*ptr:"<<*ptr<<endl;

    // MyStatic obj1,obj2,obj3;
    // obj1.a=10;
    // obj2.a=10;
    // obj3.a=10;
    // cout<<"address of obj1"<<&obj1.a<<"      address of static:"<<&obj1.staticVariable<<endl;
    // cout<<"address of obj2"<<&obj2.a<<"      address of static:"<<&obj2.staticVariable<<endl;
    // cout<<"address of obj3"<<&obj3.a<<"      address of static:"<<&obj3.staticVariable<<endl;
    //cout<<"static Value"<<MyStatic::staticVariable<<endl;
    //MyStatic::staticfun();
    MyStatic obj;
    MyStatic obj1;
    MyStatic obj2;
    MyStatic obj3;
    MyStatic obj4;
    MyStatic obj5;
    cout<<MyStatic::staticVariable<<endl;





}


/*display output in single cout statements*/
// class Marks
// {
// public:
//     int maths;
//     int physics;
//     int chemistry;
//     Marks();
// };

// Marks::Marks()
// {
//     maths =90;
//     physics =77;
//     chemistry =69;
// }


// int main()
// {
//     Marks m;
//     cout<<"Maths:"<<m.maths<<endl<<"Physics:"<<m.physics<<endl<<"Chemistry:"<<m.chemistry<<endl;
//     cout << "Hello World!" << endl;
//     return 0;
// }


/*write a program to input an integer value from Keyword and display on screen "WELLDONE" that many times*/


// int main()
// {
//     int num;
//     cout<<"Enter an integer"<<endl;
//     cin>>num;
//     for(int i=1;i<=num;i++)
//     {
//         cout<<"WELLDONE"<<endl;
//     }
// }


/*write a program to read values of a,b and c and display the value of x,where x=a/b-c.......
* and test for,
 * a=250 , b=85,c=25
 * a=300, b=70, c=70
 *
 * */


// int main()
// {
//     int a,b,c;
//     cout<<"enter a:"<<endl;
//     cin>>a;
//     cout<<"enter b:"<<endl;
//     cin>>b;
//     cout<<"enter c:"<<endl;
//     cin>>c;

//     cout<<"x:"<<a/b-c<<endl;
// }

// void swap(int a , int b);
// void swap1(int *a , int *b);
// int main()
// {

//     int a=20;
//     int b=30;
//     swap(a,b);
//     swap1(&a,&b);

// }
// void swap(int a, int b)
// {
//     int temp ;
//     temp = a;
//     a=b;
//     b= temp;
//     cout<<"Call by value"<<endl;
//     cout<<a<<b<<endl;

// }
// void swap1(int *a , int *b)
// {

//     int temp;
//     temp = *a;
//     *a = *b;
//     *b = temp;
//     cout<<"call by reference"<<endl;
//     cout<<*a<<*b<<endl;

// }

