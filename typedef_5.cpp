#include <iostream>
#include <vector>

//typedef std::vector<std::pair<std::string, int>> pairlist_t;
//typedef std::string text_t;
//typedef int number_t;

 using text_t = std::string;
 using number_t = int;

int main(){

	//pairlist_t pairlist;
	text_t firstName = "Bro";
	std::cout<<firstName<<'\n';
	
	number_t age = 23;
	std::cout<<age<<'\n';
	

	// typedef = reserved keyword used to create an additional name (alias) for another data type.
	// New identifier for an existing type ,helps with readability and reduces typos.
	return 0;
}
