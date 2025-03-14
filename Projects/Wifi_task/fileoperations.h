#ifndef FILEOPERATIONS_H
#define FILEOPERATIONS_H
#include <list>
#include <fstream>
#include "wifi.h"

class FileOperations
{
public:
    FileOperations();
    ~FileOperations();

    list<Wifi *> readData();
    //void writeData();


};

#endif // FILEOPERATIONS_H
