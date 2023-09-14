#include <iostream>
#include <windows.h>

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	int a, b;
	
	std::cout << "a = ";
	std::cin >> a;
	std::cout << "b = ";
	std::cin >> b;

	while (a != b) {
		if (a > b) {
			a -= b;
		} else {
			b -= a;
		}
	}

	std::cout << "НОД = " << a << std::endl;
	return 0;
}