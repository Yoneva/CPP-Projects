#pragma once

#include <iostream>

class ICharacter;

class AMateria {
	protected:
		std::string	Type;
	public:
		AMateria(std::string const & type);
		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
		AMateria();
		virtual ~AMateria();
};