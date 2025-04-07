#include "ABC.h"
#include "DBC.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QWidget w;
    w.show();
    QObject object;
    //QPaintDevice paintDevice;

    QWidget* widget = new DBC;
    DBC* derived = static_cast<DBC*>(widget);

    derived->myFunction();
    derived->show();

    return a.exec();
}
