#include "Fixed.hpp"
#include "Point.hpp"

Fixed	sign(const Point &p1, const Point &p2, const Point &p3) {
	return (p1.getX() - p3.getX()) * (p2.getY() - p3.getY()) -
			(p2.getX() - p3.getX()) * (p1.getY() - p3.getY());
}

bool	bsp(Point const a, Point const b, Point const c, Point const point){
	Fixed p1,p2,p3 = 0;

	p1 = sign(point, a, b);
	p2 = sign(point, b, c);
	p3 = sign(point, c, a);

	if(p1 == Fixed(0) || p2 == Fixed(0) || p3 == Fixed(0))
		return (false);
	
	if ((p1 > Fixed(0) && p2 > Fixed(0) && p3 > Fixed(0)) || 
		(p1 < Fixed(0) && p2 < Fixed(0) && p3 < Fixed(0)))
    		return (true);
	return (false);
}