#include <iostream>
#include "time.h"

Time::Time() {
	hours = 0;
	minutes = 0;
	seconds = 0;
}

Time::Time(int h, int m, int s) {
	seconds = s % 60;

	m += s / 60;
	minutes = m % 60;

	h += m / 60;
	hours = h;
}

void Time::showTime() const {
	int h = hours % 12;
	int m = minutes;
	int s = seconds;

	std::cout << "\n";
	if (h < 10) {
		std::cout << 0;
	}
	std::cout << h << ":";
	if (m < 10) {
		std::cout << 0;
	}
	std::cout << m << ":";
	if (s < 10) {
		std::cout << 0;
	}
	std::cout << s << "\n";
}

Time* Time::addTime(Time* time) const {
	int s = seconds + (*time).seconds;

	int m = minutes + (*time).minutes + s / 60;
	s %= 60;

	int h = hours + (*time).hours + m / 60;
	m %= 60;

	Time* sumTime = new Time(h, m, s);

	return sumTime;
}