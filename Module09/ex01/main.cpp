#include "RPN.hpp"

int main(int ac, char **av){
	if (ac != 2)
		return (std::cerr << "Wrong argument\n", 1);
	if(RPN(av)) return 1;
	return 0;
}