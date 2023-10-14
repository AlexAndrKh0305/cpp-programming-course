#include <iostream>
#include <string>

std::string toBinaryCode(int n) {
	if (n == 0) {
		return "";
	}
	return toBinaryCode(n / 2) + (char)(n % 2 + '0');
}

int main() {
	int n;
	std::cout << "n = ";
	std::cin >> n;
	if (n > 0) {
		std::cout << "toBinaryCode(" << n << ") = "
			<< toBinaryCode(n) << std::endl;
	}
	return 0;
}