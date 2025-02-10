#include "Student.h"
#include <iostream>
using namespace std;

Student::Student(int id ,string name,float gpa)
{
    cout<<"Parameterized constructor called"<<endl;
   m_id = id;
   m_name= name;
   m_gpa = gpa;

}

void Student::display()
{
    cout<<"Student Id. :"<<m_id<<endl;
    cout<<"Student Name. :"<<m_name<<endl;
    cout<<"Student Gpa. :"<<m_gpa<<endl;
}

Student::Student()
{
    cout<<"Student constructor called"<<endl;
}



void Student::displayStudentInfo( )
{
    Student obj;
    obj.display();
}

Student::~Student()
{
    cout<<"Destructor Called in Class Student"<<endl;
}
