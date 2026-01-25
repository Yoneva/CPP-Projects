#pragma once

#include "AForm.hpp"

class PresidentialPardonForm : public AForm {
	private:
		std::string	target;
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(const PresidentialPardonForm& na);
		~PresidentialPardonForm();

		void execute(const Bureaucrat& executor) const;
		PresidentialPardonForm&	operator=(PresidentialPardonForm &na);
};