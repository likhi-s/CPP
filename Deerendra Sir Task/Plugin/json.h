#ifndef JSON_H
#define JSON_H
#include <iostream>
using namespace std;
#include "fileoperations.h"


class JSON:public FileOperations
{
private:
    list<Student> readData()override;
public:
    JSON();
    ~JSON();



};

#endif // JSON_H
