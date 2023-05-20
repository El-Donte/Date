#include "Date.h"

Date::Date(int d,int m, int y):
	day{checkDay(d)},
	month(checkMonth(m)),
	year{y}
{}

Date::Date():
	Date(1, 1, 2000)
{}

Date::Date(Date& obj):
	Date(obj.day,obj.month,obj.year)
{}

bool operator==(const Date& date1, const Date& date2) {
	return(date1.day == date2.day and date1.month == date2.month and date1.year == date2.year);
}

bool operator!=(const Date& date1, const Date& date2) {
	return !(date1 == date2);
}

bool operator>(const Date& date1, const Date& date2) {
	if (date1.year > date2.year and date1.month > date2.month and date1.day > date2.day) return true; else return false;
}

bool operator<(const Date& date1, const Date& date2) {
	return !(date1 > date2);
}

std::ostream& operator<< (std::ostream& out, const Date& date) {
	out << date.day << '.' << date.month << '.' << date.year;
	return out;
}

std::istream& operator>> (std::istream& in,Date& date) {
	in >> date.day >> date.month >> date.year;
	return in;
}

Date& Date::operator=(const Date& date) {
	if (this == &date) { return *this; }

	day = checkDay(date.day);
	month = checkMonth(date.month);
	year = date.year;

	return *this;
}

Date& Date::operator++ () {
	day += 1;
	checkDay(day);
	return *this;
}
Date& Date::operator-- () {
	day -= 1;
	checkDay(day);
	return *this;
}
Date Date::operator++ (int)
{
	Date copy{ *this };
	++(*this);
	return copy;
}
Date Date::operator-- (int)
{
	Date copy{ *this };
	--(*this);
	return copy;
}
Date& Date::operator+=(int num) {
	day += num;
	checkDay(day);
	return*this;
}
Date Date::operator-=(int num) {
	day -= num;
	checkDay(day);
	return*this;
}