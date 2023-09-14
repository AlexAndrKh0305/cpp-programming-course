#include <iostream>
#include <windows.h>

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	double x, y;
	std::cout << "Введите координату x: ";
	std::cin >> x;
	std::cout << "Введите координату y: ";
	std::cin >> y;

	if (x * x + y * y < 9 && y > 0) {
		std::cout << "Точка внутри\n";
	} else if (x * x + y * y > 9 || y < 0) {
		std::cout << "Точка снаружи\n";
	} else {
		std::cout << "Точка на границе\n";
	}

	return 0;
}