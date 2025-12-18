#pragma once

#include "Fixed.hpp"

class Point {
	private:
		const Fixed x;
		const Fixed y;
	public:
		Point&	operator=(const Point &c);
		Fixed	getY() const;
		Fixed	getX() const;
		Point();
		Point(const Point &n);
		Point(const float a, const float b);
		~Point();


};