#pragma once

# include "Weapon.hpp"
# include <iostream>
# include <iomanip>

class HumanB {
	private:
		std::string	name;
		Weapon		*Weaponn;
	public:
		void	attack();
		void	 setWeapon(Weapon &wep);
		HumanB(std::string name);
};