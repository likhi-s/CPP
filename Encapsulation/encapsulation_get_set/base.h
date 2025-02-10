#ifndef BASE_H
#define BASE_H
#include <iostream>
using namespace std;

class Base
{
protected:
    string m_name;
private:
    int m_age;
public:

    Base();
    ~Base();
    int getage();
    void setage(int age);
    void display();
    string getname();
    void setname(string name);


};

#endif // BASE_H
