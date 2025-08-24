#include "Contact.hpp"

void	Contact::set_contacts(std::string fn, std::string ln, std::string nn, std::string nb, std::string ds)
{
	f_name = fn;
	l_name = ln;
	n_name = nn;
	number = nb;
	darkest_s = ds;
}

std::string	ten_chars(std::string string)
{
	std::string	tmp;

	if (string.length() <= 10)
		return (string);
	tmp = string.substr(0, 10);
	tmp[9] = '.';
	return (tmp);
}

void	Contact::print_contact(int index)
{
		std::cout << std::setw(10) << index << "|";
		std::cout << std::setw(10) << ten_chars(f_name) << "|";
		std::cout << std::setw(10) << ten_chars(l_name) << "|";
		std::cout << std::setw(10) << ten_chars(n_name) << std::endl;
}

void	Contact::print_index_info()
{
	std::cout << "First name :" << f_name << std::endl;
	std::cout << "Last name :" << l_name << std::endl;
	std::cout << "Nickname :" << n_name << std::endl;
	std::cout << "Phone number :" << number << std::endl;
	std::cout << "Darkest secret :" << darkest_s << std::endl;
}