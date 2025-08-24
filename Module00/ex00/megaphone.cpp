/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsbai <amsbai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 01:02:37 by amsbai            #+#    #+#             */
/*   Updated: 2025/08/19 03:15:18 by amsbai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 1;
	}
	for (int j = 1; av[j]; j++)
	{
		for(int i = 0; av[j][i]; i++)
		{
			std::putchar(toupper(av[j][i]));
		}
	}
	std::cout << std::endl;
}