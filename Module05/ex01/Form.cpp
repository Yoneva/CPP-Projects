#include "Form.hpp"

Form::Form(): name("default"), status(false), Sgrade(150), Egrade(150) {}

Form::Form(const Form& other): name(other.name), status(other.status), Sgrade(other.Sgrade), Egrade(other.Egrade) {}

Form& Form::operator=(const Form& other){
	if (this != &other)
		status = other.status;
	return *this;
}

Form::~Form() {}

int	Form::getEgrade() const{
	return (Egrade);
}

int	Form::getSgrade() const{
	return (Sgrade);
}

bool	Form::getStatus() const{
	return (status);
}

const std::string& Form::getName() const{
	return (name);
}

void	Form::beSigned(const Bureaucrat& bc){
	if (bc.getGrade() > Sgrade)
		throw GradeTooLowException();
	status = true;
}

std::ostream& operator<<(std::ostream& os, const Form& f){
	os << "Form " << f.getName() << ", sign grade " << f.getSgrade()
		<< ", execute grade " << f.getEgrade() << ", status "
		<< (f.getStatus() ? "signed" : "not signed");
	return (os);
}
