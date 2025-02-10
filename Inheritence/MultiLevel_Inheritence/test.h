#ifndef TEST_H
#define TEST_H
#include "student.h"
class Test:public Student
{
protected:
    int m_marks1;
    int m_marks2;
    int m_marks3;
public:
    Test();
    Test(int id ,string name,int marks1,int marks2,int marks3);
    ~Test();
};

#endif // TEST_H
