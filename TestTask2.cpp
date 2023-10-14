#include <iostream>
#include <cmath>

double cubeRoot(double a, int n) {
	if (n == 0) {
		return a;
	}
	double previous = cubeRoot(a, n - 1);
	return (a / (previous * previous) + 2 * previous) / 3; 
}

int main() {
	double a;
	int n = 100;
	std::cout << "a = ";
	std::cin >> a;

	std::cout << "pow(" << a << ", 1.0/3) = " << std::pow(a, 1.0 / 3) << "\n";
	std::cout << "cubeRoot(" << a << ", " << n << ") = " << cubeRoot(a, n) << std::endl;
	return 0;
}