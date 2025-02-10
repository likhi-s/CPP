#include "engine.h"

Engine::Engine(int a, int b):m_a(a),m_b(b)
{
    cout<<"Engine Parameterized constructor"<<endl;
    cout<<"m_a: "<<m_a<<"  m_b: "<<m_b<<endl;
}

Engine::Engine()
{
    cout<<"Engine Constructor called"<<endl;
}
Engine::~Engine()
{
    cout<<"Engine Destructor called"<<endl;
}
void Engine::start()
{
    cout<<"Engine Start"<<endl;
}
