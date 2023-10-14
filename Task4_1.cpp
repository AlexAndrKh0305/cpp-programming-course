#include <iostream>

int addNumbers(int n) {
	if (n == 1) {
		return 1;
	} else {
		return (n + addNumbers(n - 1));
	}
}

int addNumbers(int fromInclusive, int toExclusive) {
	if (fromInclusive >= toExclusive) {
		return 0;
	} else if (fromInclusive == toExclusive - 1) {
		return fromInclusive;
	}
	return fromInclusive + addNumbers(fromInclusive + 1, toExclusive);
}

int main() {
	int fromInclusive, toExclusive;

	std::cout << "fromInclusive = ";
	std::cin >> fromInclusive;
	std::cout << "toExclusive = ";
	std::cin >> toExclusive;
	
	std::cout << "sum = " << addNumbers(fromInclusive, toExclusive) << std::endl;
	return 0;
}