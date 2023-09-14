#include <iostream>
#include <windows.h>

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	char op;
	std::cout << "Сделай свой выбор, собери авто своей мечты: ";
	std::cin >> op;
	std::cout << "\n";

	/*
	switch (op) {
		case 'S':
			std::cout << "Радио играть должно\n";
			std::cout << "Колеса круглые\n";
			std::cout << "Мощный двигатель\n";
			break;
		case 'V':
			std::cout << "Кондиционер хочу\n";
			std::cout << "Радио играть должно\n";
			std::cout << "Колеса груглые\n";
			std::cout << "Мощный двигатель\n";
			break;
		default:
			std::cout << "Колеса круглые\n";
			std::cout << "Мощный двигатель\n";
	}
	*/

	switch (op) {
		case 'V':
			std::cout << "Кондиционер хочу\n";
		case 'S':
			std::cout << "Радио играть должно\n";
		default:
			std::cout << "Колеса круглые\n";
			std::cout << "Мощный двигатель\n";
	}

	return 0;
}