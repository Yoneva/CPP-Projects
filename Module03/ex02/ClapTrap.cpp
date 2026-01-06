#include "ClapTrap.hpp"

ClapTrap&	ClapTrap::operator=(const ClapTrap &c){
	if (this != &c){
		name = c.name;
		HP = c.HP;
		EP = c.EP;
		AD = c.AD;
	}
	return (*this);
}

ClapTrap::ClapTrap(const ClapTrap& other){
	this->name = other.name;
	this->HP = other.HP;
	this->EP = other.EP;
	this->AD = other.AD;
}

void	ClapTrap::attack(const std::string& target){
	if (HP <= 0){
		std::cout << "ClapTrap " << name << " cant attack (You are dead :b)" << std::endl;
		return ;
	}
	if (EP <= 0){
		std::cout << "ClapTrap " << name << " cant attack (No Energy points left)" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << target << " was attacked , causing " << AD << " points of damage" << std::endl;
	EP -= 1;
}

void	ClapTrap::takeDamage(unsigned int amount){
	if (HP <= 0){
		std::cout << "ClapTrap " << name << " You are dead :b" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << name << " lost " << amount << " of health" << std::endl;
	if (amount >= HP)
		HP = 0;
	else
		HP -= amount;
}

void	ClapTrap::beRepaired(unsigned int amount){
	if (EP <= 0 || HP <= 0){
		std::cout << "ClapTrap " << name << " cant be repaired" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << name << " regained "<< amount << " of health points" << std::endl;
	HP += amount;
	EP -= 1;
}

ClapTrap::ClapTrap(std::string na){
	name = na;
	HP = 10;
	EP = 10;
	AD = 0;
	std::cout << "ClapTrap player " << name << " has been summoned" << std::endl;
}

ClapTrap::ClapTrap() : name("cinamoroll"), HP(10), EP(10), AD(0){
	std::cout << "ClapTrap player " << name << "  has been summoned" << std::endl;
}

ClapTrap::~ClapTrap(){
	std::cout << "ClapTrap player " << name << " has left" << std::endl;
}