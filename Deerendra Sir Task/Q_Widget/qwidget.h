#ifndef QWIDGET_H
#define QWIDGET_H

#include <iostream>
using namespace std;
class QWidget
{
protected:
    virtual paintEvent();

public:
    QWidget();
    ~QWidget();
};

#endif // QWIDGET_H
