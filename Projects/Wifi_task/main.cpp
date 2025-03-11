#include <iostream>
#include "wifi.h"
#include "fileoperations.h"
using namespace std;

int main()
{
    list<Wifi>m_list;

    m_list.push_back(Wifi("Dharshini", 98, "Available", "1234"));
    m_list.push_back(Wifi("Pallavi", 83, "Saved", "1234"));
    m_list.push_back(Wifi("Darshan", 62, "Saved", "1234"));
    m_list.push_back(Wifi("Dimanth", 49, "Available", "1234"));
    m_list.push_back(Wifi("Pthinks", 78, "Available", "1234"));
    m_list.push_back(Wifi("Varshini", 51, "Available", "1234"));
    m_list.push_back(Wifi("Girish", 48, "Saved", "1234"));
    m_list.push_back(Wifi("Prathik", 52, "Available", "1234"));
    m_list.push_back(Wifi("Anurag", 50, "Available", "1234"));
    m_list.push_back(Wifi("Likhitha", 82, "connected", "1234"));

    enum choice{ Display =1,Connection,Exit};


    FileOperations operations;

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
            operations.writeData(m_list);
            m_list = operations.readData();
            operations.display(m_list);
            break;
        }
        case Connection:
        {
            m_list = operations.readData();
            operations.display(m_list);
            operations.wifiConnection(m_list);
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

