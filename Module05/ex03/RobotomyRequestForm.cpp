#include "RobotomyRequestForm.hpp"
#include <fstream>

RobotomyRequestForm::RobotomyRequestForm() : AForm("Robotomy Request Form", 72, 45), target("default"){}

RobotomyRequestForm::~RobotomyRequestForm(){}

RobotomyRequestForm&	RobotomyRequestForm::operator=(RobotomyRequestForm &other){
	if (this != &other){
		target = other.target;
		AForm::operator=(other);
	}
	return (*this);
}

RobotomyRequestForm::RobotomyRequestForm(std::string target): AForm("Robotomy Request Form", 72, 45), target(target){}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other) : AForm(other), target(other.target){}

void RobotomyRequestForm::execute(const Bureaucrat& executor) const{
	if (!getStatus())
		throw FormNotSignedException();
	if (executor.getGrade() > getEgrade())
		throw GradeTooLowException();

	std::cout << "* BZZZZZT * WHIRRRRR * DRILL DRILL DRILL *" << std::endl;
	std::cout << "* MECHANICAL NOISES * BRRRRRRR *" << std::endl;

	if (std::rand() % 2 == 0) {
		std::cout << target << " has been robotomized successfully!" << std::endl;
	} else {
		std::cout << "Robotomy failed on " << target << "!" << std::endl;
	}
}
