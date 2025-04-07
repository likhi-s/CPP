#include "mybutton.h"

MyButton::MyButton()
{
    cout<<"MyButton Constructor Called"<<endl;
}

MyButton::~MyButton()
{
    cout<<"MyButton Destructor Called"<<endl;

}

bool MyButton::event(QEvent *e)
{
    cout<<" MyButton event function Called"<<endl;
    return true;
}

void MyButton::paintEvent(QPaintEvent *e)
{
    cout<<" MyButton PaintEvent function Called"<<endl;
}
