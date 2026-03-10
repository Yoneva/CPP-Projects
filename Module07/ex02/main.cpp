#include "Array.hpp"

int main() {
	Array<int> numbers(5);

	try {
		numbers[0] = 42;
		std::cout << "Index 0: " << numbers[0] << std::endl;
		std::cout << "Attempting to access index 10..." << std::endl;
		std::cout << numbers[10] << std::endl; 
	}
	catch (const std::exception& e) {
		std::cerr << "Error caught: " << e.what() << std::endl;
	}

	return 0;
}