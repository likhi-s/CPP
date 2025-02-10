#include <iostream>
#include "result.h"

using namespace std;

int main()
{
    Result obj(1,"likhitha",25,30,35);
    Result obj1(2,"pallavi",30,35,40);
    obj.showresult();
    obj1.showresult();

    cout << "Hello World!" << endl;
    return 0;
}
