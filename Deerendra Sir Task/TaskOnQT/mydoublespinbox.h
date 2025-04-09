#ifndef MYDOUBLESPINBOX_H
#define MYDOUBLESPINBOX_H
#include <iostream>
using namespace std;

#include <QDoubleSpinBox>

class MyDoubleSpinBox : public QDoubleSpinBox
{
protected:
    //void paintEvent(QPaintEvent *e) override;

public:
    MyDoubleSpinBox();
    ~MyDoubleSpinBox();
   // bool event(QEvent *e) override;

};

#endif // MYDOUBLESPINBOX_H
