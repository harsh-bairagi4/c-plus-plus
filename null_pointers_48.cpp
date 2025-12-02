#include <iostream>
using namespace std;

int main(){
    int *pointer = nullptr;
    int x = 123;
    
    pointer = &x;

    if(pointer == nullptr){
        cout<<"Address wasn't assigned";
    }
    else{
        cout<<"Address was assigned";
        cout<<*pointer;
    }


    return 0;
}