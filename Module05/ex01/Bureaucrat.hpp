#pragma once

#include <iostream>
#include <exception>
#include <string>

class Form;

class Bureaucrat{
	private:
		const std::string name;
		int grade;
	public:
		Bureaucrat(std::string na, int gr);
		Bureaucrat(const Bureaucrat& other);
		Bureaucrat();
		~Bureaucrat();

		Bureaucrat& operator=(const Bureaucrat& other);

		void	signForm(Form& form) const;

		int	getGrade() const;
		std::string getName() const;
		void	lowerGrade(int n);
		void	incrementGrade(int n);

		class GradeTooHighException : public std::exception {
		public:
			const char* what() const throw() {
				return "Grade too high";
			}
		};
		class GradeTooLowException : public std::exception {
		public:
			const char* what() const throw() {
				return "Grade too low";
			}
		};
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& b);