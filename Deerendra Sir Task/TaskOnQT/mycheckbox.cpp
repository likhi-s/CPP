#include "mycheckbox.h"


MyCheckBox::MyCheckBox()
{
    cout<<"MyCheckBox Constructor Called"<<endl;

}
MyCheckBox::~MyCheckBox()
{
    cout<<"MyCheckBox Destructor Called"<<endl;

}
void MyCheckBox::paintEvent(QPaintEvent *e)
{
    cout<<" MyCheckBox PaintEvent function Called"<<endl;


}

bool MyCheckBox::event(QEvent *e)
{
    cout<<" MyCheckBox event function Called"<<endl;

    return true;

}
