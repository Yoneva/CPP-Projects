#include "AForm.hpp"

AForm::AForm(): name("default"), status(false), Sgrade(150), Egrade(150) {}

AForm::AForm(const AForm& other): name(other.name), status(other.status), Sgrade(other.Sgrade), Egrade(other.Egrade) {}

AForm::AForm(std::string na, int sg, int eg): name(na), Sgrade(sg), Egrade(eg){
	if (sg < 1 || eg < 1)
		throw GradeTooHighException();
	if (sg > 150 || eg > 150)
		throw GradeTooLowException();
}

AForm& AForm::operator=(const AForm& other){
	if (this != &other)
		status = other.status;
	return *this;
}

AForm::~AForm() {}

int	AForm::getEgrade() const{
	return (Egrade);
}

int	AForm::getSgrade() const{
	return (Sgrade);
}

bool	AForm::getStatus() const{
	return (status);
}

const std::string& AForm::getName() const{
	return (name);
}

void	AForm::beSigned(const Bureaucrat& bc){
	if (bc.getGrade() > Sgrade)
		throw GradeTooLowException();
	status = true;
}

std::ostream& operator<<(std::ostream& os, const AForm& f){
	os << "AAForm " << f.getName() << ", sign grade " << f.getSgrade()
		<< ", execute grade " << f.getEgrade() << ", status "
		<< (f.getStatus() ? "signed" : "not signed");
	return (os);
}

const char* AForm::GradeTooHighException::what() const throw() {
	return "grade too high";
}

const char* AForm::FormNotSignedException::what() const throw() {
	return "Form not signed";
}

const char* AForm::GradeTooLowException::what() const throw() {
	return "grade too low";
}
