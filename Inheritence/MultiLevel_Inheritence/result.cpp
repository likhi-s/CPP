#include "result.h"

Result::Result()
{
    cout<<"result constructor called"<<endl;
}

Result::Result(int id,string name,int marks1, int marks2, int marks3):Test(id,name,marks1,marks2,marks3)
{

}
Result::~Result()
{
    cout<<"result destructor called"<<endl;

}

void Result::showresult()
{
    m_total = m_marks1+m_marks2+m_marks3;
    m_avg = m_total/3;
    cout<<"**********Result*********"<<endl;
    cout<<"Student Id:"<<m_id<<endl;
    cout<<"Student Name:"<<m_name<<endl;
    cout<<"*******Marks*******"<<endl;
    cout<<"English:"<<m_marks1<<endl;
    cout<<"Kannada:"<<m_marks2<<endl;
    cout<<"Hindi:"<<m_marks3<<endl;

    cout<<"Total Marks:"<<m_total<<endl;
    cout<<"Average Marks:"<<m_avg<<endl;

}

