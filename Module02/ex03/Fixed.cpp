#include "Fixed.hpp"

//seter/geter
void	Fixed::setRawBits(int const raw)
{
	number = raw;
}

int	Fixed::getRawBits(void){
	return (number);
}

//operators
Fixed&	Fixed::operator=(const Fixed &c){
	if (this != &c)
		number = c.number;
	return (*this);
}

bool	Fixed::operator!=(const Fixed &c) const{
	return (this->number != c.number);
}

bool	Fixed::operator>=(const Fixed &c) const{
	return (this->number >= c.number);
}

bool	Fixed::operator<=(const Fixed &c) const{
	return (this->number <= c.number);
}

bool	Fixed::operator>(const Fixed &c) const{
	return (this->number > c.number);
}

bool	Fixed::operator<(const Fixed &c) const{
	return (this->number < c.number);
}

bool	Fixed::operator==(const Fixed &c) const{
	return (this->number == c.number);
}

Fixed	Fixed::operator+(const Fixed &c){
	Fixed tmp;
	tmp.number = this->number + c.number;
	return (tmp);
}

Fixed	Fixed::operator-(const Fixed &c){
	Fixed tmp;
	tmp.number = this->number - c.number;
	return (tmp);
}

Fixed	Fixed::operator*(const Fixed &c)
{
	Fixed	tmp;
	long long	result = (long long)this->number * c.number;
	tmp.number = result >> bits;
	return (tmp);
}

Fixed	Fixed::operator/(const Fixed &c){
	Fixed	tmp;
	long long	result = ((long long)this->number << bits) / c.number;
	tmp.number = result;
	return (tmp);
}

Fixed	Fixed::operator--(int){
	Fixed tmp(*this);
	number--;
	return (tmp);
}

Fixed	Fixed::operator++(int){
	Fixed tmp(*this);
	number++;
	return (tmp);
}

Fixed&	Fixed::operator--(){
	number--;
	return (*this);
}

Fixed&	Fixed::operator++(){
	number++;
	return (*this);
}

std::ostream&	operator<<(std::ostream& os, const Fixed& f){
	os << f.toFloat();
	return (os);
}

//functions
float	Fixed::toFloat(void) const
{
	return (number / float(1 << bits));
}

int		Fixed::toInt(void) const
{
	return (roundf(number >> bits));
}

Fixed& Fixed::min(Fixed& a, Fixed& b)
{
	if(a < b)
		return a;
	return b;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
	if(a < b)
		return a;
	return b;
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
	if(a > b)
		return a;
	return b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
	if(a > b)
		return a;
	return b;
}

//constructors/destructor
Fixed::Fixed()
{
	setRawBits(0);
}
Fixed::Fixed(const float n){
	number = roundf(n * (1 << bits));
}

Fixed::Fixed(const int n){
	number = n << bits;
}

Fixed::Fixed(const Fixed &n){
	number = n.number;
}

Fixed::~Fixed(){}