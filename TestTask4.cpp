#include <iostream>
#include <vector>
#include <string>
#include <windows.h>

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	std::vector<std::string> strings;
	std::string currentString;
	while (std::cin >> currentString) {
		strings.push_back(currentString);
	}

	if (strings.size() < 4) {
		std::cout << "Меньше 4!";
	} else if (std::strcmp("-a", strings[1].c_str()) == 0) {
		int a = std::atoi(strings[2].c_str());
		int b = std::atoi(strings[3].c_str());
		std::cout << a + b;
	} else if (std::strcmp("-m", strings[1].c_str()) == 0) {
		int a = std::atoi(strings[2].c_str());
		int b = std::atoi(strings[3].c_str());
		std::cout << a * b;
	} else {
		std::cout << "Второй элемент не равен -a или -m!";
	}
}