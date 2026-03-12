#include "PmergeMe.hpp"

long long get_time() {
	struct timeval tv;
	gettimeofday(&tv, NULL);
	return (tv.tv_sec * 1000000LL) + tv.tv_usec;
}

int find_loser_of(const std::vector<std::pair<int, int> >& pairs, int winner) {
	for (size_t i = 0; i < pairs.size(); ++i) {
		if (pairs[i].second == winner) {
			return pairs[i].first;
		}
	}
	return -1;
}

template<typename T>
T	generate_Jacobsthal_sequance(T& winners){
	T jacob;
	jacob.push_back(1);
	jacob.push_back(3);

	while(static_cast<size_t>(jacob.back()) < winners.size()){
		int next = jacob[jacob.size() - 1] + 2 * jacob[jacob.size() - 2];
		jacob.push_back(next);
	}
	return jacob;
}

template<typename T>
void	sortBYpairs(T& container){
	std::vector<std::pair<int, int> > pairs;
	int size;
	if(container.size() < 2) return;

	int straggler = -1;
	bool has_straggler = (container.size() % 2 != 0);
	if (has_straggler) {
		straggler = container.back();
		container.pop_back();
	}

	size = container.size();
	for (int i = 0; i < size; i += 2){
		if (container[i] > container[i + 1])
			pairs.push_back(std::make_pair(container[i + 1], container[i]));
		else
			pairs.push_back(std::make_pair(container[i], container[i + 1]));
	}

	T winners;
	for (size_t i = 0; i < pairs.size(); ++i)
		winners.push_back(pairs[i].second);
	sortBYpairs(winners);

	T final_chain = winners;
	int f_loser = find_loser_of(pairs, winners[0]);
	final_chain.insert(final_chain.begin(), f_loser);

	T jacob_sequence = generate_Jacobsthal_sequance(winners);
	size_t l_jacob = 1;
	for (size_t i = 1; i < jacob_sequence.size(); ++i){
		size_t current_jacob = jacob_sequence[i];
		for (size_t j = current_jacob; j > l_jacob; --j) {
			if (j <= winners.size()) {
				int loser = find_loser_of(pairs, winners[j - 1]);
				
				typename T::iterator it = std::lower_bound(final_chain.begin(), final_chain.end(), loser);
				final_chain.insert(it, loser);
			}
		}
		l_jacob = current_jacob;
	}

	if (has_straggler){
		typename T::iterator it = std::lower_bound(final_chain.begin(), final_chain.end(), straggler);
		final_chain.insert(it, straggler);
	}
	container = final_chain;
}


int main(int ac, char **av) {
	if (ac < 2) return (std::cerr << "Error: No input\n", 1);

	PmergeMe c(ac - 1);
	if (c.stoi(av + 1) != 0) return 1;

	std::cout << "Before: ";
	c.printContainer(c.getVec());

	long long start_vec = get_time();
	sortBYpairs(c.getVec());
	long long end_vec = get_time();

	long long start_deq = get_time();
	sortBYpairs(c.getDeq());
	long long end_deq = get_time();

	std::cout << "After:  ";
	c.printContainer(c.getDeq());

	std::cout << "Time to process a range of " << (ac - 1) << " elements with std::vector : " 
			  << (end_vec - start_vec) << " us" << std::endl;
	std::cout << "Time to process a range of " << (ac - 1) << " elements with std::deque  : " 
			  << (end_deq - start_deq) << " us" << std::endl;

	return 0;
}