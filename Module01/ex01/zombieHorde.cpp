#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	Zombie *new_Z = new Zombie[N];
	for (int i = 0; i < N; i++)
		new_Z[i].announce();
	return (new_Z);
}

Zombie::Zombie(){}

Zombie::Zombie(std::string name_Z){
	Zombie::name = name_Z;
}