#include <iostream>

int findPosition(int arr[], int length, int x) {
	for (int i = 0; i < length; i++) {
		if (arr[i] == x) {
			std::swap(arr[i], arr[std::max(0, i - 1)]);
			return std::max(0, i - 1);
		}
	}
	return -1;
}

int main() {
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	std::cout << findPosition(arr, sizeof(arr) / sizeof(arr[0]), 7) << "\n";
	std::cout << findPosition(arr, sizeof(arr) / sizeof(arr[0]), 7) << "\n";
	std::cout << findPosition(arr, sizeof(arr) / sizeof(arr[0]), 3) << "\n";
	return 0;
}