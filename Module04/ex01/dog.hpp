#pragma once

#include "animal.hpp"
#include "brain.hpp"

class Dog : public Animal{
	private:
		Brain *ideas;
	public:
		void	makeSound() const;
		Dog& operator=(const Dog& other);
		Dog(const Dog& an);
		Dog();
		~Dog();
};