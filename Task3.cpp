#include <iostream>
#include <iomanip>
#include <cmath>
#include <windows.h>

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	double perimeter;
	std::cout << "Введите периметр равностороннего треугольника: ";
	std::cin >> perimeter; // 3

	double semiPerimeter = perimeter / 2;
	double side = perimeter / 3;
	double square = std::sqrt(semiPerimeter *
		std::pow(semiPerimeter - side, 3));

	std::cout.precision(2);
	std::cout << "\nСторона    Площадь\n";
	std::cout << std::right << std::setw(7) << side << "    " <<
		std::setw(7) << square; // 1    0.43

	return 0;
}