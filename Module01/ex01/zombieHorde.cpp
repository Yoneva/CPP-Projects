#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	Zombie *new_Z = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		new_Z[i].setname(name);
		// new_Z[i].announce();
	}
	return (new_Z);
}

Zombie::Zombie(){}

void	Zombie::setname(std::string name_Z){
	name = name_Z;
}