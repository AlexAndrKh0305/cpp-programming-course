#include <iostream>
#include <cmath>
#include <windows.h>

/*
* В данной задачи был использован целочисленный тип для хранения чисел,
* которые необходимо проверить на простоту, а также тип bool для
* того, чтобы сохранять найденный ответ.
* Примеры суперпростых чисел: 3, 5, 11, 17, 31, 41, 59, 67, 83, 109, 127, 157
*/

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	int n; // Число для проверки на суперпростое
	std::cout << "Введите число: ";
	std::cin >> n;
	std::cout << "\n";

	if (n < 2) {
		std::cout << n << " не суперпростое число\n";
	} else {
		int k = 0; // Порядковый номер простых чисел

		// Подсчет порядкового номера ближайшего простого числа <= n
		// Проверка на простоту n
		bool isPrimeN = true;
		for (int i = 2; i <= n; i++) {
			bool isPrimeI = true;
			for (int j = 2; j <= std::sqrt(i); j++) {
				if (i % j == 0) {
					isPrimeI = false;
					break;
				}
			}
			if (isPrimeI) {
				k++;
			}
			if (i == n) {
				isPrimeN = isPrimeI;
			}
		}

		// Проверка на простоту k
		bool isPrimeK = true;
		if (k < 2) {
			isPrimeK = false;
		}
		for (int i = 2; i <= std::sqrt(k); i++) {
			if (k % i == 0) {
				isPrimeK = false;
				break;
			}
		}

		// Проверка на суперпростоту n
		if (isPrimeN && isPrimeK) {
			std::cout << n << " суперпростое число\n";
		} else {
			std::cout << n << " не суперпростое число\n";
		}
	}
	return 0;
}