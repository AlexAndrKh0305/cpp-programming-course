#include <iostream>
#include <iomanip>
#include <cmath>

long double firBinSearch(long double a, int n) {
	long double L = 0;
	long double R = a;
	while (R - L > 1e-10) {
		long double M = (L + R) / 2;
		if (std::pow(M, n) < a) {
			L = M;
		} else {
			R = M;
		}
	}
	return R;
}

int main() {
	long double a;
	int n;
	
	std::cout << "a = ";
	std::cin >> a;
	std::cout << "n = ";
	std::cin >> n;

	long double root = firBinSearch(a, n);

	std::cout << n << "-root is " << std::setprecision(6) << root << std::endl;
}