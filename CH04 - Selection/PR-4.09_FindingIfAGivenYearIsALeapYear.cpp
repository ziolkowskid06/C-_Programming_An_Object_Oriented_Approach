/*****************************************************************
 * Find if a given year is a leap year testing three conditions  *
 *****************************************************************/
#include <iostream>

using namespace std;

int main ()
{
	// Variable declaration
	int year;
	bool divBy400, divBy4, divBy100;
	bool leapYear;
	
	// Input year
	cout << "Enter the year: "; 
	cin >>  year;
	
	// Set conditions
	divBy400 = ((year % 400) == 0);
	divBy4 = ((year % 4) == 0); 
	divBy100 = ((year % 100) == 0);
	leapYear = (divBy400) || (divBy4 && !(divBy100));
	
	// Decision and output 
	if (leapYear)
	{
		cout << "Year " << year  << " is a leap year." << endl;
	}
	else
	{
		cout << "Year " << year  << " is not a leap year." << endl;
	}
	
	return 0;
}

/*
	Run:
	Enter the year: 2000
	Year 2000 is a leap year.

	Run:
	Enter the year: 1900
	Year 1900 is not a leap year.

	Run:
	Enter the year: 2012
	Year 2012 is a leap year.

	Run:
	Enter the year: 2014
	Year 2014 is not a leap year.
*/