#include <iostream>

void input(int n, int* arr) {
	for (int i = 0; i < n; i++) {
		std::cout << "mas[" << i << "] = ";
		std::cin >> arr[i];
	}
}

void output(int n, int* arr) {
	std::cout << "\n";
	for (int i = 0; i < n; i++) {
		std::cout << "mas[" << i << "] = " << arr[i] << "\n";
	}
}

int sum(int n, int* arr) {
	int s = 0;
	for (int i = 0; i < n; i++) {
		s += arr[i];
	}
	return s;
}

void selectionSort(int n, int* arr) {
	int min = 0;
	int buf = 0;

	for (int i = 0; i < n; i++) {
		min = i;
		for (int j = i + 1; j < n; j++) {
			min = (arr[j] < arr[min]) ? j : min;
		}
		if (i != min) {
			buf = arr[i];
			arr[i] = arr[min];
			arr[min] = buf;
		}
	}
}

int main() {
	int n;
	std::cout << "n = ";
	std::cin >> n;
	int* arr = new int[n];

	input(n, arr);
	output(n, arr);

	std::cout << "\nsum = " << sum(n, arr) << "\n";

	selectionSort(n, arr);
	output(n, arr);

	return 0;
}