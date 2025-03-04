#ifndef XML_H
#define XML_H
#include <iostream>
using namespace std;
#include "fileoperations.h"

class XML:public FileOperations
{
private:

    list<Student> readData();

public:
    XML();
    ~XML();
};

#endif // XML_H
