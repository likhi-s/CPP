#ifndef ABC_H
#define ABC_H
#include <iostream>
using namespace std;

#include <QWidget>

class ABC : public QWidget
{
    Q_OBJECT

public:
    ABC(QWidget *parent = nullptr);
    ~ABC();
    void paintEvent(QPaintEvent *event) override;
};
#endif // ABC_H
