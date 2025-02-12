#include <iostream>

using namespace std;

int main()
{
    int array[5];
    for(int i =0; i<5;i++)
    {
        cout<<"enter value"<<endl;
        cin>>array[i];
    }
    cout<<"********************(1,2,3,4,5)->(1,4,3,2,5)**************"<<endl;

    cout<<"before swapping"<<endl;
    cout<<array[0]<<" "<<array[1]<<" "<<array[2]<<" "<<array[3]<<" "<<array[4]<<endl;
    int temp = array[1];
    array[1] = array[3];
    array[3] = temp;

    cout<<"After swapping"<<endl;
    cout<<array[0]<<" "<<array[1]<<" "<<array[2]<<" "<<array[3]<<" "<<array[4]<<endl;

    for(int i =0; i<6;i++)
    {
        cout<<"enter value"<<endl;
        cin>>array[i];
    }

    cout<<"*************(1,2,3,4,5,6)->(1,4,3,2,5,6)************"<<endl;

    cout<<"before swapping"<<endl;
    cout<<array[0]<<" "<<array[1]<<" "<<array[2]<<" "<<array[3]<<" "<<array[4]<<" "<<array[5]<<endl;
    int temp1 = array[1];
    array[1] = array[3];
    array[3] = temp1;


    cout<<"After swapping"<<endl;
    cout<<array[0]<<" "<<array[1]<<" "<<array[2]<<" "<<array[3]<<" "<<array[4]<<" "<<array[5]<<endl;


    cout<<"****************(1,4,3,2,5,6) -> (1,4,3,6,5,2)*****************"<<endl;


    cout<<"before swapping"<<endl;
    cout<<array[0]<<" "<<array[1]<<" "<<array[2]<<" "<<array[3]<<" "<<array[4]<<" "<<array[5]<<endl;
    int temp2 = array[3];
    array[3] = array[5];
    array[5] = temp2;


    cout<<"After swapping"<<endl;
    cout<<array[0]<<" "<<array[1]<<" "<<array[2]<<" "<<array[3]<<" "<<array[4]<<" "<<array[5]<<endl;


    cout << "Hello World!" << endl;
    return 0;
}
