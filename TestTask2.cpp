#include <iostream>

class Time {

public:

	class NegativeNumberError {

	public:
		NegativeNumberError() {
			message = "One of the numbers is negative";
		}

		void printMessage() {
			std::cout << message << "\n";
		}

	private:
		std::string message;

	};

	Time() {
		hours = 0;
		minutes = 0;
		seconds = 0;
	}

	Time(int h, int m, int s) {

		if (h < 0 || m < 0 || s < 0) {
			throw NegativeNumberError();
		}

		seconds = s % 60;

		m += s / 60;
		minutes = m % 60;

		h += m / 60;
		hours = h;
	}

	void showTime() const {
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

	Time* addTime(Time* time) const {
		int s = seconds + (*time).seconds;

		int m = minutes + (*time).minutes + s / 60;
		s %= 60;

		int h = hours + (*time).hours + m / 60;
		m %= 60;

		Time* sumTime = new Time(h, m, s);

		return sumTime;
	}

private:
	int hours;
	int minutes;
	int seconds;

};

int main() {
	int h1, m1, s1;

	std::cout << "h1 = ";
	std::cin >> h1;
	std::cout << "m1 = ";
	std::cin >> m1;
	std::cout << "s1 = ";
	std::cin >> s1;

	int h2, m2, s2;

	std::cout << "h2 = ";
	std::cin >> h2;
	std::cout << "m2 = ";
	std::cin >> m2;
	std::cout << "s2 = ";
	std::cin >> s2;

	try {
		Time* time1 = new Time(h1, m1, s1);

		Time* time2 = new Time(h2, m2, s2);

		Time* time3 = time1->addTime(time2);

		time3->showTime();
	} catch (Time::NegativeNumberError& error) {
		error.printMessage();
	}
	return 0;
}