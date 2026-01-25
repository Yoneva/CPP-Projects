#pragma once

#include <iostream>
#include <exception>
#include <string>

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

		int	getGrade() const;
		std::string getName() const;
		void	lowerGrade();
		void	incrementGrade();

	class GradeTooHighException : public std::exception {
		public:
			const char* what() const throw();
	};
	class GradeTooLowException : public std::exception {
		public:
			const char* what() const throw();
	};
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& b);