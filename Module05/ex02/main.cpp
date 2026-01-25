#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "AForm.hpp"

int main() {
	std::srand(std::time(NULL));
	
	try {
		Bureaucrat bob("Bob", 1);
		std::cout << "\n=== Shrubbery Creation Form ===" << std::endl;
		
		ShrubberyCreationForm shrub("kata");
		shrub.beSigned(bob);
		bob.executeForm(shrub);
		
		std::cout << "\n=== Robotomy Request Form ===" << std::endl;

		RobotomyRequestForm robot("yummi");
		robot.beSigned(bob);
		bob.executeForm(robot);
		
		std::cout << "\n=== Presidential Pardon Form ===" << std::endl;

		PresidentialPardonForm pardon("eve");
		pardon.beSigned(bob);
		bob.executeForm(pardon);
		
	} catch (std::exception& e) {
		std::cout << "Error: " << e.what() << std::endl;
	}
	
	return 0;
}
