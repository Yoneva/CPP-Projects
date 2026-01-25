#include "Intern.hpp"

Intern::Intern(){}

Intern::Intern(Intern& other){(void(other));}

Intern::~Intern(){}

Intern&	Intern::operator=(Intern &na){(void(na)); return (*this);}

AForm*	createShrubberyCreationForm(std::string target){
	return new ShrubberyCreationForm(target);
}

AForm*	createRobotomyRequestForm(std::string target){
	return new RobotomyRequestForm(target);
}

AForm*	createPresidentialPardonForm(std::string target){
	return new PresidentialPardonForm(target);
}

AForm*	Intern::makeForm(std::string name, std::string target)
{
	std::string cases[3] = {"shrubbery request","robotomy request","presidential request"};
	AForm*	(*Level[])(std::string) = {
		&createShrubberyCreationForm,
		&createRobotomyRequestForm,
		&createPresidentialPardonForm};
	std::cout << "Intern creates "<< name << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if(cases[i] == name){
				std::cout << "Form created successfully" << std::endl;
			return ((*Level[i])(target));
		}
	}
	std::cout << "Couldn't find the wanted form, retry" << std::endl;
	return (NULL);
}