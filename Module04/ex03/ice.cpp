#include "ice.hpp"
#include "ICharacter.hpp"

Ice::Ice(){
	Type = "ice";
}

AMateria* Ice::clone() const{
	return new Ice(*this);
}

void Ice::use(ICharacter& target){
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

Ice::~Ice(){}
