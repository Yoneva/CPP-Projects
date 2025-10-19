#pragma once

# include <iostream>
# include <iomanip>

class HumanB {
	private:
		std::string	name;
		std::string	Weapon;
	public:
		void	attack();
		HumanB();
		~HumanB();
};