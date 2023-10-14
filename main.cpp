#include <iostream>
#include "time.h"

int main() {
	int h1, m1, s1;

	std::cout << "h1 = ";
	std::cin >> h1;
	std::cout << "m1 = ";
	std::cin >> m1;
	std::cout << "s1 = ";
	std::cin >> s1;

	Time* time1 = new Time(h1, m1, s1);

	int h2, m2, s2;

	std::cout << "h2 = ";
	std::cin >> h2;
	std::cout << "m2 = ";
	std::cin >> m2;
	std::cout << "s2 = ";
	std::cin >> s2;

	Time* time2 = new Time(h2, m2, s2);

	Time* time3 = time1->addTime(time2);

	time3->showTime();
	return 0;
}