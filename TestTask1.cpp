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
		std::cout << s << "\n\n";
	}

	Time operator+ (const Time& time) const {
		int s = seconds + time.seconds;

		int m = minutes + time.minutes + s / 60;
		s %= 60;

		int h = hours + time.hours + m / 60;
		m %= 60;

		Time sumTime = Time(h, m, s);

		return sumTime;
	}

	Time operator- (const Time& time) const {
		int seconds1 = (hours * 60 + minutes) * 60 + seconds;
		int seconds2 = (time.hours * 60 + time.minutes) * 60 + time.seconds;
		int resultSeconds = seconds1 - seconds2;

		int s = resultSeconds % 60;
		int resultMinutes = resultSeconds / 60;

		int m = resultMinutes % 60;
		int resultHours = resultMinutes / 60;

		Time sumTime = Time(resultHours, m, s);

		return sumTime;
	}

	friend Time operator+ (const Time& time1, int s2) {
		int s1 = (time1.hours * 60 + time1.minutes) * 60 + time1.seconds;
		int resultSeconds = s1 + s2;

		int s = resultSeconds % 60;
		int resultMinutes = resultSeconds / 60;

		int m = resultMinutes % 60;
		int resultHours = resultMinutes / 60;

		Time sumTime = Time(resultHours, m, s);

		return sumTime;
	}

	friend Time operator+ (int s1, const Time& time2) {
		int s2 = (time2.hours * 60 + time2.minutes) * 60 + time2.seconds;
		int resultSeconds = s1 + s2;

		int s = resultSeconds % 60;
		int resultMinutes = resultSeconds / 60;

		int m = resultMinutes % 60;
		int resultHours = resultMinutes / 60;

		Time sumTime = Time(resultHours, m, s);

		return sumTime;
	}

	bool operator> (const Time& time) const {
		int seconds1 = (hours * 60 + minutes) * 60 + seconds;
		int seconds2 = (time.hours * 60 + time.minutes) * 60 + time.seconds;
		
		return seconds1 > seconds2;
	}

	bool operator>= (const Time& time) const {
		int seconds1 = (hours * 60 + minutes) * 60 + seconds;
		int seconds2 = (time.hours * 60 + time.minutes) * 60 + time.seconds;

		return seconds1 >= seconds2;
	}

	bool operator< (const Time& time) const {
		int seconds1 = (hours * 60 + minutes) * 60 + seconds;
		int seconds2 = (time.hours * 60 + time.minutes) * 60 + time.seconds;

		return seconds1 < seconds2;
	}

	bool operator<= (const Time& time) const {
		int seconds1 = (hours * 60 + minutes) * 60 + seconds;
		int seconds2 = (time.hours * 60 + time.minutes) * 60 + time.seconds;

		return seconds1 <= seconds2;
	}

	bool operator== (const Time& time) const {
		int seconds1 = (hours * 60 + minutes) * 60 + seconds;
		int seconds2 = (time.hours * 60 + time.minutes) * 60 + time.seconds;

		return seconds1 == seconds2;
	}



	

private:
	int hours;
	int minutes;
	int seconds;

};

int main() {
	try {
		Time time1 = Time(23, 45, 12);
		Time time2 = Time(34, 11, 56);
		int s = 1234;

		std::cout << "time1 + time2 = ";
		(time1 + time2).showTime();

		std::cout << "time2 - time1 = ";
		(time2 - time1).showTime();

		std::cout << "time1 + s = ";
		(time1 + s).showTime();

		std::cout << "s + time2 = ";
		(s + time2).showTime();

		std::cout << "time1 <= time2: " << (time1 <= time2) << "\n";
		std::cout << "time1 > time2: " << (time1 > time2) << "\n";

	} catch (Time::NegativeNumberError& error) {
		error.printMessage();
	}
	return 0;
}