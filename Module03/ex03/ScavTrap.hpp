#pragma once

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
	public:
		ScavTrap(const ScavTrap& other);
		ScavTrap& operator=(const ScavTrap& other);

		void	guardGate();
		void	attack(const std::string& target);

		ScavTrap(std::string name);
		ScavTrap();
		~ScavTrap();
} ;