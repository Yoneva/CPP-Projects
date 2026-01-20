#include <iostream>
#include "Bureaucrat.hpp"

int	main(){
	std::cout << "=== Valid bureaucrat ===" << std::endl;
	Bureaucrat alice("Alice", 50);
	std::cout << alice << std::endl;
	alice.incrementGrade(5);
	std::cout << alice << std::endl;

	std::cout << "\n=== Exception: Grade too high ===" << std::endl;
	try{
		Bureaucrat boss("Boss", 2);
		std::cout << boss << std::endl;
		boss.incrementGrade(5);
	}
	catch(const Bureaucrat::GradeTooHighException& e){
		std::cout << "Exception caught: " << e.what() << std::endl;
	}

	std::cout << "\n=== Exception: Grade too low ===" << std::endl;
	try{
		Bureaucrat intern("Intern", 149);
		std::cout << intern << std::endl;
		intern.lowerGrade(5);
	}
	catch(const Bureaucrat::GradeTooLowException& e){
		std::cout << "Exception caught: " << e.what() << std::endl;
	}

	std::cout << "\n=== Copy constructor test ===" << std::endl;
	Bureaucrat bob("Bob", 100);
	Bureaucrat bobCopy(bob);
	std::cout << bob << std::endl;
	std::cout << bobCopy << std::endl;

	return 0;
}
