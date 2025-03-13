#include <iostream>
#include "wifi.h"
#include "wifiOperations.h"
using namespace std;

enum choice{ Display =1,Connection,Exit};


int main()
{


    WifiOperations operations ;


    while(true)
    {
        int option;
        cout<<endl<<"1.Display"<<endl<<"2.Connection"<<endl<<"3.Exit "<<endl;
        cout<<endl<<"Enter your option"<<endl;

        cin>>option;
        switch(option)
        {
        case Display:
        {
            operations.display();
            break;
        }
        case Connection:
        {
            operations.wifiConnection();

            break;

        }
        case Exit:
            cout<<"Exiting "<<endl;
            return 0;
        default:
            cout<<"Invalid option"<<endl;
            break;


        }

    }


    cout << "Hello World!" << endl;
    return 0;
}



 // Pthinks	44	connected	1234
 //    Dharshini	45	Saved	1234
 //    Girish	29	Saved	1234
 //    Prathik	28	Saved	1234
 //    Pallavi	25	Saved	1234
 //    Anurag	79	Available	1234
 //    Darshan	72	Available	1234
 //    Likhitha 28	Available	1234
 //    Dimanth	23	Available	1234
 //    Varshini	10	Available	1234





