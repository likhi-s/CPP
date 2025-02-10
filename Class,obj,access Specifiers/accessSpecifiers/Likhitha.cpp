#include "Likhitha.h"

Likhitha::Likhitha()
{
    cout<<"default constructor"<<endl;
    m_age=10;
    m_address= "kolar";
    m_contactNumber ="9743076146";
    m_name = "likhitha";
    display();

}
Likhitha::Likhitha(int age, string address, string contactNumber)
{
    cout<<"parameterized Constructor"<<endl;
    m_age = age;
    m_address = address;
    m_contactNumber = contactNumber;
    display1();
}

void Likhitha ::display()
{
    cout<<m_age<<endl;
    cout<<m_address<<endl;
    cout<<m_contactNumber<<endl;
    cout<<m_name<<endl;
}
void Likhitha ::display1()
{
    cout<<m_age<<endl;
    cout<<m_address<<endl;
    cout<<m_contactNumber<<endl;
    cout<<m_name<<endl;
}
