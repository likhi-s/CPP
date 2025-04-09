#ifndef MYRADIOBUTTON_H
#define MYRADIOBUTTON_H
#include <iostream>
using namespace std;
#include <QRadiobutton>

class MyRadioButton : public QRadioButton
{
protected:
    //void paintEvent(QPaintEvent *e) override;
public:
    MyRadioButton();
    ~MyRadioButton();
   // bool event(QEvent *e) override;

};

#endif // MYRADIOBUTTON_H
