#include "cat.hpp"

void	Cat::makeSound() const{
	std::cout << "miwww" << std::endl;
}

Cat::Cat(){
	std::cout << "Cat is here" << std::endl;
	ideas = new Brain();
	setType("Cat");
}

Cat& Cat::operator=(const Cat& other){
	if (this != &other){
		type = other.type;
		delete (ideas);
		ideas = new Brain(*other.ideas);
	}
	return *this;
}

Cat::Cat(const Cat& an){
	std::cout << "Cat is here" << std::endl;
	type = an.type;
	ideas = new Brain(*an.ideas);
}

Cat::~Cat(){
	delete (ideas);
	std::cout << "Cat is dead" << std::endl;
}
