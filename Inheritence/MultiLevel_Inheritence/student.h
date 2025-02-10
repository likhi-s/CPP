#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
using namespace std;

class Student
{
protected:
    int m_id;
    string m_name;
public:
    Student(int id,string name);
    Student();
    ~Student();

};

#endif // STUDENT_H
