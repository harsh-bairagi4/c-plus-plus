#include <iostream>
using namespace std;
int searchArray(int array[], int size, int element);
int searchFood(string foods[] , int length, string food);

int main(){

    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(numbers)/sizeof(numbers[0]);
    int index;
    int myNum;

    cout<< "Enter element to search for: " << '\n';
    cin>> myNum;

    index = searchArray(numbers, size, myNum);
    if(index != -1){
        cout<< myNum << " is at index "<< index <<'\n';
    }
    else{
        cout<< myNum << " is not in the array"<<'\n';
    }

    string foods[] = {"pizza", "samosa" , "poha" , "kachori"};
    int length = sizeof(foods)/sizeof(foods[0]);
    int ans;
    string food;

    cout<<"Enter the food you are searching for: "<<'\n';
    cin>>food;

    ans = searchFood(foods, length, food);
    if(ans != -1){
        cout<< "The food is at index number "<< ans;
    }
    else{
        cout<< "The food is not available in the array";
    }


    return 0;
}

int searchArray (int array[], int size, int element){

    for(int i = 0; i < size; i++){
        if(array[i] == element){
            return i;
        }
    }
    return -1;
}

int searchFood(string foods[], int length, string food){
    for (int i = 0; i < length; i++){
        if(foods[i] == food){
            return i;
        }
    }
    return -1;
}