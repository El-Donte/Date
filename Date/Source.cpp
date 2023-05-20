#include<iostream>
#include"Date.h"

int main()
{
	Date date1{ 18,4,2006 };
	Date date2{ 28,12,1986 };
	Date date3{ 21,6,1985 };
	Date date4{ 24,6,2011 };
	Date date5;

	date5 = date4;


	if (date5 == date4) {
		std::cout << "True\n";
	}
	else {
		std::cout << "False\n";
	}

	if (date2 != date1) {
		std::cout << "True\n";
	}
	else {
		std::cout << "False\n";
	}
	date1++;
	std::cout << date1<<std::endl;
	date1--;
	std::cout << date1<< std::endl;
	std::cout << ++date1 << std::endl;
	std::cout << --date1 << std::endl;

	date2 -= 10;
	std::cout<<date2 <<std::endl;
	date3 += 5;
	std::cout <<date3<< std::endl;

	if (date1 > date2) {
		std::cout << "True\n";
	}
	else {
		std::cout << "False\n";
	}

	if (date3 < date4) {
		std::cout << "True\n";
	}
	else {
		std::cout << "False\n";
	}
	
}