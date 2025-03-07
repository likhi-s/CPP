#ifndef STUDENT_H
#define STUDENT_H
#include <sstream>
#include <fstream>
#include <sstream>
#include <iostream>
using namespace std;
class Student
{
public:
    Student();
    ~Student();
    void writeToFile(const string& filename);
    void readFromFile(const string& filename);
    Student(string name, int age, float grade);
private:
    string m_name;
    int m_age;
    float m_grade;

};

#endif // STUDENT_H
