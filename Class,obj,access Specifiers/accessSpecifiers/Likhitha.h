#ifndef LIKHITHA_H
#define LIKHITHA_H
#include <iostream>
using namespace std;

class Likhitha
{
private:
    //int m_age;
    string m_address;


protected:
    string m_contactNumber;

public:
    int m_age;
    string m_name;
    void display();
    void display1();
    Likhitha();
    Likhitha(int age,string address,string name);

};

#endif // LIKHITHA_H
