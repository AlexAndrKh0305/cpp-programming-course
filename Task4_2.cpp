#include <iostream>

int gcd(int m, int n) {
	if (n == 0) {
		return m;
	}
	return gcd(n, m % n);
}

int main() {
	int n, m;

	std::cout << "n = ";
	std::cin >> n;
	std::cout << "m = ";
	std::cin >> m;

	std::cout << "gcd(" << n << ", " << m << ") = " << gcd(n, m);
}