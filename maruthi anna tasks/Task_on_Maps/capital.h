#ifndef CAPITAL_H
#define CAPITAL_H
#include <iostream>
using namespace std;
class Capital
{
public:
    Capital();
    Capital(string capital);
    ~Capital();
    friend ostream& operator <<(ostream& cout,const Capital &c)
    {
        cout<<c.m_capital;
        return cout;
    }
private:
    string m_capital;


};

#endif // CAPITAL_H
