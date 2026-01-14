#include "brain.hpp"

Brain::Brain(){
	for (int i = 0; i < 100; ++i)
		ideas[i] = "";
}

Brain::Brain(const Brain& an){
	*this = an;
}

Brain& Brain::operator=(const Brain& other){
	if (this != &other){
		for (int i = 0; i < 100; ++i)
			ideas[i] = other.ideas[i];
	}
	return *this;
}

Brain::~Brain(){
	std::cout << "ideas cleared" << std::endl;
}