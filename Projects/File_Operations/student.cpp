#include "student.h"

Student::Student()
{
    cout<<"Student Constructor Called"<<endl;
}
Student::Student(string name, int age, int usn, string number)
{

    m_name = name;
    m_age = age;
    m_USN = usn;
    m_mobileNumber = number;
}


Student::~Student()
{
    cout<<"Student Destructor Called"<<endl;

}



string Student::getName() const
{
    return m_name;
}

int Student::getAge() const
{
    return m_age;
}

int Student::getUSN() const
{
    return m_USN;
}

string Student::getMobileNumber() const
{
    return m_mobileNumber;
}

void Student::display()const
{
   cout << "Name: " <<m_name<< ", Age: " << m_age << ", USN: " << m_USN<< ", Mobile: " << m_mobileNumber << endl;

}
