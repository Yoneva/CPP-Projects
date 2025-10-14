#include "Zombie.hpp"

void	Zombie::announce(void)
{
	std::cout << Zombie::name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie(void){
	std::cout << Zombie::name << ": died from starvation since nobody has a brain here" << std::endl;
}