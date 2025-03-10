#ifndef FILEOPERATIONS_H
#define FILEOPERATIONS_H
#include "wifi.h"
#include <list>

class FileOperations
{
public:
    FileOperations();
    ~FileOperations();
    list<Wifi>readData();
    void writeData(list<Wifi> &data);
    void display(list <Wifi> &list);

    void sortWiFiList(list<Wifi> &list);
};

#endif // FILEOPERATIONS_H
