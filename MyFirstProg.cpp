#include <iostream>
#include <windows.h>

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	std::cout << "Hello, World!\n";
	std::cout << "Привет, Мир!" << std::endl;
	return 0;
}