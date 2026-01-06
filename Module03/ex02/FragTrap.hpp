#pragma once

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
	public:
		FragTrap(const FragTrap& other);
		FragTrap& operator=(const FragTrap& other);

		void	highFivesGuys(void);
		void	attack(const std::string& target);

		FragTrap(std::string name);
		FragTrap();
		~FragTrap();
} ;