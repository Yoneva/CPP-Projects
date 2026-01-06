#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	std::cout << "\n--- ClapTrap Test ---\n";
	ClapTrap clap("CL4P-TP");
	clap.attack("bandit");
	clap.takeDamage(20);
	clap.beRepaired(15);

	std::cout << "\n--- ScavTrap Test ---\n";
	ScavTrap scav("SC4V-TP");
	scav.attack("enemy robot");
	scav.takeDamage(30);
	scav.beRepaired(20);
	scav.guardGate();

	std::cout << "\n--- FragTrap Test ---\n";
	FragTrap frag("FR4G-TP");
	frag.attack("boss enemy");
	frag.takeDamage(40);
	frag.beRepaired(25);
	frag.highFivesGuys();

	return (0);
}
