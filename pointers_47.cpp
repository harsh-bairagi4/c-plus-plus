#include <iostream>
using namespace std;
int main(){
    string name = "Harsh";
    string *pName = &name;
    cout<<&name<<'\n';
    cout<<pName<<'\n';
    cout<<*pName<<'\n';
    int age = 21;
    int *pAge = &age;
    cout<<pAge<<'\n';
    cout<<*pAge<<'\n';
    string freeFood[5] = {"Dosa", "Samosa", "Poha", "Kachori", "Sandwich"};
    string *pFreeFood = freeFood;
    cout<<freeFood<<'\n';
    cout<<pFreeFood<<'\n';
    cout<<*pFreeFood<<'\n';
    char a = 'B';
    char *pA = &a;
    cout<<a<<'\n';
    cout<<pA<<'\n';
    cout<<*pA<<'\n';
    
    return 0;
}