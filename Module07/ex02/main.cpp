#include "Array.hpp"

int main() {
    Array<int> numbers(5);

    try {
        // Accessing valid index
        numbers[0] = 42;
        std::cout << "Index 0: " << numbers[0] << std::endl;

        // Accessing INVALID index
        std::cout << "Attempting to access index 10..." << std::endl;
        std::cout << numbers[10] << std::endl; 
    }
    catch (const std::exception& e) {
        // Catching by reference to std::exception handles std::out_of_range
        std::cerr << "Error caught: " << e.what() << std::endl;
    }

    return 0;
}