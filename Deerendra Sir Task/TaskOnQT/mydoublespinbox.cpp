#include "mydoublespinbox.h"

MyDoubleSpinBox::MyDoubleSpinBox()
{
    cout<<"MyDoubleSpinBox Constructor Called"<<endl;

}

MyDoubleSpinBox::~MyDoubleSpinBox()
{
    cout<<"MyDoubleSpinBox Destructor Called"<<endl;

}
void MyDoubleSpinBox::paintEvent(QPaintEvent *e)
{
    cout<<" MyDoubleSpinBox PaintEvent function Called"<<endl;

}

bool MyDoubleSpinBox::event(QEvent *e)
{
    cout<<" MyDoubleSpinBox event function Called"<<endl;
    return true;
}
