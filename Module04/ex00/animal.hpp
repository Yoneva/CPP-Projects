#pragma once

#include <iostream>

class Animal{
	protected:
		std::string	type;
	public:
		Animal& operator=(const Animal& other);

		virtual void	makeSound();
		std::string	getType();
		void	setType(std::string type);

		Animal();
		Animal(const Animal& an);
		virtual ~Animal();
};