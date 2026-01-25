#pragma once

#include "AForm.hpp"
#include <cstdlib>
#include <ctime>

class RobotomyRequestForm : public AForm {
	private:
		std::string	target;
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(const RobotomyRequestForm& na);
		~RobotomyRequestForm();

		void execute(const Bureaucrat& executor) const;
		RobotomyRequestForm&	operator=(RobotomyRequestForm &na);
};