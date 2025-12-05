#include "Fixed.hpp"

void Fixed::setRawBits(int const raw)
{
	number = raw;
}

int Fixed::getRawBits( void )
{
	std::cout << "getRawBits member function called" << std::endl;
	return (number);
}

Fixed& Fixed::operator=(const Fixed &c){
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &c)
		number = c.number;
	return (*this);
}

Fixed::Fixed()
{
	setRawBits(0);
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &n){
	number = n.number;
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}