#include <iostream>
#include <ctime>

int main() {
	std::srand(std::time(NULL));

	int a, b, c;
	int k = 0, n = 10;

	for (int i = 1; i <= n; i++) {
		a = std::rand() % 10 + 1;
		b = std::rand() % 10 + 1;
		std::cout << a << " * " << b << " = ";
		std::cin >> c;

		if (a * b != c) {
			k++;
			std::cout << "Error! ";
			std::cout << a << " * " << b << " = " << a * b << std::endl;
		}
	}

	std::cout << "Count error: " << k << std::endl;

	return 0;
}