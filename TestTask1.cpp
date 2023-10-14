#include <iostream>
#include <string>
#include <windows.h>

bool isValidSnils(std::string snils) {
	std::string onlyDigitSnils = "";

	for (char ch : snils) {
		if ('0' <= ch && ch <= '9') {
			onlyDigitSnils += ch;
		} else if (!(ch == ' ' || ch == '-')) {
			return false;
		}
	}

	bool isValid = false;

	if (onlyDigitSnils.length() == 11) {
		int sum = (onlyDigitSnils[8] - '0') * 1 + (onlyDigitSnils[7] - '0') * 2;
		bool moreThan2Same = false;
		for (int i = 6; i >= 0; i--) {
			sum += (onlyDigitSnils[i] - '0') * (9 - i);
			if (onlyDigitSnils[i] == onlyDigitSnils[i + 1] 
				&& onlyDigitSnils[i] == onlyDigitSnils[i + 2]) {
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
			int currentControlNumber = (onlyDigitSnils[9] - '0') * 10 
				+ (onlyDigitSnils[10] - '0');
			if (correctControlNumber == currentControlNumber) {
				isValid = true;
			}
		}
	}

	return isValid;
}

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	std::string snils;
	std::cout << "Введите СНИЛС: ";
	std::getline(std::cin, snils);

	if (isValidSnils(snils)) {
		std::cout << "True";
	} else {
		std::cout << "False";
	}

	return 0;
}