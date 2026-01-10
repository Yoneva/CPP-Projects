#include "cat.hpp"

void	Cat::makeSound(){
	std::cout << "miwww" << std::endl;
}

Cat::Cat(){
	setType("Cat");
}

Cat& Cat::operator=(const Cat& other){
	if (this != &other)
		*this = other;
	return *this;
}

Cat::~Cat(){
	std::cout << "Cat is dead" << std::endl;
}
