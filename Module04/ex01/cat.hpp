#pragma once

#include "brain.hpp"
#include "animal.hpp"

class Cat : public Animal{
	private:
		Brain *ideas;
	public:
		Cat& operator=(const Cat& other);

		void	makeSound() const;

		Cat(const Cat& an);
		Cat();
		~Cat();
};