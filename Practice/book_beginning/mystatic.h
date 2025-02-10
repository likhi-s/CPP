#ifndef MYSTATIC_H
#define MYSTATIC_H

class MyStatic
{
public:
    int a;
    static int staticVariable;
    static void staticfun();
    void nonStaticfun();

    MyStatic();
};

#endif // MYSTATIC_H
