#pragma once

# include "Weapon.hpp"
# include <iostream>
# include <iomanip>

class HumanA {
	private:
		std::string	name;
		Weapon	&Weaponn;
	public:
		void	attack();
		HumanA(std::string name, Weapon &wep);
};