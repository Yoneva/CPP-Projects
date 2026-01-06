#pragma once

#include <iostream>

class ClapTrap{
	private:
		std::string name;
		unsigned int	HP;
		unsigned int EP;
		unsigned int AD;
	public:
		ClapTrap(const ClapTrap& other);
		ClapTrap& operator=(const ClapTrap& other);

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		ClapTrap(std::string name);
		ClapTrap();
		~ClapTrap();
};
