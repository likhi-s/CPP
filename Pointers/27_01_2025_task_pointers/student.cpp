#include "student.h"

Student::Student()
{
    cout<<"constructor calling"<<endl;
    m_age = new int;
    m_contactNumber = new string;
}
void Student:: printMe()
{
    cout<<*m_age<<endl;
    cout<<*m_contactNumber<<endl;

}
Student::~Student()
{
    cout<<"destructor calling"<<endl;
    delete m_age;
    cout<<"destuctor"<<endl;

    delete m_contactNumber;
    cout<<"destuctor"<<endl;
}
