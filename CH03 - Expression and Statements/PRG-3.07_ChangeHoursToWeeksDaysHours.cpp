/*****************************************************************
 * Write a program that, given a number of hours, calculates     *
 * the number of weeks, days, and hours included in that number. *
 *****************************************************************/
#include <iostream>

using namespace std;

int main()
{
	// Variable declaration
	long hoursEntered, weeks, days, hours, checkResult;

	// Input
	cout << "Enter the number of hours: ";
	cin >> hoursEntered; 

	// Processing
	weeks = hoursEntered / (24*7);
	days = (hoursEntered - (weeks*24*7)) / 24;
	hours = hoursEntered - (weeks*24*7) - days*24;
	checkResult = weeks*24*7 + days*24 + hours;

	// Output
	cout << "\nYou entered: " << hoursEntered << " hours"<< endl;
	cout << "That is: " << weeks << " weeks, " << days << " days, and " << hours << " hours" << endl;
	cout << "\nProof: " << checkResult;

	return 0;
}

/*
	Run:
	Enter the number of hours: 12345678

	You entered: 12345678 hours
	That is: 73486 weeks, 1 days, and 6 hours

	Proof: 12345678
*/