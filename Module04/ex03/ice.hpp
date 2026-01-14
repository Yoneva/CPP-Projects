#pragma once

#include "AMateria.hpp"

class Ice : public AMateria{
	public:
		AMateria* clone() const;
		void use(ICharacter& target);
		Ice();
		~Ice();
};