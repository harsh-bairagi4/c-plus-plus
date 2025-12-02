#include <iostream>
using namespace std;

double getTotal(double prices[], int size);

int main(){
    double prices[] = {49, 99, 23, 41, 55.3, 33.5};
    int size = sizeof(prices)/sizeof(prices[0]);
    double total = getTotal(prices, size);
    cout<< "Rs. "<< total;

    return 0;
}
double getTotal(double prices[], int size){
    double total = 0;

    for(int i = 0; i < size; i++){
        total += prices[i];
    }
    return total;
}
