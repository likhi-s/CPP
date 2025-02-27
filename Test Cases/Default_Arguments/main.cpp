#include <iostream>
using namespace std;
void fun(const int *p)
{
    cout<<*p<<endl;
}
int main()
{
    float amount;
    float value(float p,int n,float r =0.15);
    void printline(char ch='*',int len =40);
    printline();
    amount = value(5000,5);
    cout<<endl<<"Final Value ="<<amount<<endl;
    printline('=');

    cout << "Hello World!" << endl;
    int p =30;
    fun(&p);

    return 0;
}



float value(float p,int n,float r)
{
    int year =1;
    float sum = p;
    while(year <=n)
    {
        sum = sum * (1+r);
        year = year +1;
    }
    return sum;
}
void printline(char ch, int len)
{
    for(int i =1;i<=len;i++)
        cout<<("%c",ch);
}

