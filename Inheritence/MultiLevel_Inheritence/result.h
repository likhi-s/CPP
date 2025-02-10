#ifndef RESULT_H
#define RESULT_H
#include "test.h"
#include <iostream>
using namespace std;

class Result:public Test
{
    int m_total;
    float m_avg;
public:
    Result();
    Result(int id, string name,int marks1,int marks2,int marks3);
    ~Result();
    void showresult();

};

#endif // RESULT_H
