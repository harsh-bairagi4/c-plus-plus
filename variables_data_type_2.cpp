#include <iostream>
int main(){
	
	int x; //declaration
	x = 5; //assignment
	std::cout<<x<<'\n';
	
	//You can combine both of the statements as:
	int y = 4;
	std::cout<<y<<'\n';
	
	int sum = x + y;
	std::cout<<sum<<'\n';
	
	//integer (whole number)
	int age = 21;
	int year = 2023;
	int days = 7.5;
	std::cout<<days<<'\n'; //decimal portion is truncated
	
	//double(number including decimal)
	double price = 10.99;
	double gpa = 2.5;
	double temperature = 25.1;
	std::cout<<price<<'\n';
	
	//single character
	char grade = 'A';
	char initial = 'B';
	char dollarSign = '$';
	std::cout<<initial<<'\n';
	
	//boolean (true or false)
	bool student = false;
	bool power = true;
	bool forSale = true;
	
	//string (objects that represents a sequence of text)
	std::string name = "Ram";
	std::string day = "Friday";
	std::string food = "Pizza";
	std::string address = "123 Fake St. ";
	
	std::cout<< name <<'\n';
	std::cout<<"Today is " <<day<<'\n';

	return 0;
}
