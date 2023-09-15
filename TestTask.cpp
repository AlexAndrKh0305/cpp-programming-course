#include <iostream>
#include <cmath>
#include <windows.h>

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	double x1, x2, x3, x4, x5;
	double y1, y2, y3, y4, y5;

	std::cout << "Введите координаты первой точки: ";
	std::cin >> x1 >> y1;

	std::cout << "Введите координаты второй точки: ";
	std::cin >> x2 >> y2;

	std::cout << "Введите координаты третьей точки: ";
	std::cin >> x3 >> y3;

	std::cout << "Введите координаты четвертой точки: ";
	std::cin >> x4 >> y4;

	std::cout << "Введите координаты пятой точки: ";
	std::cin >> x5 >> y5;

	double square = std::abs(x1 * y2 + x2 * y3 + x3 * y4 + x4 * y5 + x5 * y1
	- x2 * y1 - x3 * y2 - x4 * y3 - x5 * y4 - x1 * y5) / 2; // Формула площади Гаусса

	std::cout << square;
	return 0;
}

/*
* Test 1
*
* 2 -2
* 2 5
* 5 9
* 7 5
* 7 -2
* ------
* 45
*
* Test 2
*
* -2 -3
* -3 2
* 2 5
* 4 2
* 3 -4
* ------
* 43.5
*/
