#pragma once
# include <iostream>
# include <iomanip>

class Contact{
	private:
		std::string f_name;
		std::string	l_name;
		std::string	n_name;
		std::string	number;
		std::string	darkest_s;
	public:
		void	set_contacts(std::string fn, std::string ln, std::string nn, std::string nb, std::string ds);
		void	print_contact(int index);
		void	print_index_info();
};