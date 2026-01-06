#include "FragTrap.hpp"

FragTrap&	FragTrap::operator=(const FragTrap& other)
{
	if (this != &other)
		FragTrap::operator=(other);
	return (*this);
}

void	FragTrap::highFivesGuys(){
	std::cout << "FragTrap player " << name << " has summoned a moment of teamwork: High-Five!" << std::endl;
}

void	FragTrap::attack(const std::string& target){
	if (HP <= 0){
		std::cout << "FragTrap " << name << " cant attack (You are dead :b)" << std::endl;
		return ;
	}
	if (EP <= 0){
		std::cout << "FragTrap " << name << " cant attack (No Energy points left)" << std::endl;
		return ;
	}
	std::cout << "FragTrap " << target << " was attacked , causing " << AD << " points of damage" << std::endl;
	EP -= 1;
}

FragTrap::FragTrap()
{
	name = "Hello kitty";
    HP = 100;
    EP = 100;
    AD = 30;
    std::cout << "FragTrap player " << this->name << " has been summoned" << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other){
	*this = other;
}

FragTrap::FragTrap(std::string name): ClapTrap(name){
	this->name = name;
	HP = 100;
	EP = 100;
	AD = 30;
	std::cout << "FragTrap player " << this->name << " has been summoned" << std::endl;
}

FragTrap::~FragTrap(){
	std::cout << "FragTrap player " << this->name << " has left" << std::endl;
}