#include "test.h"

Test::Test()
{
    cout<<"Test Constructor called"<<endl;
}

Test::Test(int id, string name,int marks1, int marks2, int marks3):Student(id,name),m_marks1(marks1),m_marks2(marks2),m_marks3(marks3)
{
}

Test::~Test()
{
    cout<<"Test Destructor called"<<endl;

}
