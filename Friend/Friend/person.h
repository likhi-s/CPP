#ifndef PERSON_H
#define PERSON_H
#include <iostream>
using namespace std;
#include "likhitha.h"


class Person
{
    int m_age;
    string m_name;


public:
    Person();
    ~Person();
    //friend class Likhitha;
    void display();
    friend void Likhitha::display(Person &q);

};

#endif // PERSON_H
