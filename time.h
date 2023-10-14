#pragma once

class Time {

public:
	Time();
	Time(int h, int m, int s);
	void showTime() const ;
	Time* addTime(Time*) const ;

private:
	int hours;
	int minutes;
	int seconds;
};
