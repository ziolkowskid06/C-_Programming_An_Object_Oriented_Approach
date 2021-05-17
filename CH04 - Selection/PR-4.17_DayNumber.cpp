/****************************************************************
 * Finding the number of days passed from the beginning of the  *
 * the year including the current day                           *
 ****************************************************************/
#include <iostream>

using namespace std;

int main ( )
{
	// Declaration
	int month;
	int day;
	int totalDays = 0;

	// Input current month and current day of the month 
	cout << "Enter month: ";
	cin >> month;
	cout << "Enter day of month: "; 
	cin >> day;

	// Number of days in months
	int m01 = 31;
	int m02 = 28;
	int m03 = 31;
	int m04 = 30;
	int m05 = 31;
	int m06 = 30;
	int m07 = 31;
	int m08 = 31;
	int m09 = 30;
	int m10 = 31;
	int m11 = 30;

	// Switch statement find the total days using fall through
	switch (month)
	{
		case 12 : totalDays += m11;
		case 11 : totalDays += m10;
		case 10 : totalDays += m09;
		case 9  : totalDays += m08;
		case 8  : totalDays += m07;
		case 7  : totalDays += m06;
		case 6  : totalDays += m05;
		case 5  : totalDays += m04;
		case 4  : totalDays += m03;
		case 3  : totalDays += m02;
		case 2  : totalDays += m01;
		case 1  : totalDays += 0;
	} 

	// Adding the day of the month to the previous total days 
	totalDays +=  day;

	// Printing the result 
	cout << "Day number: " << totalDays;

	return 0;      
}

/*
	Run:
	Enter month: 1
	Enter day of month: 23
	Day number: 23

	Run:
	Enter month: 4
	Enter day of month: 12
	Day number: 102

	Run:
	Enter month: 11
	Enter day of month: 24
	Day number: 328

	Run:
	Enter month: 12
	Enter day of month: 31
	Day number: 365
*/