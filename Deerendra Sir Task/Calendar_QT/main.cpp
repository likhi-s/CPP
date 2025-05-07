#include "MyWidget.h"
#include "MyPushbutton.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MyWidget widget;
    widget.show();
    MyPushButton button;
    button.show();
    button.setGeometry(22,52,741,212);

    return a.exec();
}
