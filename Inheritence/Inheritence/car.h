#ifndef CAR_H
#define CAR_H

class Car
{
private:
    int m_private;
protected:
    int m_protected;
public:
    int m_public;
    Car(int c_private, int c_protected, int c_public);
    Car();
    ~Car();
};

#endif // CAR_H
