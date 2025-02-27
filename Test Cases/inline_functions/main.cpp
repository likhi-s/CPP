#include <iostream>

using namespace std;


inline float mult(float x,float y)
{
    return(x*y);
}
inline double div(double p,double q)
{
    return(p/q);
}
void fun(int a,int b,int c=30)
{
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;

}
int main()
{
    float a = 12.345;
    float b =9.82;
    float c =20;
    float y = mult(a,b);
    cout<<mult(a,b)<<endl;
    cout<<y<<endl;
    cout<<div(a,b)<<endl;
    cout << "Hello World!" << endl;
    fun(a,b);
    fun(a,b,c);
    return 0;
}
