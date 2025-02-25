#include "student.h"

Student::Student()
{
    cout<<"Default Constructor of Student Called"<<endl;
}
Student::Student(int id,string name)
{
    cout<<"Parameterized Constructor of Student Called"<<endl;

    m_studentId = id;
    m_studentName= name;
}
Student::~Student()
{
    cout<<"Destructor of Student Called"<<endl;

}

int Student::getStudentId()
{
    return m_studentId;
}
string Student::getStudentName()
{
    return m_studentName;
}

void Student::setStudentName(string name)
{
    m_studentName = name;
}


