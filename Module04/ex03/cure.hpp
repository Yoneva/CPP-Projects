#pragma once

#include "AMateria.hpp"
class ICharacter;

class Cure : public AMateria{
	public:
		AMateria* clone() const;
		void use(ICharacter& target);
		Cure();
		~Cure();
};