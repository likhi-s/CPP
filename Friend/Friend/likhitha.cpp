#include "likhitha.h"
#include "person.h"

Likhitha::Likhitha()
{
    cout<<"Likhitha constructor called"<<endl;
}
Likhitha::~Likhitha()
{
    cout<<"Likhitha destructor called"<<endl;
}

// void Likhitha::display()
// {
//     cout<<"Likhitha function called"<<endl;
//     p->m_age=23;
//     p->m_name="likhitha";
//     cout<<p->m_age<<"  "<<p->m_name<<endl;
// }

void Likhitha::display(Person &q)
{

    cout<<"Likhitha function called"<<endl;
    q.m_age =25;
    q.m_name="likhitha";
    cout<<q.m_age<<"  "<<q.m_name<<endl;
}

void Likhitha::print()
{
    cout<<"print fun called"<<endl;
}
