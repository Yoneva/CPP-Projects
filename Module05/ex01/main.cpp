#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(){
	Bureaucrat senior("Alice", 10);
	Bureaucrat junior("Bob", 200);
	Form defaultForm;

	std::cout << "Initial form status: " << defaultForm << std::endl;

	std::cout << "\n-- Senior tries to sign --" << std::endl;
	senior.signForm(defaultForm);
	std::cout << "After senior attempt: " << defaultForm << std::endl;

	std::cout << "\n-- Junior tries to sign (should fail) --" << std::endl;
	junior.signForm(defaultForm);
	std::cout << "After junior attempt: " << defaultForm << std::endl;

	return (0);
}
