#include "cure.hpp"
#include "ICharacter.hpp"

Cure::Cure(){
	Type = "cure";
}

Cure::Cure(const Cure& other) : AMateria(other) {
}

Cure& Cure::operator=(const Cure& other){
	if (this != &other)
		AMateria::operator=(other);
	return *this;
}

AMateria* Cure::clone() const{
	return new Cure(*this);
}

void Cure::use(ICharacter& target){
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

Cure::~Cure(){}
