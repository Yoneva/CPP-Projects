#include "PresidentialPardonForm.hpp"
#include <fstream>

PresidentialPardonForm::PresidentialPardonForm() : AForm("Presidential Pardon Form", 25, 5), target("default"){}

PresidentialPardonForm::~PresidentialPardonForm(){}

PresidentialPardonForm&	PresidentialPardonForm::operator=(PresidentialPardonForm &other){
	if (this != &other){
		target = other.target;
		AForm::operator=(other);
	}
	return (*this);
}

PresidentialPardonForm::PresidentialPardonForm(std::string target): AForm("Presidential Pardon Form", 25, 5), target(target){}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other) : AForm(other), target(other.target){}

void PresidentialPardonForm::execute(const Bureaucrat& executor) const{
	if (!getStatus())
		throw FormNotSignedException();
	if (executor.getGrade() > getEgrade())
		throw GradeTooLowException();

	std::cout << target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
