#include "ABC.h"


ABC::ABC(QWidget *parent)
    : QWidget(parent)
{
    cout<<"ABC Constructor Called"<<endl;
}

ABC::~ABC()
{
    cout<<"ABC Destructor Called"<<endl;


}
void ABC::paintEvent(QPaintEvent *event)
{
    cout<<"ABC Paint Event Function Called"<<endl;

}

