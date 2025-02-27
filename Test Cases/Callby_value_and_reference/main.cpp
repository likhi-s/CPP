#include <iostream>

using namespace std;
void fun1(int a)
{
    //cout<<"a:"<<a<<endl;
    a=20;
    cout<<"a:"<<a<<endl;

}
void fun2(int *b)
{
    //cout<<"b:"<<*b<<endl;
    *b = 20;
    cout<<"b:"<<*b<<endl;
}

int main()
{
    int a = 10;
    int b =10;
    fun1(a);
    fun2(&b);
    cout << "Hello World!" << endl;
    return 0;
}
