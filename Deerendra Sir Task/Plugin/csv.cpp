#include "csv.h"
#include "studentmanagement.h"
CSV::CSV()
{
    m_student = NULL;
    cout<<"CSV Constructor called"<<endl;
}
CSV::~CSV()
{
    cout<<"CSV Destructor called"<<endl;
}

void CSV::sint(StudentManagement *s)
{
    m_student = s;
}

void CSV::readData()
{

    string m_name = m_student->getname();
    int m_age = m_student->getage();
    int m_USN = m_student->getusn();
    string m_mobileNumber = m_student->getnumber();

    cout<<m_name<<","<<m_age<<","<<m_USN<<","<<m_mobileNumber<<endl;
}
