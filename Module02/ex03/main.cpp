#include "Point.hpp"
#include "Point.hpp"

bool bsp(const Point a, const Point b, const Point c, const Point point);

int main() {
	Point a(0, 0);
	Point b(5, 0);
	Point c(0, 5);

	Point p1(2, 2);
	Point p2(5, 5);
	Point p3(0, 0);
	Point p4(2.5, 0);

	std::cout << std::boolalpha;

	std::cout << "p1 inside triangle: " << bsp(a, b, c, p1) << std::endl;
	std::cout << "p2 inside triangle: " << bsp(a, b, c, p2) << std::endl;
	std::cout << "p3 inside triangle: " << bsp(a, b, c, p3) << std::endl;
	std::cout << "p4 inside triangle: " << bsp(a, b, c, p4) << std::endl;

	return 0;
}