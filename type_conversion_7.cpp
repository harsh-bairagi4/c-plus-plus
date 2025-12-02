#include<iostream>

int main()
{
	int x = 3.14;
	std::cout<<x<<'\n';
	double y = 3.14;
	std::cout<<y<<'\n';
	
	double z = (int)3.16;
	std::cout<<z<<'\n';
	
	char c = 100;
	std::cout<<c<<'\n';
	
	std::cout<< (char)100<<'\n';
	
	int correct = 8;
	int question = 10;
	double score = correct/question * 100<<'\n';
	std::cout<<score<<"%"<<'\n';
	
	score = correct/(double)question * 100;
	std::cout<<score<<"%"<<'\n';
	
	score = (double)correct/question * 100;
	std::cout<<score<<"%"<<'\n';
	
	
	
	
	return 0;	
}
