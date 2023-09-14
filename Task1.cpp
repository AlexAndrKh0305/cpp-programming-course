#include <iostream>
#include <string>

int main() {
	std::string name;

	/*
	std::cout << "What is your name? ";
	std::cin >> name; // Sherlock Holmes
	std::cout << "Hello, " << name << "!\n"; // Hello, Sherlock!
	*/

	std::cout << "What is your name? ";
	std::getline(std::cin, name); // Sherlock Holmes
	std::cout << "Hello, " << name << "!\n"; // Hello, Sherlock Holmes!
	return 0;
}