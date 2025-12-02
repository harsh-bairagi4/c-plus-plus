#include <iostream>
using namespace std;

int main(){
    
    string students[] = {"Harsh", "Ansh", "Shubham", "Pawan"};
    for (string student : students){
        cout<< student <<'\n';
    }
    //My compiler doesn't support this loop.

    return 0;
}