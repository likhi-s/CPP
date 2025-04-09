#ifndef MYSPINBOX_H
#define MYSPINBOX_H
#include <iostream>
using namespace std;
#include <QSpinBox>

class MySpinBox : public QSpinBox
{
protected:
    //void paintEvent(QPaintEvent *e) override;

public:
    MySpinBox();
    ~MySpinBox();
    //bool event(QEvent *e) override;

};

#endif // MYSPINBOX_H
