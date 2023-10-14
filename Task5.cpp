#include <iostream>
#include <ctime>
#include <vector>

int main() {
	std::srand(std::time(NULL));

	int a, b, c;
	int k = 0;

	const int n = 10;
	int mas[n];
	std::vector<int> v1;
	std::vector<int> v2;

	for (int i = 0; i < n; i++) {
		a = std::rand() % 10 + 1;
		b = std::rand() % 10 + 1;
		std::cout << a << " * " << b << " = ";
		std::cin >> c;
		mas[i] = c;

		if (a * b != c) {
			v2.push_back(c);
			k++;
			std::cout << "Error! ";
			std::cout << a << " * " << b << " = " << a * b << std::endl;
		} else {
			v1.push_back(c);
		}
	}

	std::cout << "\nAll: ";
	for (int i = 0; i < n; i++) {
		std::cout << mas[i] << " ";
	}

	std::cout << "\nGood: ";
	for (int i = 0; i < v1.size(); i++) {
		std::cout << v1[i] << " ";
	}

	std::cout << "\nBad: ";
	for (int i = 0; i < v2.size(); i++) {
		std::cout << v2[i] << " ";
	}

	std::cout << "Count error: " << k << std::endl;

	return 0;
}