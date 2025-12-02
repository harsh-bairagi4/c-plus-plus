#include <iostream>
using namespace std;
// template <typename T>
template <typename T, typename U>

// int max(int x, int y){
//     return(x > y) ? x : y;
// }
// double max(double x, double y){
//     return(x > y) ? x : y;
// }
// char max(char x, char y){
//     return(x > y) ? x : y;
// }

// T max(T x, T y){
//     return (x > y) ? x : y;
// }

auto max(T x , U y){
    return (x > y) ? x : y;
}

int main(){
    // cout<< max(1, 2)<<'\n';
    // cout<< max(1, 2.21)<<'\n';
    // cout<< max('1', '2')<<'\n';
    return 0;
}