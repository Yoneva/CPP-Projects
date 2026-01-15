#include "AMateria.hpp"
#include "ICharacter.hpp"

std::string	const &AMateria::getType() const{
	return (Type);
}

AMateria::AMateria(std::string const & type){
	Type = type;
}

AMateria::AMateria(){
	Type = "";
}

AMateria::AMateria(const AMateria& other){
	Type = other.Type;
}

AMateria& AMateria::operator=(const AMateria& other){
	if (this != &other)
		Type = other.Type;
	return *this;
}

AMateria::~AMateria(){}

void AMateria::use(ICharacter& target){
	if (Type == "ice")
		std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	else if (Type == "cure")
		std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
