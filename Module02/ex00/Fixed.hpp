#pragma once

#include <iostream>

class Fixed {
	private:
		int					number;
		static const int	bits =8 ;
	public:
		int		getRawBits( void );
		void	setRawBits( int const raw );

		Fixed&	operator=(const Fixed &c);
		
		Fixed(const Fixed &n); 
		Fixed();
		~Fixed();
};