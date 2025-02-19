#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <unordered_map>
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

    bool operator<(const Student &other) const
    {
        return m_id < other.m_id;
    }

};


template <typename K, typename V>
ostream &operator<<(ostream &out, const unordered_map<K, V> &unorderedmap)
{
    for (const auto &pair : unorderedmap)
    {
        out << pair.first << " -> Id: " << pair.second.getId()
        << ", Name: " << pair.second.getName()
        << ", Age: " << pair.second.getAge() << endl;
    }

    return out;
}

template <typename V>
ostream &operator<<(ostream &out, const set<V> &dataset)
{
    for (const auto &element : dataset)
    {
        out << "Id: " << element.getId()
        << ", Name: " << element.getName()
        << ", Age: " << element.getAge() << endl;
    }

    return out;
}

template <typename V>
ostream &operator<<(ostream &out, const unordered_set<V*> &dataset)
{
    for (const auto &element : dataset)
    {
        out << "Id: " << element->getId()
        << ", Name: " << element->getName()
        << ", Age: " << element->getAge() << endl;
    }
    return out;
}

#endif // STUDENT_H
