#include <iostream>

int main() {
	int k, m;
	
	std::cout << "k = ";
	std::cin >> k;
	std::cout << "m = ";
	std::cin >> m;

	int s = 0;
	for (int i = 1; i <= 100; i++) {
		if (i > k && i < m) {
			continue;
		}
		s += i;
	}

	std::cout << "s = " << s << std::endl;
	return 0;
}