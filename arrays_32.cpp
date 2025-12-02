#include <iostream>
using namespace std;

int main(){
    string cars[] = {"Corvette", "Mustang", "Camry"};
    cars[0] = "Camaro";
    cout<<cars[0] << '\n';
    cout<<cars[1] << '\n';
    cout<<cars[2] << '\n';
    cout<<'\n';

    string names[3];

    names[0] = "Harsh";
    names[1] = "Ansh";
    names[2] = "Fahim";

    cout<<names[0] << '\n'; 
    cout<<names[1] << '\n';
    cout<<names[2] << '\n';

    return 0;
}