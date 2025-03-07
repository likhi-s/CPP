#include "capital.h"

Capital::Capital()
{
    cout<<"Capital Default Constructor called"<<endl;

}

Capital::Capital(string capital)
{
    cout<<"Capital Parameterized Constructor called"<<endl;

    m_capital = capital;
}

Capital::~Capital()
{
    cout<<"Capital Destructor called"<<endl;

}
