#ifndef MYSCROLLBAR_H
#define MYSCROLLBAR_H
#include <iostream>
using namespace std;
#include <QScrollBar>

class MyScrollBar : public QScrollBar
{
protected:
    //void paintEvent(QPaintEvent *e) override;
public:
    MyScrollBar();
    ~MyScrollBar();
    //bool event(QEvent *e) override;


};

#endif // MYSCROLLBAR_H
