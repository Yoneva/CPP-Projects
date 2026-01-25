#include "Bureaucrat.hpp"
#include "AForm.hpp"

Bureaucrat::Bureaucrat(): name("default"), grade(150) {}

Bureaucrat::Bureaucrat(const Bureaucrat& other): name(other.name), grade(other.grade) {}

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

void	Bureaucrat::executeForm(const AForm& form) const {
	try {
		form.execute(*this);
		std::cout << name << " executed " << form.getName() << std::endl;
	} catch (std::exception& e) {
		std::cout << name << " couldn't execute " << form.getName() 
				<< " because " << e.what() << std::endl;
	}
}

void	Bureaucrat::signForm(AForm& form) const{
	try{
		form.beSigned(*this);
		std::cout << name << " signed " << form.getName() << std::endl;
	}
	catch(const std::exception& e){
		std::cout << name << " couldn’t sign " << form.getName()
			<< " because " << e.what() << std::endl;
	}
}

int	Bureaucrat::getGrade() const{
	return (grade);
}

std::string	Bureaucrat::getName() const{
	return (name);
}

void	Bureaucrat::lowerGrade(){
	if(grade - 1 > 150)
		throw GradeTooLowException();
	grade++;
}

void	Bureaucrat::incrementGrade(){
	if(grade - 1 < 1)
		throw GradeTooHighException();
	grade--;
}

std::ostream&	operator<<(std::ostream& os, const Bureaucrat& b){
	os << b.getName() << ", bureaucrat grade " << b.getGrade() << ".";
	return os;
}

const char*	Bureaucrat::GradeTooHighException::what() const throw() {
	return "Grade too high";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
	return "Grade too low";
}