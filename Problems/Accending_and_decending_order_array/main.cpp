#include <iostream>

using namespace std;

int main()
{
    int array[4]= {1,2,3,4};
    cout<<array[0]<< "  "<<array[1]<< "  "<<array[2]<< "  "<<array[3]<<endl;


    for(int i =0;i<3;i++)
    {
        cout<<array[i]<<" "<<array[i+1]<<endl;
        if(array[i]>array[i+1])
        {

            array[i] = array[i];

        }
        else
        {
            int temp = array[i];
            array[i] =  array[i+1];
            array[i+1] = temp;


        }
    }

    cout<<array[0]<< "  "<<array[1]<< "  "<<array[2]<< "  "<<array[3]<<endl;

    cout << "Hello World!" << endl;
    return 0;
}
