#include "animal.hpp"

void	Animal::setType(const std::string ty){
	type = ty;
}

std::string	Animal::getType() const{
	return (type);
}

void	Animal::makeSound() const{
	std::cout << "waaaa3" << std::endl;
}

Animal::Animal(){
	setType("animal");
}

Animal& Animal::operator=(const Animal& other){
	if (this != &other)
		type = other.type;
	return *this;
}

Animal::Animal(const Animal& an){
	*this = an;
}

Animal::~Animal(){
	std::cout << "animal is dead" << std::endl;
}