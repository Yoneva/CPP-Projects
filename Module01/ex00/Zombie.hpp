#pragma once

# include <iostream>
# include <iomanip>

class Zombie {
	private:
		std::string	name;
	public:
		void	announce(void);
		Zombie(std::string	name);
		~Zombie(void);
};