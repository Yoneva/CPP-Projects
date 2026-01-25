#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "AForm.hpp"

int main() {
	std::srand(std::time(NULL));
	
	try {
		Intern intern;
		Bureaucrat bob("Bob", 0);
		
		std::cout << "\n=== Testing Intern Form Creation ===" << std::endl;
		
		AForm* form1 = intern.makeForm("shrubbery request", "home");
		if (form1) {
			form1->beSigned(bob);
			bob.executeForm(*form1);
			delete (form1);
		}
		
		std::cout << "\n=== Testing Robotomy Request ===" << std::endl;
		AForm* form2 = intern.makeForm("robotomy request", "target");
		if (form2) {
			form2->beSigned(bob);
			bob.executeForm(*form2);
			delete (form2);
		}
		
		std::cout << "\n=== Testing Presidential Pardon ===" << std::endl;
		AForm* form3 = intern.makeForm("presidential request", "criminal");
		if (form3) {
			form3->beSigned(bob);
			bob.executeForm(*form3);
			delete (form3);
		}
		
		std::cout << "\n=== Testing Invalid Form ===" << std::endl;
		AForm* form4 = intern.makeForm("invalid form", "test");
		if (form4)
			delete (form4);
		
	} catch (std::exception& e) {
		std::cout << "Error: " << e.what() << std::endl;
	}
	
	return 0;
}
