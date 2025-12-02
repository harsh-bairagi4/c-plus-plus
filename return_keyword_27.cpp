#include <iostream>
using namespace std;

double area(double side);
double volume(double side);
string concatString(string string1, string string2);

int main(){
    double side;

    cout<<"Enter the side of the square: ";
    cin>>side;

    double ans = area(side);
    double ans2 = volume(side);

    cout<< "Area: " << ans << "cm^2\n";
    cout<< "Volume: " << ans2 << "cm^3\n";

    string firstName = "Harsh";
    string lastName = "Bairagi";
    string fullName = concatString(firstName, lastName);
    cout<< "Your full name is : " << fullName;

    return 0;
}
double area(double side){
    return side * side;
}
double volume(double side){
    return side * side * side;
}

string concatString(string string1, string string2){
    return string1 + " " + string2;
}