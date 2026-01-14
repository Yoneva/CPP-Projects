#pragma once

#include <iostream>

class Animal{
	protected:
		std::string	type;
	public:
		Animal& operator=(const Animal& other);

		virtual void	makeSound() const = 0;
		std::string	getType() const;
		void	setType(const std::string type);

		Animal();
		Animal(const Animal& an);
		virtual ~Animal();
};