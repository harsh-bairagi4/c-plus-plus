#include<iostream>
using namespace std;

int main()
{   
    char op;
	double num1;
	double num2;
	double result;
	
	cout<<"***********CALCULATOR*************"<<endl;
	cout<<"Enter the operator (+,-,*,/): "<<endl;
	cin>>op;
	
	cout<<"Enter number one"<<endl;
	cin>>num1;
	
	cout<<"Enter number two"<<endl;
	cin>>num2;
	
	
	switch(op){
		case '+':
			result = num1+num2;
			cout<<"The result is:"<<result<<endl;
			break;
		case '-':
			result = num1-num2;
			cout<<"The result is:"<<result<<endl;
			break;
		case '*':
			result = num1*num2;
			cout<<"The result is:"<<result<<endl;
			break;
		case '/':
			result = num1/num2;
			cout<<"The result is:"<<result<<endl;
			break;
		default:
			cout<<"That wan't a valid response\n";
			break;
		
	}
	
	
	
	cout<<"**********************************";
	
	
	return 0;
}
