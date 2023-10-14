#include <iostream>
#include <cmath>

double square(double a, double b, double c) {
	double semiPerimeter = (a + b + c) / 2;
	if (a + b >= c && a + c >= b && b + c >= a) {
		return std::sqrt(semiPerimeter * (semiPerimeter - a)
			* (semiPerimeter - b) * (semiPerimeter - c));
	}
	return 0;
}

double square(double a) {
	return square(a, a, a);
}

int main() {
	int choice;
	std::cout << "Выберите тип треугольника:\n";
	std::cout << "1. Равносторонний\n";
	std::cout << "2. Разносторонний\n";
	std::cin >> choice;
	double a, b, c;

	switch (choice) {
		case 1:
			std::cout << "a = ";
			std::cin >> a;
			std::cout << "Square = " << square(a) << std::endl;
			break;
		case 2:
			std::cout << "a = ";
			std::cin >> a;
			std::cout << "b = ";
			std::cin >> b;
			std::cout << "c = ";
			std::cin >> c;
			std::cout << "Square = " << square(a, b, c) << std::endl;
			break;
		default:
			std::cout << "Такого варианта нет!" << std::endl;
	}
	return 0;
}