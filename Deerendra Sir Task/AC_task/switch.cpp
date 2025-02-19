#include "switch.h"

Switch::Switch()
{
    cout<<"Switch Default Construtor Called"<<endl;
}

Switch::~Switch()
{
    cout<<"Switch Destrutor Called"<<endl;
}


void Switch::pinit( Polycab* polycabwire)
{
    m_polycabwire = polycabwire;
}

void Switch::finit(Finolex* finolex)
{
    m_finolexwire= finolex;
}

void Switch::switchOn()
{
    cout<<"Switch Turned On"<<endl;
    if(m_polycabwire)
    {
     m_polycabwire->wireOn();
    }
    if(m_finolexwire)
    {
        m_finolexwire->wireOn();
    }
}
