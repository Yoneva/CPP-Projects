#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(){
	
	Form defaultForm("amal", 20, 20);
	try {
		Bureaucrat senior("Alice", 152);
		senior.signForm(defaultForm);
		std::cout << "After senior attempt: " << defaultForm << std::endl;
	}
	catch (const std::exception& e){
		std::cout << "exception caught: " << e.what() << std::endl;
	}

	try {
		Bureaucrat junior("Bob", 100);
		junior.signForm(defaultForm);
		std::cout << "After junior attempt: " << defaultForm << std::endl;
	}
	catch (const std::exception& e) {
		std::cout << "exception caught: " << e.what() << std::endl;
	}
	return (0);
}
