#include "studentmanagement.h"

StudentManagement::StudentManagement()
{
    cout<<"Student Management Constructor Called"<<endl;
}

StudentManagement::~StudentManagement()
{
    cout<<"Student Management Destructor Called"<<endl;
}
void StudentManagement::addstudent(string name,int age,int usn,string number)
{
    m_name = name;
    m_age = age;
    m_USN = usn;
    m_mobileNumber = number;

}
string StudentManagement::getname()
{
    return m_name;
}

int StudentManagement::getage()
{
    return m_age;
}

int StudentManagement::getusn()
{
    return m_USN;
}

string StudentManagement::getnumber()
{
    return m_mobileNumber;
}
