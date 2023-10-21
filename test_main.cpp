#include <iostream>
#include "triangle1.h"
#include "triangle2.h"

int main() {
	double x1, y1;
	std::cout << "x1 = ";
	std::cin >> x1;
	std::cout << "y1 = ";
	std::cin >> y1;

	double x2, y2;
	std::cout << "x2 = ";
	std::cin >> x2;
	std::cout << "y2 = ";
	std::cin >> y2;

	double x3, y3;
	std::cout << "x3 = ";
	std::cin >> x3;
	std::cout << "y3 = ";
	std::cin >> y3;

	Triangle1* triangle1 = new Triangle1(x1, y1, x2, y2, x3, y3);
	std::cout << "\nTriangle1:\n";
	triangle1->printSides();
	std::cout << triangle1->square() << std::endl;
	std::cout << triangle1->perimeter() << std::endl;

	delete triangle1;

	std::cout << "\nx1 = ";
	std::cin >> x1;
	std::cout << "y1 = ";
	std::cin >> y1;

	std::cout << "x2 = ";
	std::cin >> x2;
	std::cout << "y2 = ";
	std::cin >> y2;

	std::cout << "x3 = ";
	std::cin >> x3;
	std::cout << "y3 = ";
	std::cin >> y3;

	Dot* dot1 = new Dot(x1, y1);
	Dot* dot2 = new Dot(x2, y2);
	Dot* dot3 = new Dot(x3, y3);

	Triangle2* triangle2 = new Triangle2(dot1, dot2, dot3);

	std::cout << "\nTriangle2:\n";
	triangle2->printSides();
	std::cout << triangle2->square() << std::endl;
	std::cout << triangle2->perimeter() << std::endl;

	delete triangle2;

	return 0;
}