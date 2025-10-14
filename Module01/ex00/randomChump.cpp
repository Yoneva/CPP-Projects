#include "Zombie.hpp"

void	randomChump(std::string name)
{
	Zombie dead = Zombie(name);
	dead.announce();
}