#include "PmergeMe.hpp"

PmergeMe::PmergeMe(int len) : size(len){}

PmergeMe::PmergeMe() : size(0) {}

PmergeMe& PmergeMe::operator=(const PmergeMe& other) {
	if (this != &other) {
		this->size = other.size;
		this->vec = other.vec;
		this->deq = other.deq;
	}
	return *this;
}

PmergeMe::PmergeMe(const PmergeMe& other) {
	*this = other;
}

PmergeMe::~PmergeMe(){}

std::vector<int>& PmergeMe::getVec() { return this->vec; }
std::deque<int>& PmergeMe::getDeq() { return this->deq; }

bool check_str(char *str) {
	if (!str || *str == '\0') return false;
	for (int i = 0; str[i]; i++) {
		if (!std::isdigit(str[i]))
			return false;
	}
	return true;
}

int PmergeMe::stoi(char **str){
	for (int i = 0; i < size ; i++){
		if(!check_str(str[i]))
				return (std::cerr << "Error\n", 1);
		long long value = std::atol(str[i]);
		if (value > INT_MAX) return (std::cerr << "Error\n", 1);
		vec.push_back(value);
		deq.push_back(value);
	}
	return 0;
}
