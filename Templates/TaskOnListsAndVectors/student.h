#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
using namespace std;

class Student
{
    int m_studentId;
    string m_studentName;

public:
    Student();
    Student(int id, string name);
    ~Student();

    int getStudentId();
    string getStudentName();
    void setStudentName(string name);
};

#endif // STUDENT_H


