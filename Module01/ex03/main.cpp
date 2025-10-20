#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{	
	Weapon	l9atala;

	l9atala.setType("sword");
	std::string W_used = l9atala.getType();
	HumanA *A = new HumanA(W_used);
	HumanB *B = new HumanB();
	


}