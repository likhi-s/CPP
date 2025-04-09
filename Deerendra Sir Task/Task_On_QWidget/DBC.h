#ifndef DBC_H
#define DBC_H
#include "ABC.h"
#include <iostream>
using namespace std;

#include <QWidget>

class DBC : public ABC
{
    Q_OBJECT

protected:
    void paintEvent(QPaintEvent *event) override;

public:

    DBC(QWidget *parent = nullptr);
    ~DBC();

    void myFunction();

};

#endif // DBC_H
