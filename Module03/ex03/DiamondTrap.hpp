#pragma once

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "ClapTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {
	private:
		std::string name;
	public:
		DiamondTrap(const DiamondTrap& other);
		DiamondTrap& operator=(const DiamondTrap& other);

		void	whoAmI();
		void	attack(const std::string& target);

		DiamondTrap(const std::string& na);
		DiamondTrap();
		~DiamondTrap();
};
