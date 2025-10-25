#include "Harl.hpp"

void	Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level)
{
	std::string cases[] = {"DEBUG","INFO","WARNING","ERROR"};
	void	(Harl::*Level[])(void) = {&Harl::debug,&Harl::info,&Harl::warning,&Harl::error};

	for (int i = 0; i < 4; i++)
	{
		if(cases[i] == level)
		{
			(this->*Level[i])();
			return ;
		}
	}
	std::cout << "Harl has no words for this *too stunned to speak*" << std::endl;
}