#include "myspinbox.h"

MySpinBox::MySpinBox()
{
    cout<<"MySpinBox Constructor Called"<<endl;

}

MySpinBox::~MySpinBox()
{
    cout<<"MySpinBox Destructor Called"<<endl;

}
void MySpinBox::paintEvent(QPaintEvent *e)
{
    cout<<" MySpinBox PaintEvent function Called"<<endl;

}

bool MySpinBox::event(QEvent *e)
{
    cout<<" MySpinBox event function Called"<<endl;
    return true;
}
