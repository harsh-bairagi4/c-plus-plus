#include <iostream>
using namespace std;
void printInfo(const string name, const int age);
int main(){
    string name = "Harsh";
    int age = 21;

    printInfo(name, age);

    return 0;
}
void printInfo(const string name, const int age){
    name = " ";
    age = 9;
    cout<< name <<'\n';
    cout<< age <<'\n';
}