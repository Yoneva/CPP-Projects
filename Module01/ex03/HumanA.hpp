#pragma once

# include <iostream>
# include <iomanip>

class HumanA {
	private:
		std::string	name;
		std::string	Weapon;
	public:
		void	attack();
		HumanA(std::string W_Type);
		~HumanA();
};