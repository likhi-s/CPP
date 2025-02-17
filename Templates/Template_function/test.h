#ifndef TEST_H
#define TEST_H
#include <iostream>
using namespace std;

class Test
{
    int m_a;
    int m_b;
public:
    Test ();
    ~Test();
    template <typename T,typename T1>
    void add(T,T1);

};

#endif // TEST_H
