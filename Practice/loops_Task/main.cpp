#include <iostream>

using namespace std;

int main()
{
    int product=1;
    int sum =0;
    int add =0;
    int start;
    cout<<"enter Starting number"<<endl;
    cin>>start;
    int end =start+29;
    cout<<"Ending number is:"<<end<<endl;

    for(int i =start;i<=end;i++)
    {
        if(i<=start+9)
        {

            product = i*product;

        }
        else if (i>=start+10 && i<=end-10)
        {

            sum = i+sum;
        }
        else if(i>=end-9  && i<=end)
        {

            add = i+add+10;

        }

    }
    cout<<"product  is  "<<product<<endl;
    cout<<"Sum  is  "<<sum<<endl;
    cout<<"sum  is(x+10)  "<<add<<endl;




        return 0;

}
