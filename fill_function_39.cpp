#include <iostream>
using namespace std;
int main(){
    const int SIZE = 99;
    string foods[SIZE];

    fill(foods, foods + (SIZE/3), "Pizza");
    fill(foods + (SIZE/3), foods + (SIZE/3)*2, "Samosa");
    fill(foods + (SIZE/3)*2, foods + SIZE, "Kachori");
    for(int i = 0; i < SIZE; i++){
        cout<< foods[i] <<"\n";
    }
    return 0;
}