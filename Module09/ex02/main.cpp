#include "PmergeMe.hpp"

PmergeMe::PmergeMe(int len) : size(len){}

int main(int ac, char **av){
	if(ac == 1)
		return (std::cerr << "More arguments :>\n", 1);
	PmergeMe c(ac);
	
}