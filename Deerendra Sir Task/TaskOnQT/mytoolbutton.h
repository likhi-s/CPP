#ifndef MYTOOLBUTTON_H
#define MYTOOLBUTTON_H
#include <iostream>
using namespace std;
#include <QToolButton>


class MyToolButton : public QToolButton
{
protected:
    void paintEvent(QPaintEvent *e) override;
public:
    MyToolButton();
    ~MyToolButton();
    bool event(QEvent *e) override;

};

#endif // MYTOOLBUTTON_H
