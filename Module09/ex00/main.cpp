#include "BitcoinExchange.hpp"

int main(int ac, char **av){
	if (ac != 2){
		std::cout << "one argument :>" << std::endl;
		return (1);
	}

	std::map<std::string, float> map;
	std::ifstream input(av[1]);
	std::ifstream info("data.csv");
	if (!input.is_open() || !info.is_open()){
		std::cerr << "Couldn't open this file, try again!!" << std::endl;
		return (info.close() ,input.close() ,1);
	}
	map = fill_map(map, info);
	calculator(map, input);
}