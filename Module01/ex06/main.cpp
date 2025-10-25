#include "Harl.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
		return 0;
	Harl m3sb;
	m3sb.complain(av[1]);
}