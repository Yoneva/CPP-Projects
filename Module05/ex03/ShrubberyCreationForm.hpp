#pragma once

#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm : public AForm {
	private:
		std::string	target;
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm& na);
		~ShrubberyCreationForm();

		void execute(const Bureaucrat& executor) const;
		ShrubberyCreationForm&	operator=(ShrubberyCreationForm &na);
};