#include "Point.hpp"

Point::Point():x(0), y(0){}

Point&	Point::operator=(const Point &c){
	if (this != &c)
		*this = c;
	return (*this);
}

Fixed	Point::getX() const{
	return (x);
}

Fixed	Point::getY() const{
	return (y);
}
Point::Point(const Point &n): x(n.x), y(n.y){}

Point::Point(const float a, const float b): x(a), y(b){}

Point::~Point(){}