#include "ClapTrap.hpp"

int	main() {
	ClapTrap	a("Amal");

	a.attack("Bandit");
	a.takeDamage(5);
	a.beRepaired(3);
	a.takeDamage(20);
	a.attack("Ghost");
}