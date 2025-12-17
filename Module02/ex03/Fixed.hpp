#pragma once

#include <iostream>
#include <cmath>
#include <stdbool.h>

class Fixed {
	private:
		int					number;
		static const int	bits = 8;
	public:
		int		getRawBits(void);
		void	setRawBits(int const raw);

		float	toFloat(void) const;
		int		toInt(void) const;

		static Fixed& min(Fixed& a, Fixed& b);
		static const Fixed& min(const Fixed& a, const Fixed& b);

		static Fixed& max(Fixed& a, Fixed& b);
		static const Fixed& max(const Fixed& a, const Fixed& b);

		//comparison operators
		Fixed&	operator=(const Fixed &c);
		bool	operator!=(const Fixed &c) const;
		bool	operator>(const Fixed &c) const;
		bool	operator<(const Fixed &c) const;
		bool	operator<=(const Fixed &c) const;
		bool	operator>=(const Fixed &c) const;
		bool	operator==(const Fixed &c) const;

		//arithmetic operators
		Fixed	operator+(const Fixed &c);
		Fixed	operator*(const Fixed &c);
		Fixed	operator/(const Fixed &c);
		Fixed	operator-(const Fixed &c);

		//increment/decrement operators
		Fixed	operator--(int);//i--
		Fixed	operator++(int);//i++
		Fixed&	operator--();//--i
		Fixed&	operator++();//++i

		Fixed(const int n);
		Fixed(const float n);
		Fixed(const Fixed &n);
		Fixed();
		~Fixed();
		
};

std::ostream&	operator<<(std::ostream& os, const Fixed& f);