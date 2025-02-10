#include "shopping.h"


Shopping::Shopping()
{
    cout<<"Shopping constructor called"<<endl;

}
Shopping::~Shopping()
{
    cout<<"Shopping Destructor called"<<endl;

}

void Shopping::search(string product,string brand)
{
    cout<<"Product:"<<product<<"      Brand:"<<brand<<endl;
}
void Shopping::search(string product,float price)
{
    cout<<"Product:"<<product<<"      Brand:"<<price<<endl;
}
