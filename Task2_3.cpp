#include <iostream>
#include <cmath>
#include <windows.h>

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	// Задание 1
	double x, x1, x2, y;

	std::cout << "x1 = ";
	std::cin >> x1;
	std::cout << "x2 = ";
	std::cin >> x2;

	std::cout << "\tx\tsin(x)\n";
	y = std::sin(x1);
	std::cout << "\t" << x1 << "\t" << y << std::endl;
	x = x1 + 0.01;
	while (x <= x2) {
		y = std::sin(x);
		std::cout << "\t" << x << "\t" << y << std::endl;
		x += 0.01;
	}

	// Задание 2
	int a, b;

	std::cout << "a = ";
	std::cin >> a;
	std::cout << "b = ";
	std::cin >> b;

	if (a != b) {
		do {
			if (a > b) {
				a -= b;
			} else {
				b -= a;
			}
		} while (a != b);
	}

	std::cout << "НОД = " << a << std::endl;
	return 0;
}