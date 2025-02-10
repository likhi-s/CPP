#include "complex.h"

Complex::Complex()
{
    cout<<"Default Constructor Called"<<endl;

}
Complex::Complex(int num)
{
    cout<<"Parameterized Constructor Called"<<endl;
    m_num = num;
}

void Complex::addfunc(const Complex &a)
{
    cout<<"...........  + Operator Called without overloading  ............. "<<endl;
    m_num = m_num +a.m_num;
    cout<<"Sum "<<m_num<<endl;
}
Complex Complex::operator +(const Complex &a)
{
    cout<<"...........  + Operator Called  ............. "<<endl;
    Complex result;
    result.m_num = this->m_num+a.m_num;
    return result;

}
Complex Complex::operator - (const Complex &a)
{
    cout<<"...........  - Operator Called ............. "<<endl;
    Complex result;
    result.m_num = this->m_num - a.m_num;
    return result;
}

Complex Complex::operator *(const Complex &a)
{
    cout<<"...........  * Operator  Called ............. "<<endl;
    Complex result;
    result.m_num = this->m_num * a.m_num;
    return result;
}
Complex Complex::operator / (const Complex &a)
{
    cout<<"...........  / Operator Called............. "<<endl;
    Complex result;
    result.m_num = this->m_num / a.m_num;
    return result;
}
Complex Complex::operator = (const Complex &a)
{
    cout<<"...........  = Operator Called............. "<<endl;
    this->m_num = a.m_num;
    return m_num;
}
bool Complex::operator >= (const Complex &a)
{
    cout<<"...........  >= Operator Called ............. "<<endl;

    if(this->m_num >= a.m_num)
    {

        return true;
    }
    else
    {

        return false;
    }

}

bool Complex::operator <= (const Complex &a)
{
    cout<<".........   <= Operator Called ............"<<endl;

    if(this->m_num <= a.m_num)
    {
        return true;
    }
    else
    {

        return false;
    }
}

bool Complex::operator == (const Complex &a)
{
    cout<<"..........   == Operator Called ..........."<<endl;

    if(this->m_num == a.m_num)
    {
        return true;
    }
    else
    {
        return false;
    }
}

Complex Complex::operator <<(const Complex &a)
{
    cout<<"..........   << Operator Called ..........."<<endl;

    Complex tempObj = this->m_num + a.m_num;
    return tempObj;
}

void Complex::printme()
{
    cout<<m_num<<endl;
}


Complex::~Complex()
{
    cout<<"Destructor called"<<endl;
}
