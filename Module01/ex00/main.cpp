#include "Zombie.hpp"

int	main(void)
{
	std::string name = "amal";
	Zombie *new_z = newZombie(name);
	new_z->announce();
	delete(new_z);
	randomChump(name);
}

Zombie::~Zombie(void){
	std::cout << Zombie::name << ": died from starvation since nobody has a brain here" << std::endl;
}