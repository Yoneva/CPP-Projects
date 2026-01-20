#pragma once

#include "Bureaucrat.hpp"
#include <exception>

class AForm {
	private:
		const std::string name;
		bool	status;
		const int Sgrade;
		const int Egrade;
	public:
		AForm();
		AForm(const AForm& other);
		AForm& operator=(const AForm& other);
		~AForm();
		
		virtual void	beSigned(const Bureaucrat& bc) = 0;
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