#include "myscrollbar.h"


MyScrollBar::MyScrollBar()
{
    cout<<"MyScrollBar Constructor Called"<<endl;

}

MyScrollBar::~MyScrollBar()
{
    cout<<"MyScrollBar Destructor Called"<<endl;

}
void MyScrollBar::paintEvent(QPaintEvent *e)
{
    cout<<" MyScrollBar PaintEvent function Called"<<endl;

}

bool MyScrollBar::event(QEvent *e)
{
    cout<<" MyScrollBar event function Called"<<endl;
    return true;
}
