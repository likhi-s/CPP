#include "student.h"


Student::Student()
{

}

Student::Student(int id,string name,int age)
{
    cout<<"Student Constructor Called"<<endl;
    m_id = id;
    m_name = name;
    m_age = age;
}
Student::~Student()
{
    cout<<"Student Destructor Called"<<endl;

}


ostream &operator <<(ostream &out, const Student &student)
{
    out<<"ID= "<<student.m_id<<endl;
    out<<"Num= "<<student.m_name<<endl;
    out<<"Age = "<<student.m_age<<endl;
    return out;
}




