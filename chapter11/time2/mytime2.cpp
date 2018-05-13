// mytime2.cpp -- overloading method
#include"iostream"
#include"mytime2.h"

Time::Time()
{
	hours = minutes = 0;
}

Time::Time(int h,int m)
{
	hours = h;
	minutes = m;
}

void Time::AddMin(int m)
{
	minutes += m;
}

void Time::AddHr(int h)
{
	hours += h;
}

void Time::Reset()
{
	hours = minutes = 0;
}

Time Time::operator+(const Time & t) const
{
	Time sum;
	sum.minutes = minutes + t.minutes;
	sum.hours = hours + t.hours + sum.minutes/60;
	sum.minutes %= 60;
	return sum;
}

Time Time::operator-(const Time & t) const
{
	Time diff;
	int tot1,tot2;
	tot1 = t.hours*60 + t.minutes;
	tot2 = hours*60 + minutes;
	diff.minutes = (tot1 - tot2) % 60;
	diff.hours = (tot1 - tot2)/60;
	return diff;
}

Time Time::operator*(double mult) const
{
	Time result;
	long totalminutes = hours * 60 * mult + minutes * mult;
	result.minutes = (totalminutes) % 60;
	result.hours = (totalminutes)/60;
	return result;
}

void Time::Show() const
{
	std::cout << hours << "hours," << minutes << "minutes.";
}




