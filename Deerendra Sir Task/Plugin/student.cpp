#include "student.h"

Student::Student()
{
    cout<<"Student Default constructor Called"<<endl;

}
Student::~Student()
{
    cout<<"Student Destructor Called"<<endl;

}
Student::Student(string name,int age,int usn,string number)
{
    cout<<"Student Parameterized constructor Called"<<endl;

    m_name = name;
    m_age = age;
    m_USN = usn;
    m_mobileNumber = number;

}

string Student::getName()
{
    return m_name;
}

int Student::getAge()
{
    return m_age;
}

int Student::getUSN()
{
    return  m_USN;
}

string Student::getMobileNumber()
{
    return m_mobileNumber;
}

