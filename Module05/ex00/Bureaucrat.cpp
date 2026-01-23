#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): name("default"), grade(150) {}

Bureaucrat::Bureaucrat(const Bureaucrat& other): name(other.name), grade(other.grade) {
}

Bureaucrat::Bureaucrat(std::string na, int ga) : name(na), grade(ga) {
	if (ga < 1)
		throw GradeTooHighException();
	if (ga > 150)
		throw GradeTooLowException();
}

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

void Bureaucrat::lowerGrade(){
	if(grade >= 150)
		throw GradeTooLowException();
	grade++;
}

void Bureaucrat::incrementGrade(){
	if(grade <= 1)
		throw GradeTooHighException();
	grade--;
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& b){
	os << b.getName() << ", bureaucrat grade " << b.getGrade() << ".";
	return os;
}