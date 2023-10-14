#include <iostream>

int sumOfSeries(int n) {
	if (n == 0) {
		return 0;
	}
	return 5 * n + sumOfSeries(n - 1);
}

int main() {
	int n;
	std::cout << "n = ";
	std::cin >> n;
	std::cout << "Sum of series (n = " << n << ") = "
		<< sumOfSeries(n) << std::endl;
}