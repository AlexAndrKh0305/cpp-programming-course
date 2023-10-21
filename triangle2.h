#pragma once
#include "dot.h"

class Triangle2 {

public:
	Triangle2(Dot* dot1, Dot* dot2, Dot* dot3);
	void printSides();
	double square();
	double perimeter();

private:
	Dot* dot1;
	Dot* dot2;
	Dot* dot3;
};