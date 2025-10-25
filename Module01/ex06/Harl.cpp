#include "Harl.hpp"

void	Harl::debug(void)
{
	std::cout << "[ DEBUG ]\n" << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "[ INFO ]\n" << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "[ WARNING ]\n" << "I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month.\n" << std::endl;
}

void	Harl::error(void)
{
	std::cout << "[ ERROR ]\n" <<"This is unacceptable! I want to speak to the manager now.\n" << std::endl;
}



void	Harl::complain(std::string level)
{
	int	index;

	if (level == "DEBUG") index = 0;
	else if (level == "INFO") index = 1;
	else if (level == "WARNING") index = 2;
	else if (level == "ERROR") index = 3;
	else index = -1;
	switch (index)
	{
		default:
		{
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break ;
		}
		case 0:
			debug();
		case 1:
			info();
		case 2:
			warning();
		case 3:
			error();
		return ;
	}
}