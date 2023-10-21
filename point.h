#pragma once
#include <ostream>

class Point {

private:
	double x;
	double y;

public:
	Point(double x, double y);
	double distanceFromOrigin() const ;
	friend std::ostream& operator<< (std::ostream& out, const Point& point);
	friend bool operator< (const Point& point1, const Point& point2);

};