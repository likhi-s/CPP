#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
using namespace std;

class Student
{
    int m_id;
    string m_name;
    float m_gpa;

public:
    Student();
    Student(int id,string name,float gpa);
    void display();
    static void displayStudentInfo();
    ~Student();
};

#endif // STUDENT_H
