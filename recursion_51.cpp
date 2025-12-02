#include<iostream>
using namespace std;
void walk(int steps);
int factorial(int num);
int main(){

    walk(19);
    cout<< factorial(10);

    return 0;
}
// void walk(int steps){
//     for(int i = 0; i < steps; i++){
//         cout<< "You take a step!\n";
//     }
// }
void walk(int steps){
   if(steps > 0){
    cout<< "You take a step!\n";
    walk(steps - 1);
   }
}
// int factorial(int num){
//     int result = 1;
//     for(int i = 1; i <= num; i++){
//         result = result * i;
//     }
//     return result;
// }
int factorial(int num){
    if(num > 1){
        return num * factorial(num - 1);
    }
    else{
        return 1;
    }
}