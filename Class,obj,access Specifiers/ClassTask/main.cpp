#include <iostream>
#include "School.h"
#include "Student.h"

using namespace std;

int main()
{
    School schoolobj(1,"likhitha",8.5f);
    Student::displayStudentInfo();
    return 0;
}

