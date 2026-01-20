#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): name("default"), grade(150) {}

Bureaucrat::Bureaucrat(const Bureaucrat& other): name(other.name), grade(other.grade) {}

Bureaucrat::Bureaucrat(std::string na, int ga) : name(na), grade(ga) {}

Bureaucrat::~Bureaucrat() {}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other){
	if (this != &other)
		grade = other.grade;
	return *this;
}

int	Bureaucrat::getGrade() const{
	return (grade);
}

std::string	Bureaucrat::getName() const{
	return (name);
}

void Bureaucrat::lowerGrade(int n){
	if ( n < 0 )
		return ;
	if(grade + n > 150)
		throw GradeTooLowException();
	grade += n;
}

void Bureaucrat::incrementGrade(int n){
	if ( n < 0 )
		return ;
	if(grade - n < 1)
		throw GradeTooHighException();
	grade -= n;
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& b){
	os << b.getName() << ", bureaucrat grade " << b.getGrade() << ".";
	return os;
}