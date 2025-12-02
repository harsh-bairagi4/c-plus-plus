#include<iostream>
int main(){
	
	std::string name;
	int age;
	
	std::cout<<"What's your name?: ";
	std::cin>>name;
	
	std::cout<<"What's your age?: ";
	std::cin>>age;
	
	std::cout<<"Hello "<<name<<'\n';
	std::cout<<"You are "<<age<< " years old"<<'\n';
	
	std::string fullname;
	std::cout<<"What's your full name?: ";
	std::cin>>fullname;
	std::cout<<fullname<<'\n';
	
	std::string fullnameagain;
	std::cout<<"What's your full name?: ";
	std::getline(std::cin, fullnameagain);
	std::cout<<fullnameagain;
	
	
	
	return 0;
}
