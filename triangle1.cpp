#include "triangle1.h"
#include "dot.h"
#include <iostream>
#include <cmath>

Triangle1::Triangle1(double x1, double y1, double x2, double y2, double x3, double y3) {
	Dot* dot1 = new Dot(x1, y1);
	Dot* dot2 = new Dot(x2, y2);
	Dot* dot3 = new Dot(x3, y3);

	this->dot1 = dot1;
	this->dot2 = dot2;
	this->dot3 = dot3;
}

void Triangle1::printSides() {
	std::cout << "Side1 = " << dot1->distanceTo(*dot2) << std::endl;
	std::cout << "Side2 = " << dot1->distanceTo(*dot3) << std::endl;
	std::cout << "Side3 = " << dot2->distanceTo(*dot3) << std::endl;
}

double Triangle1::square() {
	double side1 = dot1->distanceTo(*dot2);
	double side2 = dot1->distanceTo(*dot3);
	double side3 = dot2->distanceTo(*dot3);
	double semiPerimeter = (side1 + side2 + side3) / 2;
	return std::sqrt(semiPerimeter * (semiPerimeter - side1)
		* (semiPerimeter - side2) * (semiPerimeter - side3));
}

double Triangle1::perimeter() {
	double side1 = dot1->distanceTo(*dot2);
	double side2 = dot1->distanceTo(*dot3);
	double side3 = dot2->distanceTo(*dot3);
	return side1 + side2 + side3;
}