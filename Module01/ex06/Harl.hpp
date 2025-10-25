#pragma once

# include <fstream>
# include <iostream>
# include <iomanip>
# include <string>
# include <stdbool.h>

class Harl {
	private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
	public:
		void	complain(std::string level);
};
