#include <iostream>
using namespace std;

int myNum = 3;

void printName();

int main()
{
    int myNum = 1;
    printName();
    cout<< myNum << '\n';
    cout<< ::myNum << '\n';
    return 0;
}
void printName(){
    int myNum = 2;
    cout<< myNum<< '\n';
}