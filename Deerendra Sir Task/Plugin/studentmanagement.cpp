#include "studentmanagement.h"
#include "csv.h"
#include "xml.h"
#include "json.h"

enum choice {csv=1,xml,json};
StudentManagement::StudentManagement()
{
    cout << "Student Management Constructor called" << endl;
    m_fileoperations = nullptr;

}

StudentManagement::~StudentManagement()
{
    cout << "Student Management Destructor called" << endl;

    delete m_fileoperations;
}



void StudentManagement::display()
{
    cout<< endl <<"Available formats"<< endl;
    cout<<"1.CSV"<<endl;
    cout<<"2.XML"<<endl;
    cout<<"3.JSON"<<endl<<endl;

    cout << "Enter your choice: ";

    int choice;
    cin>>choice;
    while(true)
    {
        switch(choice)
        {
        case csv:
        {
            m_fileoperations = new CSV;
            m_list = m_fileoperations->readData();
            break;
        }
        case xml:
        {
            m_fileoperations = new XML;
            m_list = m_fileoperations->readData();
            break;
        }
        case json:
        {
            m_fileoperations = new JSON;
            m_list = m_fileoperations->readData();
            break;
        }
        default:
            cout<<"Invalid choice"<<endl;
            break;
        }
        break;
    }


    for(auto i =m_list.begin();i!= m_list.end();i++)
    {
        cout<<i->getName()<<","<<i->getAge()<<","<<i->getUSN()<<","<<i->getMobileNumber()<<endl;
    }


}

