#include <iostream>
#include "myclass.h"
#include <memory>

using namespace std;

int main()
{

    {
        shared_ptr<MyClass>shptr1 = make_shared<MyClass>();

        cout<<"shared Count: "<<shptr1.use_count()<<endl;
        {
            shared_ptr<MyClass>shptr2 = shptr1;
            cout<<"shared Count: "<<shptr1.use_count()<<endl;
        }
        cout<<"shared Count: "<<shptr1.use_count()<<endl;
    }

    cout << "Hello World!" <<  endl;
    return 0;
}
