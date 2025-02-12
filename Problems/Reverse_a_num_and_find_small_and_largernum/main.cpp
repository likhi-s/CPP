#include <iostream>

using namespace std;

int main()
{
    int num =0;
    cout<<"enter a number "<<endl;
    cin>>num;
    int lastDigit =0;
    int result =0;
    int largerNum =0;
    int smallerNum =9;

    while(num !=0)
    {
        lastDigit = num % 10;
        result = lastDigit + (result *10);
        num = num / 10;

        if(lastDigit>largerNum)
        {
            largerNum = lastDigit;
        }
        if(lastDigit<smallerNum)
        {
            smallerNum = lastDigit;
        }


    }
    cout<<"reversed number :"<<result<<endl;
    cout<<"larger number :"<<largerNum<<endl;
    cout<<"smaller number :"<<smallerNum<<endl;


        return 0;
}
