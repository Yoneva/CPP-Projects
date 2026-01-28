#include "Span.hpp"

Span::Span() : N(0){}
Span::Span(unsigned int N) : N(N){}
Span::~Span(){}

Span&	Span::operator=(const Span &other){
	if (this != &other){
		N = other.N;
		set = other.set;
	}
	return (*this);
}

Span::Span(const Span &other){*this = other;};


void	Span::addMoreNumber(std::vector<int>::iterator begin,std::vector<int>::iterator end){
	if (set.size() + std::distance(begin, end) > N)
		throw std::out_of_range("Adding this range would exceed Span capacity");
	set.insert(set.end(), begin, end);
}

void Span::addNumber(int number){
	if (set.size() >= N)
		throw std::out_of_range("Adding this range would exceed Span capacity");
	set.push_back(number);
}

unsigned int Span::shortestSpan(){
	if (set.size() < 2)
		throw std::out_of_range("set too short, add more");
	std::sort(set.begin(), set.end());
	unsigned int min_diff = static_cast<unsigned int>(set[1] - set[0]);

	for (size_t i = 1; i < set.size(); i++){
		unsigned int curr_diff = static_cast<unsigned int>(set[i] - set[i - 1]);
		if(curr_diff < min_diff){
			min_diff = curr_diff;
		}
	}
	return (min_diff);
}

unsigned int Span::longestSpan(){
	if (set.size() < 2)
		throw std::out_of_range("set too short, add more");

	int min = *std::min_element(set.begin(), set.end());
	int max = *std::max_element(set.begin(), set.end());

	return	static_cast<unsigned int>(max - min);
}



