#include <iostream>
#include <windows.h>

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	int rubles;
	std::cout << "Введите число рублей: ";
	std::cin >> rubles;

	int kopecks;
	std::cout << "Введите число копеек: ";
	std::cin >> kopecks;

	if (rubles >= 0 && kopecks >= 0) {

		rubles += kopecks / 100;
		kopecks %= 100;

		int tenRubles = rubles / 10;
		rubles %= 10;
		int fiveRubles = rubles / 5;
		rubles %= 5;
		int twoRubles = rubles / 2;
		rubles %= 2;
		int oneRuble = rubles;
		rubles = 0;

		int fiftyKopecks = kopecks / 50;
		kopecks %= 50;
		int tenKopecks = kopecks / 10;
		kopecks %= 10;
		int fiveKopecks = kopecks / 5;
		kopecks %= 5;
		int oneKopeck = kopecks;
		kopecks = 0;

		std::cout << "\nКоличество монет, которое понадобится для размена:\n\n";
		std::cout << "10 рублей - " << tenRubles << "\n";
		std::cout << "5 рублей - " << fiveRubles << "\n";
		std::cout << "2 рубля - " << twoRubles << "\n";
		std::cout << "1 рубль - " << oneRuble << "\n\n";

		std::cout << "50 копеек - " << fiftyKopecks << "\n";
		std::cout << "10 копеек - " << tenKopecks << "\n";
		std::cout << "5 копеек - " << fiveKopecks << "\n";
		std::cout << "1 копейка - " << oneKopeck << std::endl;

	} else {
		std::cout << "\nБыло введено отрицательное число!" << std::endl;
	}

	return 0;
}

/*
* Test 1
* 
* -1 34
* ------
* Было введено отрицательное число!
* 
* Test 2
* 
* 56 23
* ------
* Количество монет, которое понадобится для размена:
*
* 10 рублей - 5
* 5 рублей - 1
* 2 рубля - 0
* 1 рубль - 1
*
* 50 копеек - 0
* 10 копеек - 2
* 5 копеек - 0
* 1 копейка - 3
* 
* Test 3
* 
* 37 159
* ------
* Количество монет, которое понадобится для размена:
*
* 10 рублей - 3
* 5 рублей - 1
* 2 рубля - 1
* 1 рубль - 1
*
* 50 копеек - 1
* 10 копеек - 0
* 5 копеек - 1
* 1 копейка - 4
*/