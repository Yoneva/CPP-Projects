#pragma once

# include <iostream>

class Weapon{
	private:
		std::string type;
	public:
		std::string&	getType();
		void		setType(const char *type);
		Weapon(const char *weapon);
		Weapon(std::string weapon);
};