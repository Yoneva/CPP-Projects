#include "cure.hpp"
#include "ICharacter.hpp"

Cure::Cure(){
	Type = "cure";
}

AMateria* Cure::clone() const{
	return new Cure(*this);
}

void Cure::use(ICharacter& target){
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

Cure::~Cure(){}
