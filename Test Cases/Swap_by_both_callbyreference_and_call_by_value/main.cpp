#include <iostream>

using namespace std;

void swap(int a , int b)
{
    cout<<"before Swapping a:"<<a<<"and b:"<<b<<endl;
    int t = a;
    a = b;
    b = t;
    cout<<"After Swapping a:"<<a<<"and b:"<<b<<endl;
}

void swap1(int *a , int *b)
{
    cout<<"before Swapping a:"<<*a<<"and b:"<<*b<<endl;
    int t = *a;
    *a = *b;
    *b = t;
    cout<<"After Swapping a:"<<*a<<"and b:"<<*b<<endl;
}

int & max(int &x,int &y)
{
    if(x>y)
        return x;
    else
        return y;
}
int main()
{
    int m =20;
    int n =30;
    cout<<"using Call by value"<<endl;
    swap(m,n);
    cout<<"using Call by reference"<<endl;
    swap1(&m,&n);
    cout << "Hello World!" << endl;
    int c =max(m,n);
    cout<<c<<endl;
    max(m,n)=-2;
    cout<<m<<endl;

    return 0;
}
