#pragma once
#include<iostream>
class Date
{
	int day;
	int month;
	int year;

	int checkDay(int d) {
		const int maxDays = 31;
		if (d < 1) return 1;
		if (d > maxDays) return maxDays;
		return d;
	}
	int checkMonth(int m) {
		if (m < 1) return 1;
		if (m > 12) return 12;
		return m;
	}

public:
	Date();
	Date(int d, int m, int y);
	Date(Date& obj);

	Date& SetDay(int d) { day = checkDay(d); return *this; }
	Date& SetMonth(int m) { month = checkMonth(m); return *this; }
	Date& SetYear(int y) { year = y; return *this; }

	int GetDay() const { return day; }
	int GetMonth() const { return month; }
	int GetYear() const { return year; }

	friend bool operator!=(const Date& date1, const Date& date2);
	friend bool operator==(const Date& date1, const Date& date2);
	friend bool operator<(const Date& date1, const Date& date2);
	friend bool operator>(const Date& date1, const Date& date2);

	friend std::ostream& operator<< (std::ostream& out, const Date& date);
	friend std::istream& operator>> (std::istream& in, Date& date);

	Date& operator= (const Date& date);
	Date& operator++ ();
	Date& operator-- ();
	Date operator++ (int);
	Date operator-- (int);
	Date& operator+= (int num);
	Date operator-= (int num);

};

