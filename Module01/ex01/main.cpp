#include "Zombie.hpp"

int	main()
{
	int n_Zombie = 4;
	std::string name = "amal";
	Zombie *new_z = zombieHorde(n_Zombie, name);
	delete[] new_z;
}