#include "AForm.hpp"

AForm::AForm(): name("default"), status(false), Sgrade(150), Egrade(150) {}

AForm::AForm(const AForm& other): name(other.name), status(other.status), Sgrade(other.Sgrade), Egrade(other.Egrade) {}

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

void	AAForm::beSigned(const Bureaucrat& bc){
	if (bc.getGrade() > Sgrade)
		throw GradeTooLowException();
	status = true;
}

std::ostream& operator<<(std::ostream& os, const AAForm& f){
	os << "AAForm " << f.getName() << ", sign grade " << f.getSgrade()
		<< ", execute grade " << f.getEgrade() << ", status "
		<< (f.getStatus() ? "signed" : "not signed");
	return (os);
}
