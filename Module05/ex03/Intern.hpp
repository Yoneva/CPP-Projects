#pragma once

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern {
	public:
		Intern();
		~Intern();
		Intern(Intern& other);
		Intern&	operator=(Intern &na);
		AForm*	makeForm(std::string name, std::string target);
};