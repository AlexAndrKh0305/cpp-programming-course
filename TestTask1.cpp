#include <iostream>

struct Time {
	int hours;
	int minutes;
	int seconds;
	const int secondsInDay = 24 * 60 * 60;

	void addTime(Time t) {
		int allSeconds = ((hours + t.hours) * 60
			+ minutes + t.minutes) * 60
			+ seconds + t.seconds;

		allSeconds %= secondsInDay;
		seconds = allSeconds % 60;
		int allMinutes = allSeconds / 60;
		minutes = allMinutes % 60;
		int allHours = allMinutes / 60;
		hours = allHours;
	}

	void subtractTime(Time t) {
		int allSeconds = ((hours - t.hours) * 60
			+ minutes - t.minutes) * 60
			+ seconds - t.seconds + secondsInDay;

		allSeconds %= secondsInDay;
		seconds = allSeconds % 60;
		int allMinutes = allSeconds / 60;
		minutes = allMinutes % 60;
		int allHours = allMinutes / 60;
		hours = allHours;
	}

	void ShowTime() {
		std::cout << "\n";
		if (hours < 10) {
			std::cout << 0;
		}
		std::cout << hours << ":";
		if (minutes < 10) {
			std::cout << 0;
		}
		std::cout << minutes << ":";
		if (seconds < 10) {
			std::cout << 0;
		}
		std::cout << seconds << "\n";
	}
};

Time InputTime() {
	Time time;
	std::cout << "hours = ";
	std::cin >> time.hours;
	std::cout << "minutes = ";
	std::cin >> time.minutes;
	std::cout << "seconds = ";
	std::cin >> time.seconds;
	return time;
}

int main() {
	Time t1 = InputTime();
	Time t2 = { 4, 23, 57 };

	t1.addTime(t2);
	t1.ShowTime();

	t1.subtractTime(t2);
	t1.subtractTime(t2);
	t1.ShowTime();
	return 0;
}