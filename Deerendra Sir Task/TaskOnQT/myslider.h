#ifndef MYSLIDER_H
#define MYSLIDER_H
#include <iostream>
using namespace std;
#include <QSlider>

class MySlider : public QSlider
{
protected:
    //void paintEvent(QPaintEvent *e) override;

public:
    MySlider();
    ~MySlider();
    //bool event(QEvent *e) override;

};

#endif // MYSLIDER_H
