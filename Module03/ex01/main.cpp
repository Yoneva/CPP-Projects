#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	std::cout << "===== ClapTrap =====" << std::endl;
	ClapTrap amal("Amal");
	amal.attack("Bandit");
	amal.takeDamage(5);
	amal.beRepaired(3);
	amal.takeDamage(20);
	amal.attack("Ghost");
	amal.beRepaired(5);

	std::cout << "\n===== ScavTrap =====" << std::endl;
	ScavTrap badr("Badr");
	badr.attack("Bandit");
	badr.takeDamage(30);
	badr.beRepaired(10);
	badr.guardGate();
	
	return (0);
}
