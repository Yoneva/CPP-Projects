#include "Span.hpp"

int main()
{
	std::cout << "--- Manual testing ---" << std::endl; 
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	std::cout << "--- range testing ---" << std::endl;

	Span ds = Span(10000);
	std::vector<int> tmp;

	for (int i = 0; i < 10000; i++)
		tmp.push_back(i);

	ds.addMoreNumber(tmp.begin(), tmp.end());
	std::cout << ds.shortestSpan() << std::endl;
	std::cout << ds.longestSpan() << std::endl;
	
	return 0;
}