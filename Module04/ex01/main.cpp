#include "animal.hpp"
#include "dog.hpp"
#include "cat.hpp"

int	main(){
	std::cout << "=== Basic tests ===" << std::endl;
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;
	delete i;

	std::cout << "\n=== Array of Animals ===" << std::endl;
	const Animal* animals[10];

	for (int i = 0; i < 5; i++)
		animals[i] = new Dog();
	for (int i = 5; i < 10; i++)
		animals[i] = new Cat();
	for (int i = 0; i < 10; i++)
		delete animals[i];
	std::cout << "\n=== Deep copy test ===" << std::endl;
	Dog basic;
	{
		Dog tmp = basic;
	}
	std::cout << "\n=== Assignment operator test ===" << std::endl;
	Cat cat1;
	Cat cat2;
	cat2 = cat1;

	return 0;
}