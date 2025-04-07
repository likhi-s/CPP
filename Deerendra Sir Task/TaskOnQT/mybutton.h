#ifndef MYBUTTON_H
#define MYBUTTON_H
#include <iostream>
using namespace std;
#include <QPushButton>

class MyButton : public QPushButton
{
protected:
    void paintEvent(QPaintEvent *e) override;
public:
    MyButton();
    ~MyButton();
    bool event(QEvent *e) override;
};

#endif // MYBUTTON_H
