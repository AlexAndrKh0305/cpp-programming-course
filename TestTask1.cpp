#include <iostream>

template<class T>
T average(T arr[], int size) {
	T sum = 0;
	for (int i = 0; i < size; i++) {
		sum += arr[i];
	}
	return (sum / size);
}

int main() {

	long arr1[] = {100, 99, 80};
	double arr2[] = {3.7, 2.9, 23.8, 27.1};
	char arr3[] = {'a', 'b', 'c', 'd', 'e'};

	int k1 = sizeof(arr1) / sizeof(arr1[0]);
	int k2 = sizeof(arr2) / sizeof(arr2[0]);
	int k3 = sizeof(arr3) / sizeof(arr3[0]);

	std::cout << average(arr1, k1) << "\n";
	std::cout << average(arr2, k2) << "\n";
	std::cout << average(arr3, k3) << "\n";


	return 0;
}