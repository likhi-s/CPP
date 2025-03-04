#ifndef COLLEGE_H
#define COLLEGE_H
#include "student.h"
#include "staff.h"
#include <vector>
#include <list>
#include <iostream>
#include "collegemanagement.h"
using namespace std;

class College
{
private:
    list<Student>m_student;
    vector<Staff>m_staff;


public:
    College();
    ~College();

    void addStudent(int id,string name,int age,float fee);
    void deleteStudent(int id);
    void updateStudent(int id);
    void findStudent(int id);
    void displayStudentData();

    void addStaff(int id,string name,int age,float salary,int number,int experience);
    void deleteStaff(int id);
    void updateStaff(int id);
    void findStaff(int id);
    void displayStaffData();
};

#endif // COLLEGE_H


