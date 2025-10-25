/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsbai <amsbai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 03:39:17 by amsbai            #+#    #+#             */
/*   Updated: 2025/10/23 12:15:50 by amsbai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

static const char	*remove_spaces(std::string input)
{
	for(int i = input.length() - 1; i > 0; i--)
	{
		if (input[i] != ' ')
		{
			input[i + 1] = 0;
			break ;
		}
	}
	int i;
	
	i = 0;
	while (input[i] == ' ')
		i++;
	return(input.c_str() + i);
}

std::string	parse_word(std::string needed)
{
	std::string	input;
	while(1)
	{
		std::cout << needed;
		std::getline(std::cin, input);
		std::string parsed(remove_spaces(input));
		if(parsed.empty())
			continue ;
		return (parsed);
	}
}

std::string	parse_number(std::string needed)
{
	std::string	input;
	while(1)
	{
		std::cout << needed;
		std::getline(std::cin, input);
		if(input.empty())
			continue ;
		std::string parsed(remove_spaces(input));
		int i;
		int	flag = 0;
		for(i = 0; parsed[i]; i++)
		{
			if(!std::isdigit(parsed[i]))
			{
				flag = -1;
				break ;
			}
		}
		if(flag == -1)
			continue ;
		return (parsed);
	}
}

void	PhoneBook::add_to_contacts()
{
	std::string	fn, ln, nn, nb, ds;
	static int	i;
	static bool	flag;
	
	fn = parse_word("Enter first name :");
	ln = parse_word("Enter last name :");
	nn = parse_word("Enter nickname :");
	nb = parse_number("Enter phone number :");
	ds = parse_word("Enter darkest secret :");
	contacts[i].set_contacts(fn, ln, nn, nb, ds);
	i++;
	if (flag == false)
		count = i;
	if(i == 8)
	{
		flag = true;
		i = 0;
	}
}

void	PhoneBook::search_for_contacts()
{
	std::cout << std::setw(10) << "Index" << "|";
	std::cout << std::setw(10) << "First name" << "|";
	std::cout << std::setw(10) << "Last name" << "|";
	std::cout << std::setw(10) << "Nickname" << std::endl;
	int	i = 0;
	std::string index;

	while (i < count)
	{
		contacts[i].print_contact(i);
		i++;
	}
	std::cout << "Index :";
	std::getline(std::cin,index);
	(index.length() != 1 || index.empty()) ? i = -1 : i = std::atoi(index.c_str());
	if(i > count || i == -1)
		return ;
	contacts[i].print_index_info();
	
}