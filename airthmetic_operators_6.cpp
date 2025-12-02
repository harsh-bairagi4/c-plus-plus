#include<iostream>

int main(){
	//parenthesis
	//multiplication and division
	//addition and subtraction
	
	int ans = 6 - 5 + 4 * 3 / 2;
	std::cout<<ans<<'\n';
	ans = 6 - (5 + 4)* 3 / 2;
	std::cout<<ans<<'\n';
	
	int students = 20;
	
	students = students + 1;
	students += 1;
	students += 2;
	students++;
	
	std::cout<<students<<'\n';
	students -= 2;
	students--;
	std::cout<<students<<'\n';
	
	students = students * 2;
	students*=2;
	std::cout<<students<<'\n';
	
	students/=2;
	std::cout<<students<<'\n';
	
	int remainder = students%3;
	std::cout<<remainder;
	
	return 0;
	
}
