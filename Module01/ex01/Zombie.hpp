#pragma once

# include <iostream>

class Zombie {
	private:
		std::string	name; 
	public:
		void	announce(void);
		void	setname(std::string name_Z);
		Zombie();
		~Zombie(void);
};

Zombie	*zombieHorde(int N, std::string name);