#include "student.h"

Student::Student(int id, string name):m_id(id),m_name(name)
{
}

Student::Student()
{
    cout<<"student constructor called"<<endl;
}

Student::~Student()
{
    cout<<"student destructor called"<<endl;

}
