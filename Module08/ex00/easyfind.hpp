#pragma once

#include <iostream>
#include <algorithm>
#include <vector>
#include <stdexcept>
#include <list>


template <typename T>
typename T::iterator	easyfind(T &param, int n){
	typename T::iterator iT;
	iT = std::find(param.begin(), param.end(), n);
	if (iT == param.end())
		throw std::runtime_error("couldn't find the value");
	std::cout << "value found" << std::endl;
	return (iT);
}


