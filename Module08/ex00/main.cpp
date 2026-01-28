#include "easyfind.hpp"

int main() {
	std::cout << "--- Testing Vector ---" << std::endl;
	std::vector<int> set;
	
	for (int i = 0; i < 10; ++i) {
		set.push_back(i * 10);
	}
	try {
		std::vector<int>::iterator it = easyfind(set, 30);
		std::cout << "Found: " << *it << " at vector position." << std::endl;
		
		std::cout << "Searching for non-existent value (99)..." << std::endl;
		easyfind(set, 99);
	} 
	catch (const std::exception& e) {
		std::cerr << "Error: " << e.what() << std::endl;
	}
	
	std::cout << std::endl;

	std::cout << "--- Testing List ---" << std::endl;
	std::list<int>	lst;
	
	for (int i = 0; i < 10; ++i) {
		lst.push_back(i);
	}
	try {
		std::list<int>::iterator it = easyfind(lst, 5);
		std::cout << "Found: " << *it << " at list node." << std::endl;

		std::cout << "Searching for non-existent value (42)..." << std::endl;
		easyfind(lst, 42);
	} 
	catch (const std::exception& e) {
		std::cerr << "Error: " << e.what() << std::endl;
	}

	return 0;
}