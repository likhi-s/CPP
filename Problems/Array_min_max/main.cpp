#include <iostream>

using namespace std;

int main()
{
    int array[4]={100,200,90,5000};
    int largerNum = array[0];
    int smallerNum = array[0];

    for(int i =0;i<=3;i++)
    {
        if (array[i]>largerNum)
        {
            largerNum = array[i];
        }

        if (array[i]<smallerNum)
        {

            smallerNum = array[i];

        }
    }


    cout<<largerNum<<endl;
    cout<<smallerNum<<endl;
    cout << "Hello World!" << endl;
    return 0;
}
