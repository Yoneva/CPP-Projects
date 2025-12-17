#pragma once

#include <iostream>
#include <cmath>

class Fixed {
	private:
		int					number;
		static const int	bits = 8;
	public:
		int		getRawBits(void);
		void	setRawBits(int const raw);

		float	toFloat(void) const;
		int		toInt(void) const;

		Fixed&	operator=(const Fixed &c);
		
		Fixed(const int n);
		Fixed(const float n);
		Fixed(const Fixed &n); 
		Fixed();
		~Fixed();
};

std::ostream&	operator<<(std::ostream& os, const Fixed& f);