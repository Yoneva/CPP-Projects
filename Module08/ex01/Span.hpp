#pragma once

#include <vector>
#include <iostream>
#include <stdexcept>
#include <algorithm>

class Span{
	private:
		std::vector<int> set;
		unsigned int N;
	public:
		Span();
		Span(unsigned int N);
		Span(const Span &other);
		Span &operator=(const Span &other);
		~Span();

		void addNumber(int number);
		unsigned int shortestSpan();
		unsigned int longestSpan();
		void	addMoreNumber(std::vector<int>::iterator begin,std::vector<int>::iterator end);
};