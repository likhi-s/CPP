#include <iostream>
#include <vector>
using namespace std;


bool ascendingCompare(int a, int b)
{
    return a < b;
}

bool decendingCompare(int a , int b)
{
    return a > b;
}
void customSort(vector<int>& numbersVector,bool(*compareFuncPtr)(int ,int))
{
    for(int startIndex = 0; startIndex < numbersVector.size();startIndex++)
    {
        int bestIndex = startIndex;
        for(int currentIndex = startIndex + 1 ;currentIndex < numbersVector.size();currentIndex++)
        {
            if(compareFuncPtr(numbersVector[currentIndex],numbersVector[bestIndex]))
                bestIndex = currentIndex;
        }
        swap(numbersVector[startIndex],numbersVector[bestIndex]);
    }
}

/*void sortAcending(vector<int>& numbersVector)
{
    for(int startIndex = 0; startIndex < numbersVector.size();startIndex++)
    {
        int bestIndex = startIndex;
        for(int currentIndex = startIndex + 1 ;currentIndex < numbersVector.size();currentIndex++)
        {
            if(ascendingCompare(numbersVector[currentIndex],numbersVector[bestIndex]))
                bestIndex = currentIndex;
        }
        swap(numbersVector[startIndex],numbersVector[bestIndex]);
    }
}
void sortDecending(vector<int>& numbersVector)
{
    for(int startIndex = 0; startIndex < numbersVector.size();startIndex++)
    {
        int bestIndex = startIndex;
        for(int currentIndex = startIndex + 1 ;currentIndex < numbersVector.size();currentIndex++)
        {
            if(decendingCompare(numbersVector[currentIndex],numbersVector[bestIndex]))
                bestIndex = currentIndex;
        }
        swap(numbersVector[startIndex],numbersVector[bestIndex]);
    }
}*/
void printNumbers(vector<int>& numbersVector)
{
    for(int i = 0; i < numbersVector.size();++i)
    {
        cout<<numbersVector[i]<< ' ';
    }
    cout<<endl;
}

int main()
{
    vector<int>myNumbers = {2,5,1,3,6,4};
    cout<<"ascending"<<endl;
    bool(*funcptr)(int,int) = ascendingCompare;
    customSort(myNumbers,funcptr);
    printNumbers(myNumbers);
    cout<<"decending"<<endl;
    bool(*funcptr1)(int,int) = decendingCompare;
    customSort(myNumbers,funcptr1);
    printNumbers(myNumbers);
    return 0;

}
/*int getNumber()
{
    return 10;
}

int add(int a ,int b)
{
    return a+b;
}
int main()
{
    int(*funptr)() = getNumber;
    cout<<funptr()<<endl;

    int(*funcptr)(int,int) = add;
    cout<<add(10,10)<<endl;
    cout<<funcptr(10,20)<<endl;
    cout << "Hello World!" << endl;
    return 0;
}*/
