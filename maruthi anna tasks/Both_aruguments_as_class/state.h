#ifndef STATE_H
#define STATE_H
#include <iostream>
using namespace std;

class State
{
public:
    State();
    State(string state);
    ~ State();
    bool operator<(const State& s) const
    {
        return m_state < s.m_state;
    }
    friend ostream& operator<<(ostream& cout, const State& s)
    {
        cout << s.m_state;
        return cout;
    }
private:
    string m_state;

};

#endif // STATE_H
