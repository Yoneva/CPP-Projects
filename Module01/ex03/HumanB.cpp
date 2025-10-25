#include "HumanB.hpp"

void HumanB::attack()
{
	if (Weaponn)
		std::cout << name << " attacks with their " << Weaponn->getType() << std::endl;
	else
		std::cout << name << " has no Weapon T-T" << std::endl;
}

void	HumanB::setWeapon(Weapon &wep)
{
	Weaponn = &wep;
}
HumanB::HumanB(std::string name):name(name){}