#include <iostream>

using namespace std;

int main()
{
    int size;
    cout<<"Enter Size: ";
    cin>>size;
    int array[size];

    for(int i =0;i<size;i++)
    {
        cout<<"Enter Value for "<<i<<" th index: ";
        cin>>array[i];
    }

    for(int i =0;i<size;i++)
    {
        while(i != size)
        {
            for(int j = 0; j<size;j++)
            {
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
            break;
        }

    }

    for(int i =0;i<size;i++)
    {
        cout<<array[i]<<endl;
    }
    cout << "Hello World!" << endl;
    return 0;
}
