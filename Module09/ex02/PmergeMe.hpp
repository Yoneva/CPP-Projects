#pragma once

#include <iostream>
#include <deque>
#include <vector>
#include <utility>
#include <cctype>
#include <algorithm>

class PmergeMe{
	private:
		int size;
		std::vector<int> vec;
		std::deque<int> deq;
	public:
		PmergeMe();
		PmergeMe(PmergeMe& other);
		PmergeMe&	operator=(PmergeMe &other);
		PmergeMe(int len);
		~PmergeMe();

		int stoi(char **str, PmergeMe& c);
};