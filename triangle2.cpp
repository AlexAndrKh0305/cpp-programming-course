#include "triangle2.h"
#include "dot.h"
#include <iostream>
#include <cmath>

Triangle2::Triangle2(Dot* dot1, Dot* dot2, Dot* dot3) {
	this->dot1 = dot1;
	this->dot2 = dot2;
	this->dot3 = dot3;
}

void Triangle2::printSides() {
	std::cout << "Side1 = " << dot1->distanceTo(*dot2) << std::endl;
	std::cout << "Side2 = " << dot1->distanceTo(*dot3) << std::endl;
	std::cout << "Side3 = " << dot2->distanceTo(*dot3) << std::endl;
}

double Triangle2::square() {
	double side1 = dot1->distanceTo(*dot2);
	double side2 = dot1->distanceTo(*dot3);
	double side3 = dot2->distanceTo(*dot3);
	double semiPerimeter = (side1 + side2 + side3) / 2;
	return std::sqrt(semiPerimeter * (semiPerimeter - side1)
		* (semiPerimeter - side2) * (semiPerimeter - side3));
}

double Triangle2::perimeter() {
	double side1 = dot1->distanceTo(*dot2);
	double side2 = dot1->distanceTo(*dot3);
	double side3 = dot2->distanceTo(*dot3);
	return side1 + side2 + side3;
}