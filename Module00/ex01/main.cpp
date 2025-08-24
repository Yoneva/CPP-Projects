/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsbai <amsbai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 03:57:00 by amsbai            #+#    #+#             */
/*   Updated: 2025/08/23 12:00:16 by amsbai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include "Contact.hpp"

int	main()
{
	PhoneBook phonebook;
	std::string input;
	std::cout << "I just crashed my new Kia. Now I have Nokia" << std::endl;
	std::cout << "Welcome to Nokia :b" << std::endl;
	for (;;)
	{
		std::cout << "Entre ADD, SEARCH or EXIT to leave" << std::endl;
		if (std::cin.eof())
			exit(0);
		std::getline(std::cin, input);
		if (input == "EXIT")
			break ;
		else if (input == "ADD")
			phonebook.add_to_contacts();
		else if (input == "SEARCH")
			phonebook.search_for_contacts();
	}
}