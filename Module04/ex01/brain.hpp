#pragma once

#include "animal.hpp"

class Brain {
	private:
		std::string ideas[100];
	public:
		Brain& operator=(const Brain& other);
		Brain();
		Brain(const Brain& an);
		~Brain();
};