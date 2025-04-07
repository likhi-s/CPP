#include "QpaintEvent.h"
#include <QPaintDevice>
#include "abc.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QWidget widget;
    widget.show();
    QObject object;

 //  QPaintDevice paintdevice;        ->abstract Class

    QPaintEvent event;
    event.paintEvent();

    return a.exec();
}
