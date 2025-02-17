#ifndef TASK_H
#define TASK_H
#include <iostream>
using namespace std;

template<typename T1,typename T2>
class Task
{
    T1 m_a;
    T2 m_b;
public:
    Task();
    Task(T1 a, T2 b);
    ~Task();
    void display();
};

#endif // TASK_H
