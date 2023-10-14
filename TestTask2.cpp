#include <iostream>
#include <fstream>
#include <algorithm>

int* max_vect(int kc, int* a, int* b) {
	int* arr = new int[kc];

	for (int i = 0; i < kc; i++) {
		arr[i] = (a[i] > b[i]) ? a[i] : b[i];
	}

	return arr;
}

int main() {
	int a[] = { 1, 2, 3, 4, 5, 6, 7, 2 };
	int b[] = { 7, 6, 5, 4, 3, 2, 1, 3 };

	int kc = sizeof(a) / sizeof(a[0]);
	int* c;
	c = max_vect(kc, a, b);

	std::ofstream fout("arrays.txt", std::ios::out);
	if (!fout) {
		std::cout << "You can't open file!\n";
		return 1;
	}

	for (int i = 0; i < kc; i++) {
		fout << *(c + i) << " ";
	}
	fout << "\n";
	std::sort(c, c + kc);
	for (int i = 0; i < kc; i++) {
		fout << *(c + i) << " ";
	}

	fout.close();

	delete[] c;
	return 0;
}