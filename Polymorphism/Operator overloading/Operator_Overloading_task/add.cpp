#include "add.h"

Add::Add()
{
    cout<<"Default Constructor of Add Called"<<endl;
}
Add::Add(int num)
{
    cout<<"Parameterized Constructor of Add Called"<<endl;
    m_num = num;
}
Add Add::operator +(const Add &a)
{
    Add result;
    result.m_num = this->m_num+a.m_num;
    return result;

}
void Add::printadd()
{
    cout<<" + operator called"<<endl;
    cout<<m_num <<endl;
}

Add::~Add()
{
    cout<<"Add Destructor called"<<endl;
}
