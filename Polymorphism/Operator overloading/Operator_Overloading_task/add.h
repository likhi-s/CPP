#ifndef ADD_H
#define ADD_H
#include <iostream>
using namespace std;


class Add
{
    int m_num;
public:

    Add();
    Add(int num);
    ~Add();
    Add operator + (const Add &a);
    void printadd();

};

#endif // ADD_H
