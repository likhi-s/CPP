#include <iostream>

using namespace std;

int main()
{
    int size;
    cout<<"enter Size"<<endl;
    cin>>size;
    int array[size];
    int count =0;
    for(int i =0;i<size;i++)
    {

        cout<<"enter value"<<endl;
        cin>>array[i];

        if(array[i] % 2 ==0)
        {
            count = 1;
        }

    }

    if(count ==1)
    {
        cout<<"even number is present"<<endl;

    }
    else
    {
        cout<<" even number is not present"<<endl;
    }

    return 0;
}
