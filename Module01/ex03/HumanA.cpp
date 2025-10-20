#include "HumanA.hpp"

void HumanA::attack()
{
	std::cout << HumanA::name << " attacks with their " << HumanA::Weapon << std::endl;
}

HumanA::HumanA(std::string W_Type)
{
	Weapon = W_Type;
	name = "Amal";
}