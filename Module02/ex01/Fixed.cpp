#include "Fixed.hpp"

void Fixed::setRawBits(int const raw)
{
	number = raw;
}

int Fixed::getRawBits(void){
	std::cout << "getRawBits member function called" << std::endl;
	return (number);
}

Fixed&	Fixed::operator=(const Fixed &c){
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &c)
		number = c.number;
	return (*this);
}

std::ostream&	operator<<(std::ostream& os, const Fixed& f){
	os << f.toFloat();
	return (os);
}

Fixed::Fixed()
{
	setRawBits(0);
	std::cout << "Default constructor called" << std::endl;
}

float	Fixed::toFloat(void) const
{
	return (number / float(1 << bits));
}

int		Fixed::toInt(void) const
{
	return (roundf(number >> bits));
}

Fixed::Fixed(const float n){
	number = roundf(n * (1 << bits));
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const int n){
	number = n << bits;
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &n){
	number = n.number;
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}