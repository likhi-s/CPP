#include <iostream>
#include "student.h"
#include <list>
#include <unordered_map>
using namespace std;

int main()
{

    Student student(1,"likhitha",23);
    cout << student << endl;


    cout<<" *****Unordered Map****"<<endl;
    unordered_map<int, Student> unorderedMap =
        {
            {1, Student(1, "Likhitha", 23)},
            {2, Student(2, "Pallavi", 22)}

        };

    cout<<unorderedMap;

    cout<<"****Set****"<<endl;

    set<Student> studentSet =
        {
            Student(1, "Dharshini", 23),
            Student(2, "Likhitha", 22),
            Student(3, "Pallavi", 24)
        };
    cout << studentSet;

    cout<<"****Unordered Set****"<<endl;

    unordered_set<Student*> studentUnorderedSet;

    studentUnorderedSet.insert(new Student(1, "Dharshini", 23));
    studentUnorderedSet.insert(new Student(2, "Likhitha", 22));
    studentUnorderedSet.insert(new Student(3, "Pallavi", 24));

    cout << studentUnorderedSet;
    cout << "Hello World!" << endl;
    return 0;
}


