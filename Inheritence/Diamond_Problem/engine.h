#ifndef ENGINE_H
#define ENGINE_H
#include <iostream>
using namespace std;
class Engine
{
    int m_a;
    int m_b;

public:
    Engine(int a,int b);
    Engine();
    ~Engine();
    void start();
};

#endif // ENGINE_H
