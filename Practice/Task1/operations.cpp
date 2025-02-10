#include "operations.h"
#include <iostream>

using namespace std;

Operations::Operations()
{

}


void Operations::add(int a, int b)
{
    cout << "Integer Sum: " << a + b << endl;
}
int Operations::add(int a, int b)
{
    cout << "Integer Sum: " << a + b << endl;
}

void Operations::add(float a, float b)
{
    cout << "Float Sum: " << a + b << endl;
}

void Operations::add(double a, double b)
{
    cout << "Double Sum: " << a + b << endl;
}

void Operations::add(int a, int b, int c)
{
    cout << "Integer Sum (3 i/p): " << a + b + c << endl;
}

void Operations::add(float a, float b, float c)
{
    cout << "Float Sum (3 i/p): " << a + b + c << endl;
}

void Operations::add(double a, double b, double c)
{
    cout << "Double Sum (3 i/p): " << a + b + c << endl;
}

void Operations::add()
{
    int a, b;
    cout << "Enter two numbers for addition: ";
    cin >> a >> b;
    cout << "Sum: " << a + b << endl;
}

void Operations::sub(int a, int b)
{
    cout << "Integer Difference: " << a - b << endl;
}

void Operations::sub(float a, float b)
{
    cout << "Float Difference: " << a - b << endl;
}

void Operations::sub(double a, double b)
{
    cout << "Double Difference: " << a - b << endl;
}

void Operations::sub(int a, int b, int c)
{
    cout << "Integer Difference (3 i/p): " << a - b - c << endl;
}

void Operations::sub(float a, float b, float c)
{
    cout << "Float Difference (3 i/p): " << a - b - c << endl;
}

void Operations::sub(double a, double b, double c)
{
    cout << "Double Difference (3 i/p): " << a - b - c << endl;
}

void Operations::sub()
{
    int a, b;
    cout << "Enter two integers for subtraction: ";
    cin >> a >> b;
    cout << "Difference: " << a - b << endl;
}
