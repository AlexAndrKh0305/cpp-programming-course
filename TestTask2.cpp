#include <iostream>
#include <string>
#include <windows.h>

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	std::string snils;
	std::cout << "Введите СНИЛС: ";
	std::cin >> snils;

	bool isValid = false;

	if (snils.length() == 11) {
		int sum = (snils[8] - '0') * 1 + (snils[7] - '0') * 2;
		bool moreThan2Same = false;
		for (int i = 6; i >= 0; i--) {
			sum += (snils[i] - '0') * (9 - i);
			if (snils[i] == snils[i + 1] && snils[i] == snils[i + 2]) {
				moreThan2Same = true;
				break;
			}
		}
		if (!moreThan2Same) {
			int correctControlNumber = 0;
			if (sum < 100 || (sum > 101 && sum % 101 < 100)) {
				sum %= 101;
				correctControlNumber = sum;
			}
			int currentControlNumber = (snils[9] - '0') * 10 + (snils[10] - '0');
			if (correctControlNumber == currentControlNumber) {
				isValid = true;
			}
		}
	}

	if (isValid) {
		std::cout << "True";
	} else {
		std::cout << "False";
	}
	return 0;
}

/*
* Test 1
* 
* 12345678900
* ------
* False
* 
* Test 2
* 
* 12602903624
* ------
* True
* 
* Test 3
* 
* 16675209900
* ------
* True
* 
* Test 4
* 
* 18577723225
* ------
* False
*/