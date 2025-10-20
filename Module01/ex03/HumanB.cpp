#include "HumanB.hpp"

void HumanB::attack()
{
	std::cout << HumanB::name << " attacks with their " << HumanB::Weapon << std::endl;
}

HumanB::HumanB()
{
	name = "Badr";
}