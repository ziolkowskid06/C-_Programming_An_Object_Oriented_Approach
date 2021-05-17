/***********************************************************************************
 * Write a program that, given the time duration of a task in the number of hours, * 
 * minutes, and seconds, calculates the duration in seconds.                       *
 ***********************************************************************************/
#include <iostream>

using namespace std;

int main()
{
	unsigned long hours, minutes, seconds, durationInSeconds;

	// Ask for data
	cout << "Enter hours: ";
	cin >> hours;
	cout << "Enter minutes: ";
	cin >> minutes;
	cout << "Enter seconds: ";
	cin >> seconds;

	// Calculate and print duration
	durationInSeconds = seconds + minutes*60 + hours*3600;
	cout << "\nDuration: " << durationInSeconds << " seconds";

	return 0;
}