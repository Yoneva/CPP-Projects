#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main()
{
	std::cout << "===== PLAY =====" << std::endl;

	std::cout << "\n===== ClapTrap =====" << std::endl;
	ClapTrap clap("hello kitty");
	clap.attack("enemy");
	clap.takeDamage(5);
	clap.beRepaired(3);

	std::cout << "\n===== ScavTrap =====" << std::endl;
	ScavTrap scav("cinamoroll");
	scav.attack("enemy");
	scav.takeDamage(20);
	scav.beRepaired(10);
	scav.guardGate();

	std::cout << "\n===== FragTrap =====" << std::endl;
	FragTrap frag("kuromi");
	frag.attack("enemy");
	frag.takeDamage(30);
	frag.beRepaired(15);
	frag.highFivesGuys();

	std::cout << "\n===== DiamondTrap =====" << std::endl;
	DiamondTrap diamond("pompom");
	diamond.attack("boss");
	diamond.takeDamage(40);
	diamond.beRepaired(20);
	diamond.whoAmI();

	std::cout << "\n===== GAME HAS ENDED =====" << std::endl;
	return (0);
}
