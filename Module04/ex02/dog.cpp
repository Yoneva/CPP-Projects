#include "dog.hpp"

void	Dog::makeSound() const{
	std::cout << "3aw 3aw" << std::endl;
}

Dog& Dog::operator=(const Dog& other){
	if (this != &other){
		type = other.type;
		delete (ideas);
		ideas = new Brain(*other.ideas);
	}
	return *this;
}

Dog::Dog(){
	std::cout << "Dog is here" << std::endl;
	ideas = new Brain();
	setType("Dog");
}

Dog::Dog(const Dog& an){
	std::cout << "Dog is here" << std::endl;
	type = an.type;
	ideas = new Brain(*an.ideas);
}

Dog::~Dog(){
	delete (ideas);
	std::cout << "Dog is dead" << std::endl;
}