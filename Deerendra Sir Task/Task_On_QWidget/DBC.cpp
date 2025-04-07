#include "DBC.h"

DBC::DBC(QWidget *parent)
{
    cout<<"DBC Constructor Called"<<endl;
}

DBC::~DBC()
{
    cout<<"DBC Destructor Called"<<endl;
}

void DBC::myFunction()
{
    cout<<"DBC myFunction Called"<<endl;
}
void DBC::paintEvent(QPaintEvent *event)
{
    cout<<"DBC Paint Event Function Called"<<endl;

}
