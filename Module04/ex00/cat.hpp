#pragma once

#include "animal.hpp"

class Cat : public Animal{
	public:
		Cat& operator=(const Cat& other);
		void	makeSound();
		Cat(const Cat& an);
		Cat();
		~Cat();
};