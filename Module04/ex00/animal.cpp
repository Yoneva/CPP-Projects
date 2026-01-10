#include "animal.hpp"

void	Animal::setType(std::string ty){
	type = ty;
}

std::string	Animal::getType(){
	return (type);
}

void	Animal::makeSound(){
	std::cout << "waaaa3" << std::endl;
}

Animal::Animal(){
	setType("animal");
}

Animal& Animal::operator=(const Animal& other){
	if (this != &other)
		*this = other;
	return *this;
}

Animal::Animal(const Animal& an){
	*this = an;
}

Animal::~Animal(){
	std::cout << "dead animal" << std::endl;
}