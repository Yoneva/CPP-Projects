#include "animal.hpp"
#include "dog.hpp"
#include "cat.hpp"

int	main(){
	//this will not compile (abstract class):
	// Animal a;

	// this will works (polymorphic pointers):
	Animal* j = new Dog();
	Animal* i = new Cat();
	
	j->makeSound();
	i->makeSound();
	
	delete j;
	delete i;
	return 0;
}
