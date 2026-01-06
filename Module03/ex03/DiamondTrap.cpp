#include "DiamondTrap.hpp"

void	DiamondTrap::whoAmI(){
	std::cout << "this is my name " << name << "and this is ClapTrap's name " << ClapTrap::name + "_clap_name" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string& na){
	name = na;
	HP = FragTrap::HP;
	EP = ScavTrap::EP;
	AD = FragTrap::AD;

}