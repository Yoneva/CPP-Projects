#pragma once
# include <stdbool.h>
# include <string.h>
# include "Contact.hpp"

class PhoneBook {
	private:
		Contact contacts[8];
		int	count;
	public:
		void	add_to_contacts();
		void	search_for_contacts();
};