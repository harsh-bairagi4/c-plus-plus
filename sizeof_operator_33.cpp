#include <iostream>
using namespace std;
int main(){

    string name = "Harsh";
    double gpa = 2.5;
    char grade = 'B';
    bool student = true;
    char grades[] = {'A' , 'B', 'C', 'D' , 'E'};
    string students[] = {"Spongebob" , "Patrick" , "Squidward"};

    cout<<sizeof(name) << " bytes\n";
    cout<<sizeof(gpa) << " bytes\n";
    cout<<sizeof(double) << " bytes\n";
    cout<<sizeof(grade) << " bytes\n";
    cout<<sizeof(student) << " bytes\n";
    cout<<sizeof(grades) << " bytes\n";
    cout<<sizeof(grades)/sizeof(grades[0]) << " elements\n";
    cout<<sizeof(grades)/sizeof(char) << " elements\n";
    cout<<sizeof(students)/sizeof(string) << " elements\n";

    return 0;
}