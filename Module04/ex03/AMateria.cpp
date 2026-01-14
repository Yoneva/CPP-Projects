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

AMateria::~AMateria(){}

void AMateria::use(ICharacter& target){
	if (Type == "ice")
		std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	else if (Type == "cure")
		std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
