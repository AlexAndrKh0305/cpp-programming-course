#include <iostream>
#include <string>
#include <windows.h>

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	double a, b;
	std::cout << "Введите a и b (b != 0):\n";
	std::cin >> a; // 17
	std::cin >> b; // 3

	double x = a / b;
	std::cout.precision(3);
	std::cout << "\nx = " << x << std::endl; // x = 5.67
	std::cout << sizeof(a / b) << " " << sizeof(x) << std::endl; // 8 8
	
	/*
	int x = a / b;
	std::cout << "\nx = " << x << std::endl; // x = 5
	std::cout << sizeof(a / b) << " " << sizeof(x) << std::endl; // 8 4
	*/

	std::string name;
	std::cout << "Введите свое имя\n";
	std::cout << "Введите a и b (b != 0):\n";
	std::cin >> a; // 25Вася
	std::cin >> name;
	std::cin >> b; // 7

	x = a / b;
	std::cout << "\nx = " << x << std::endl; // x = 3.57
	std::cout << "Привет, " << name << "!\n"; // Привет, Вася!

	return 0;
}