#include "DiamondTrap.hpp"

void	DiamondTrap::whoAmI(){
	std::cout << "this is my name " << name << " and this is ClapTrap's name " << ClapTrap::name << std::endl;
}

void	DiamondTrap::attack(const std::string& target){
	ScavTrap::attack(target);
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap& other){
	if (this != &other){
		ClapTrap::operator=(other);
		name = other.name;
	}
	return (*this);
}

DiamondTrap::DiamondTrap(const std::string& name) : ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name), name(name){
	HP = FragTrap::HP;
	EP = ScavTrap::EP;
	AD = FragTrap::AD;
	std::cout << "DiamondTrap player " << this->name << " has been summoned" << std::endl;
}

DiamondTrap::DiamondTrap() : ClapTrap("Pompompurin_clap_name"), FragTrap("Pompompurin"), ScavTrap("Pompompurin"), name("Pompompurin"){
	HP = FragTrap::HP;
	EP = ScavTrap::EP;
	AD = FragTrap::AD;
	std::cout << "DiamondTrap player " << this->name << " has been summoned" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other) : ClapTrap(other), FragTrap(other), ScavTrap(other), name(other.name){
	HP = other.HP;
	EP = other.EP;
	AD = other.AD;
	std::cout << "DiamondTrap copy player " << this->name << " has been summoned" << std::endl;
}


DiamondTrap::~DiamondTrap(){
	std::cout << "DiamondTrap player " << this->name << " has left" << std::endl;
}
