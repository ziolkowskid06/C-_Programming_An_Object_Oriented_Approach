/****************************************************************
 * This program changes a duration of time in seconds to hours  *
 * minutes, and seconds.                                        *
 ****************************************************************/
#include <iostream>

using namespace std;

int main ( )
{ 
	// Variables Declaration
	unsigned long duration, hours, minutes, seconds; 

	// Prompt and Input
	cout << "Enter a positive integer for the number of seconds: ";
	cin >> duration;

	// Processing
	hours = duration / 3600L;
	minutes = (duration - (hours * 3600L)) / 60L;
	seconds = duration - (hours * 3600L) - (minutes * 60L);

	// Output
	cout << "Given Duration in seconds: " << duration << endl;
	cout << "Result: ";
	cout << hours << " hours, ";
	cout << minutes <<  " minutes, and ";
	cout << seconds << " seconds.";

	return 0; 
} 

/*
	Run:
	Enter a positive integer for the number of seconds: 39250
	Given duration in seconds: 39250
	Result: 10 hours, 54 minutes, and 10 seconds.
*/