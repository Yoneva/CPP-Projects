#include "HumanA.hpp"

void HumanA::attack()
{
	std::cout << name << " attacks with their " << Weaponn.getType() << std::endl;
}

HumanA::HumanA(std::string name, Weapon &wep): name(name), Weaponn(wep){}