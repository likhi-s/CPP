#include <iostream>
#include "student.h"
using namespace std;

int main()
{
    Student *student1 = new Student;
    *student1->m_age =25;
    *student1->m_contactNumber="12345646523";
    student1->printMe();
    delete student1;
    cout<<"deleted obj student 1"<<endl;
    Student *student2 = new Student;
    *student2->m_age =35;
    *student2->m_contactNumber="2656115215";
    student2->printMe();
    return 0;
}
