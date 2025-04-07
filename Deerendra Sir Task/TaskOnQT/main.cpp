#include "mybutton.h"
#include "mycheckbox.h"
#include "myradiobutton.h"
#include "mytoolbutton.h"
#include "myslider.h"
#include "myscrollbar.h"
#include "mydoublespinbox.h"
#include "myspinbox.h"


#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MyButton button;
    button.show();
    MyCheckBox checkbox;
    checkbox.show();
    MyRadioButton radioButton;
    radioButton.show();
    MyToolButton toolButton;
    toolButton.show();
    MySlider silder;
    silder.show();
    MyScrollBar scrollBar;
    scrollBar.show();
    MyDoubleSpinBox doubleSpinBox;
    doubleSpinBox.show();
    MySpinBox spinbox;
    spinbox.show();


    return a.exec();
}
