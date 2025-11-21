#include "Weapon.hpp"

std::string&	Weapon::getType()
{
	return (type);
}

void	Weapon::setType(const char *w_type)
{
	if(w_type)
		type = w_type;
	else
		type = "";
}

Weapon::Weapon(const char *weapon)
{
		setType(weapon);
}

Weapon::Weapon(std::string weapon)
{
	type = weapon;
}
