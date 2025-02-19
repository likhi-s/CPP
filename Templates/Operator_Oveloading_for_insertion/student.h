
#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <unordered_map>
#include <map>
#include <set>
#include <unordered_set>

using namespace std;
#include <ostream>

class Student
{
    int m_id;
    string m_name;
    int m_age;
public:
    Student();
    Student(int id,string name,int age);
    ~Student();
    friend ostream &operator << (ostream &out, const Student &student);
    int getId() const;
    string getName()const;
    int getAge()const;

};

#endif // STUDENT_H
