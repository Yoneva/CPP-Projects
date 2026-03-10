#include "RPN.hpp"

bool is_operator(char c){
	return (c == '+'|| c == '-' || c == '/' || c == '*');
}

int RPN(char **av){
	std::stack<int> cont;
	std::string calcul;

	calcul = static_cast<std::string>(av[1]);
	int len = calcul.size();
	for (int i = 0; i < len ; i++){
		if(std::isdigit(calcul[i])){
			if (i != 0 && std::isdigit(calcul[i - 1]))
				return (std::cerr << "The numbers used in this operation and passed as arguments must always be less than 10\n", 1);
			cont.push(calcul[i] - '0');
		}
		else if(is_operator(av[1][i])){
			if (cont.size() >= 2){
				int b = cont.top();
				cont.pop();
				int a = cont.top();
				cont.pop();
				if (av[1][i] == '-') cont.push(a - b);
				else if (av[1][i] == '*') cont.push(a * b);
				else if (av[1][i] == '/') cont.push(a / b);
				else if (av[1][i] == '+') cont.push(a + b);
			}
			else
				return (std::cerr << "False Reverse Polish Notation form\n", 1);
		}
		else if (std::isspace(av[1][i])) continue;
		else
			return (std::cerr << "Error\n", 1);
		
	}
	if (cont.size() != 1) return (std::cerr << "False Reverse Polish Notation form\n", 1);
	std::cout << cont.top() << std::endl;
	return 0;
}