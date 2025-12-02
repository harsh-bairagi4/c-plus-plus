#include <iostream>
using namespace std;
int main(){

    // string students[] = {"Spongebob" , "Fahim" , "Shubham"};
    // for (int i = 0; i < 3; i++){
    //     cout<<students[i]<<'\n';
    // }

    string students[] = {"Spongebob" , "Fahim" , "Shubham", "Ansh"};
    for (int i = 0; i < sizeof(students)/sizeof(string); i++){
        cout<<students[i]<<'\n';
    }

    char grades[] = {'A', 'B', 'C', 'D' ,'E'};
    for(int i = 0; i < sizeof(grades)/sizeof(char); i++){
        cout<< grades[i] << '\n';
    }



    return 0;
}