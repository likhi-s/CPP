#include <iostream>
#include <list>
using namespace std;

int main()
{

    list <float> list1;

    list1.push_back(1.1);
    list1.push_back(2.2);
    list1.push_back(3.3);
    list1.push_back(4.4);
    list1.push_back(5.5);
    list1.push_back(6.6);
    cout<<"*************before******************"<<endl;

    for(float i:list1)
    {
        cout<<i<<endl;
    }
    list1.remove(6.6);
    list1.push_front(0.0);
    list1.push_back(7.7);
    cout<<"************after*************"<<endl;

    for(float i:list1)
    {

        cout<<i<<endl;

    }
    cout<<"reverse  "<<list1.reverse()<<endl;


    cout<<"front "<<list1.front()<<endl;
    cout<<"back "<<list1.back()<<endl;
    cout << "Hello World!" << endl;
    return 0;
}
