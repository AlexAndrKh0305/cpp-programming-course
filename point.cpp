#include "point.h"
#include <cmath>

Point::Point(double x, double y) {
	this->x = x;
	this->y = y;
}

double Point::distanceFromOrigin() const {
	return std::sqrt(x * x + y * y);
}

std::ostream& operator<< (std::ostream& out, const Point& point) {
	out << "x = " << point.x << ", y = " << point.y << "\n";
	return out;
}

bool operator< (const Point& point1, const Point& point2) {
	return point1.distanceFromOrigin() < point2.distanceFromOrigin();
}