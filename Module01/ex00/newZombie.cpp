#include "Zombie.hpp"

Zombie	*newZombie(std::string name)
{
	Zombie *new_Z = new Zombie(name);
	return (new_Z);
}

Zombie::Zombie(std::string name_Z)
{
	Zombie::name = name_Z;
}
