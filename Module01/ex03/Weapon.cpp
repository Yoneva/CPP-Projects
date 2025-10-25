#include "Weapon.hpp"

std::string&	Weapon::getType()
{
	return (type);
}

void	Weapon::setType(std::string w_type)
{
	type = w_type;
}
Weapon::Weapon(std::string weapon)
{
	setType(weapon);
}