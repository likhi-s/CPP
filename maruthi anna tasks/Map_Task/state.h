#ifndef STATE_H
#define STATE_H
#include <iostream>
using namespace std;
class State
{
public:
    string m_capital;

    State();
    State(string capital);
    ~State();
    friend ostream& operator<<(ostream& cout, const State& s)
    {
        cout << s.m_capital;
        return cout;
    }
};

#endif // STATE_H
