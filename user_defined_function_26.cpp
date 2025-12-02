#include <iostream>
using namespace std;

// void happyBirthday(){
//     cout<<"Happy Birthday to you!\n";
//     cout<<"Happy Birthday to you!\n";
//     cout<<"Happy Birthday dear you!\n";
//     cout<<"Happy Birthday to you!\n\n";
// }

void happyBirthday(string naam, int age);

int main(){

    string name = "Harsh";
    int age = 21;

    happyBirthday(name, age);
    happyBirthday(name, age);

    return 0;
}
void happyBirthday(string naam, int age){
    cout<<"Happy Birthday to " << naam << '\n';
    cout<<"Happy Birthday to " << naam << '\n';
    cout<<"Happy Birthday dear " << naam << '\n';
    cout<<"Happy Birthday to " << naam << '\n';
    cout<<"You are "<< age << " years old!\n";
    cout<<'\n';
}