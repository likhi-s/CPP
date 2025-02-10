#ifndef A_H
#define A_H

class A
{
private:
   int m_real;
public:

    A();
    A(int real);
    A operator = (const A &obj);
    A operator + (const A &obj);

    void printme();
};

#endif // A_H
