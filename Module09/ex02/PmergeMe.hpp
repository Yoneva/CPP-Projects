#pragma once

#include <iostream>
#include <deque>
#include <vector>
#include <sys/time.h>
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
		~PmergeMe();
		PmergeMe(const PmergeMe& other);
		PmergeMe&	operator=(const PmergeMe &other);

		PmergeMe(int len);
		int stoi(char **str);

		template<typename T>
		void printContainer(const T& container) {
			for (typename T::const_iterator it = container.begin(); it != container.end(); ++it) {
				std::cout << *it << (it + 1 == container.end() ? "" : " ");
			}
			std::cout << std::endl;
		}
		std::vector<int>& getVec();
		std::deque<int>& getDeq();
};