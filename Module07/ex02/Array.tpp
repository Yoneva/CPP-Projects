#pragma once
#include "Array.hpp"

template <typename T>
Array<T>::Array(): array(NULL), len(0){}


template <typename T>
Array<T>::Array(unsigned int n){
	array = new T[n]();
	len = n;
}

template <typename T>
Array<T>::Array(const Array<T>& n): array(NULL), len(0){
	*this = n;
}

template <typename T>
Array<T>&	Array<T>::operator=(Array<T>& other){
	if(this != &other){
		delete[] array;
		len = other.len;
		if (len > 0){
			array = new T[len]();
			for (int i = 0; i < len; i++){
				this->array[i] = other.array[i];
			}
		}
		else {
			this->array = NULL;
		}
	}
	return (*this);
}

template <typename T>
T&	Array<T>::operator[](unsigned int index) {
	if (index >= len)
		throw std::out_of_range("Index out of bounds");
	return array[index];
}

template <typename T>
Array<T>::~Array() {
    delete[] array;
}

template <typename T>
unsigned int Array<T>::size() const{
	return len;
}
