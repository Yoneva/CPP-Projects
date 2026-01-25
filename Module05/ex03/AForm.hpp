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
		AForm(std::string na, int sg, int eg);
		AForm(const AForm& other);
		AForm& operator=(const AForm& other);
		virtual ~AForm();
		
		virtual void execute(const Bureaucrat& executor) const = 0;

		void	beSigned(const Bureaucrat& bc);
		void	signForm(const Bureaucrat& bc);
		const std::string& getName() const;
		int		getSgrade() const;
		int		getEgrade() const;
		bool	getStatus() const;

	class GradeTooHighException : public std::exception {
		public:
			const char* what() const throw();
	};
	class FormNotSignedException : public std::exception {
		public:
			const char* what() const throw();
	};
	class GradeTooLowException : public std::exception {
		public:
			const char* what() const throw();
	};
};

std::ostream&	operator<<(std::ostream& os, const AForm& f);