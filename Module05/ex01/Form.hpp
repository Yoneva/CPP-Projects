#pragma once

#include "Bureaucrat.hpp"
#include <exception>

class Form {
	private:
		const std::string name;
		bool	status;
		const int Sgrade;
		const int Egrade;
	public:
		Form();
		Form(const Form& other);
		Form& operator=(const Form& other);
		~Form();
		
		void	beSigned(const Bureaucrat& bc);
		void	signForm(const Bureaucrat& bc);
		const std::string& getName() const;
		int		getSgrade() const;
		int		getEgrade() const;
		bool	getStatus() const;

		class GradeTooHighException : public std::exception {
		public:
			const char* what() const throw(){ return "Form grade too high"; }
		};
		class GradeTooLowException : public std::exception {
		public:
			const char* what() const throw(){ return "Form grade too low"; }
		};

};

std::ostream& operator<<(std::ostream& os, const Form& f);