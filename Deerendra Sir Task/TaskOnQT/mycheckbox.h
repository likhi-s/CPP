#ifndef MYCHECKBOX_H
#define MYCHECKBOX_H
#include <iostream>
using namespace std;
#include <QCheckbox>

class MyCheckBox : public QCheckBox
{
protected:
    void paintEvent(QPaintEvent *e) override;

public:
    MyCheckBox();
    ~MyCheckBox();
    bool event(QEvent *e) override;

};

#endif // MYCHECKBOX_H
