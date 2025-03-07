#include "studentmanagement.h"

enum format{TxtFile =1,CsvFile};
StudentManagement::StudentManagement()
{
    m_fileoperations =  nullptr;

}

StudentManagement::~StudentManagement()
{
    delete m_fileoperations;
}

void StudentManagement::addStudent()
{
    string name, mobile;
    int age, usn;

    cout << "Enter Name: ";
    cin >> name;
    cout << "Enter Age: ";
    cin >> age;
    cout << "Enter USN: ";
    cin >> usn;
    cout << "Enter Mobile Number: ";
    cin >> mobile;
    m_list.push_back(Student(name, age, usn, mobile));

    cout <<endl<<"Enter Required Format to save Data" <<endl;
    cout<<"1.Txt"<<endl<<"2.CSV"<<endl;

    int format;
    cin>>format;

    switch(format)
    {
    case TxtFile:
    {
        m_fileoperations = new TXTFileOpeartions;
        m_fileoperations->writeData(m_list);
        break;
    }
    case CsvFile:
    {
        m_fileoperations = new CSVFileOpeartions;
        m_fileoperations->writeData(m_list);
        break;
    }

    default:
        cout<<"Invalid Format"<<endl;
        break;

    }
}


void StudentManagement::displayStudent()
{
    cout <<endl<<"Enter Required Format" <<endl;

    cout<<"1.Txt"<<endl<<"2.CSV"<<endl;
    int format;
    cin>>format;
    switch(format)
    {
    case TxtFile:
    {
        m_fileoperations = new TXTFileOpeartions;
        m_list = m_fileoperations->readData( );

        cout<<endl <<"Data from Txt File"<<endl;

       /* for(const auto& student : m_list)
        {
            student.display();
        }*/

        for(auto i= m_list.begin();i != m_list.end();i++)
        {
            cout << "Name: " <<i->getName()<< ", Age: " << i->getAge() << ", USN: " << i->getUSN()<< ", Mobile: " << i->getMobileNumber() << endl;

        }

        break;
    }
    case CsvFile:
    {
        m_fileoperations = new CSVFileOpeartions;
        m_list = m_fileoperations->readData( );

        cout<<endl <<"Data from CSV File"<<endl;

        for(auto i= m_list.begin();i != m_list.end();i++)
        {
            cout << "Name: " <<i->getName()<< ", Age: " << i->getAge() << ", USN: " << i->getUSN()<< ", Mobile: " << i->getMobileNumber() << endl;

        }

        break;
    }
    default:
        cout<<"Invalid Format"<<endl;
        break;
    }


}


