#pragma once
#include "dot.h"

class Triangle1 {

public:
	Triangle1(double x1, double y1, double x2, double y2, double x3, double y3);
	void printSides();
	double square();
	double perimeter();

private:
	Dot* dot1;
	Dot* dot2;
	Dot* dot3;
};