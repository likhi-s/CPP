#include "student.h"


Student::Student()
{

}

Student::Student(int id,string name,int age)
{
    m_id = id;
    m_name = name;
    m_age = age;
}
Student::~Student() {}


int Student::getId() const
{
    return m_id;
}

string Student::getName() const
{
    return m_name;
}

int Student::getAge() const
{
    return m_age;
}

ostream &operator <<(ostream &out, const Student &student)
{
    out<<"Id = "<<student.getId()<<endl;
    out<<"Num= "<<student.getName()<<endl;
    out<<"Age = "<<student.getAge()<<endl;
    return out;
}
