#include "Character.hpp"
#include "MateriaSource.hpp"
#include "ice.hpp"
#include "cure.hpp"

int	main(){
	std::cout << "=== Basic Test ===" << std::endl;
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);

	std::cout << "\n=== Unequip Test ===" << std::endl;
	me->unequip(0);
	me->use(0, *bob);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	me->use(0, *bob);

	std::cout << "\n=== Full Inventory ===" << std::endl;
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("ice");
	delete tmp;  

	std::cout << "\n=== Deep Copy Test ===" << std::endl;
	Character original("original");
	AMateria* ice = src->createMateria("ice");
	AMateria* cure = src->createMateria("cure");
	original.equip(ice);
	original.equip(cure);
	
	Character copy = original;
	std::cout << copy.getName() << " with copied materias:" << std::endl;
	copy.use(0, *bob);
	copy.use(1, *bob);
	delete (bob);
	delete (me);
	delete (src);
	return (0);
}