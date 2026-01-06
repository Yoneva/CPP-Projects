#include "ScavTrap.hpp"

ScavTrap&	ScavTrap::operator=(const ScavTrap& other)
{
	if (this != &other)
		ClapTrap::operator=(other);
	return (*this);
}

void	ScavTrap::guardGate(){
	std::cout << "ScavTrap player " << name << " has entered Gate keeper mode" << std::endl;
}

void	ScavTrap::attack(const std::string& target){
	if (HP <= 0){
		std::cout << "ScavTrap " << name << " cant attack (You are dead :b)" << std::endl;
		return ;
	}
	if (EP <= 0){
		std::cout << "ScavTrap " << name << " cant attack (No Energy points left)" << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << target << " was attacked , causing " << AD << " points of damage" << std::endl;
	EP -= 1;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other){
	*this = other;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name){
	this->name = name;
	HP = 100;
	EP = 50;
	AD = 20;
	std::cout << "ScavTrap player " << this->name << " has been summoned" << std::endl;
}

ScavTrap::ScavTrap()
{
	name = "Kuromi";
    HP = 100;
    EP = 50;
    AD = 20;
    std::cout << "ScavTrap player " << this->name << " has been summoned" << std::endl;
}

ScavTrap::~ScavTrap(){
	std::cout << "ScavTrap player " << this->name << " has left" << std::endl;
}
