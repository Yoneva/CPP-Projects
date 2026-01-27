#include <iostream>
#include "iter.hpp"

void	increment(int &n) {
	n++;
}

template <typename T>
void	printElement(const T &x) {
	std::cout << x << " ";
}

void	capitalize(std::string &s) {
	for (size_t i = 0; i < s.length(); i++) {
		s[i] = toupper(s[i]);
	}
}

int	main() {
	std::cout << "---- Test 1: Integer Array ----" << std::endl;
	int intArr[] = {1, 2, 3, 4, 5};
	size_t intLen = 5;

	std::cout << "Original int array: ";
	iter(intArr, intLen, printElement<int>);
	std::cout << std::endl;

	std::cout << "Incrementing values..." << std::endl;
	iter(intArr, intLen, increment);

	std::cout << "Updated int array:  ";
	iter(intArr, intLen, printElement<int>);
	std::cout << "\n" << std::endl;


	std::cout <<"---- Test 2: String Array ----" << std::endl;

	std::string strArr[] = {"apple", "banana", "cherry"};
	size_t strLen = 3;

	std::cout << "Original string array: ";
	iter(strArr, strLen, printElement<std::string>);
	std::cout << std::endl;

	std::cout << "Capitalizing strings..." << std::endl;
	iter(strArr, strLen, capitalize);

	std::cout << "Updated string array:  ";
	iter(strArr, strLen, printElement<std::string>);
	std::cout << "\n" << std::endl;


	std::cout << "---- Test 3: Const Array ----" << std::endl;
	const int constArr[] = {10, 20, 30};
	std::cout << "Const array test: ";
	iter(constArr, 3, printElement<int>);
	std::cout << std::endl;

	return 0;
}