#include "studentmanagement.h"
#include "csv.h"
#include "txt.h"

enum Choice { csv = 1, txtFile };

StudentManagement::StudentManagement()
{
    cout << "Student Management Constructor Called" << endl;
    m_fileoperations = nullptr;
}

StudentManagement::~StudentManagement()
{
    cout << "Student Management Destructor Called" << endl;
    delete m_fileoperations;
}

void StudentManagement::display()
{
    cout << endl << "Available Formats:" << endl;
    cout << "1. CSV File" << endl;
    cout << "2. TXT File" << endl;

    cout << "Enter your choice: ";
    int choice;
    cin >> choice;

    switch (choice)
    {
    case csv:
        m_fileoperations = new CSV;
        //m_list = m_fileoperations->readData();

        break;
    case txtFile:
        m_fileoperations = new TXT;
        //m_list = m_fileoperations->readData();

        break;
    default:
        cout << "Invalid choice!" << endl;
        return;
    }

    for(auto i =m_list.begin();i!= m_list.end();i++)
    {
        cout<<i->getName()<<","<<i->getAge()<<","<<i->getUSN()<<","<<i->getMobileNumber()<<endl;
    }
}
