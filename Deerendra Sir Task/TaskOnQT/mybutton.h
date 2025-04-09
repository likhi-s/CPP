#ifndef MYBUTTON_H
#define MYBUTTON_H
#include <iostream>
using namespace std;
#include <QPushButton>

class MyButton : public QPushButton
{
protected:
    // void paintEvent(QPaintEvent *e) override;
    // bool event(QEvent *e) override;

public:
    MyButton();
    ~MyButton();
};

#endif // MYBUTTON_H
