#pragma once

# include <iostream>
# include <iomanip>

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