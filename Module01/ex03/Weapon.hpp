#pragma once

# include <iostream>
# include <iomanip>

class Weapon{
	private:
		std::string type;
	public:
		std::string&	getType();
		void		setType(std::string type);
		Weapon(std::string weapon);
};