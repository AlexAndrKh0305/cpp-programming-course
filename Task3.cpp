#include <iostream>

struct Distance {
	int feet;
	double inches;

	void ShowDist() {
		std::cout << feet << "\'-" << inches << "\"\n";
	}
};

Distance AddDist(const Distance& d1, const Distance& d2) {
	Distance d;
	d.feet = d1.feet + d2.feet;
	d.inches = d1.inches + d2.inches;
	if (d.inches >= 12.0) {
		d.inches -= 12.0;
		d.feet++;
	}
	return d;
}

Distance InputDist() {
	Distance d;
	std::cout << "Feet: ";
	std::cin >> d.feet;
	std::cout << "Inches: ";
	std::cin >> d.inches;
	return d;
}

int main() {
	int n;
	std::cout << "n = ";
	std::cin >> n;

	Distance* masDist = new Distance[n];
	for (int i = 0; i < n; i++) {
		masDist[i] = InputDist();
	}

	for (int i = 0; i < n; i++) {
		(*(masDist + i)).ShowDist();
	}

	Distance sumDist = { 0, 0 };

	for (int i = 0; i < n; i++) {
		sumDist = AddDist(sumDist, *(masDist + i));
	}

	sumDist.ShowDist();

	delete[] masDist;
	return 0;
}