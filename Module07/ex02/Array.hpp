#pragma once

#include <iostream>
#include <stdexcept>

template <typename T>
class Array{
	private:
		T *array;
		unsigned int len;
	public:
		Array();
		Array(unsigned int n);
		Array(const Array &other);
		~Array();

		Array&	operator=(Array& other);
		T&	operator[](unsigned int index);
	
		unsigned int size() const;
};
#include "Array.tpp"

