#include <iostream>
#include <fstream>
#include <string>


int main() {
	std::ofstream fout("poem.txt", std::ios::out);
	if (!fout) {
		std::cout << "You can't open file!\n";
		return 1;
	}

	std::string line;
	while (std::getline(std::cin, line)) {
		fout << line + "\n";
	}

	fout.close();
	return 0;
}