#include <iostream>

using namespace std;
int volume(int s)
{
    return (s*s*s);
}
int volume(int r, int h)
{
    return (3.142*r*r*h);
}
int volume(int l,int b, int h)
{
    return(l*b*h);
}
int main()
{
    cout<<volume(10)<<endl;
    cout<<volume(2,3)<<endl;
    cout<<volume(4,5,6)<<endl;
    cout << "Hello World!" << endl;
    return 0;
}
