#include "task.h"
template<typename T1, typename T2>

Task<T1,T2>::Task() {}

template<typename T1, typename T2>
Task<T1,T2>::Task(T1 a, T2 b)
{
    m_a = a;
    m_b = b;
}
template<typename T1, typename T2>

Task<T1,T2>::~Task() {}

template<typename T1, typename T2>

void Task<T1,T2>::display()
{
    cout<<m_a<<" "<<m_b<<endl;
}

template class Task <int,int>;
template class Task <int,float>;
