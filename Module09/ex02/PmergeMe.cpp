#include "PmergeMe.hpp"

bool check_str(char *str) {
	if (!str || *str == '\0') return false;
	for (int i = 0; str[i]; i++) {
		if (!std::isdigit(str[i]))
			return false;
	}
	return true;
}

int PmergeMe::stoi(char **str, PmergeMe& c){
	for (int i = 0; i < size ; i++){
		if(!check_str(str[i]))
				return (std::cerr << "Error\n", 1);
		long long value = std::atol(str[i]);
		if (value > INT_MAX) return (std::cerr << "Error\n", 1);
		c.vec.push_back(value);
		c.deq.push_back(value);
	}
	return 0;
}

template<typename T>
size_t return_size(T& container){
	size_t size;
	if (container.size() % 2 != 0)
		size = container.size() - 1;
	else
		size = container.size();
	return size;
}

template<typename T>
void	sortBYpairs(T& container){
	std::vector<std::pair<int, int> > pairs;
	if(container.size() < 2) return;

	int straggler = -1;
    bool has_straggler = (container.size() % 2 != 0);
    if (has_straggler) {
        straggler = container.back();
        container.pop_back();
    }

	int size = return_size(container);
	for (int i = 0; i < size; i += 2){
		if (container[i] > container[i + 1])
			pairs.push_back(std::make_pair(container[i + 1], container[i]));
		else
			pairs.push_back(std::make_pair(container[i], container[i + 1]));
	}

	T winners;
	for (int i = 0; i < pairs.size(); ++i)
		winners.push_back(pairs[i].second);
	sortBYpairs(winners);







}
