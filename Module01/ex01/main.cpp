#include "Zombie.hpp"

int	main()
{
	int n_Zombie = 4;
	std::string name = "amal";
	Zombie *new_z = zombieHorde(n_Zombie, name);
	for(int i = 0; i < n_Zombie; i++)
		new_z[i].announce();
	delete[] new_z;
}