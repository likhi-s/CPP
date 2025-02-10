#include <iostream>
#include "person.h"
#include "likhitha.h"

using namespace std;

int main()
{
    Person q;
    q.display();
    Likhitha l;
    l.display(q);
    l.print();

    cout << "Hello World!" << endl;
    return 0;
}
