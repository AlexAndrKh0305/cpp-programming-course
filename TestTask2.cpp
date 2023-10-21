#include <iostream>
#include <vector>
#include <array>

template<class Container>
void Print(const Container& cont, std::string str) {

	for (auto it{ cont.begin() }; it != cont.end(); it++)
	{
		std::cout << *it;
		if (it + 1 != cont.end()) {
			std::cout << str;
		}
	}
	std::cout << std::endl;

}

int main() {
	std::vector<int> data = { 1, 2, 3 };
	std::array<char, 4> arr = { 'a', 'b', 'c', 'd' };
	Print(data, ", ");
	Print(arr, "-+-");
	return 0;
}