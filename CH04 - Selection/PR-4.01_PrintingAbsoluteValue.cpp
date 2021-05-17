/***************************************************************
 * Using if-statement to print the absolute value of a number  *
 ***************************************************************/
#include <iostream>

using namespace std;

int main ()
{
	// Declaration
	int number; 

	// Getting input
	cout << "Enter an integer: ";
	cin >> number;

	// Finding the absolute value
	if (number < 0)
	{
		number = -number;
	}

	// Printing the absolute value
	cout << "Absolute value of the number you entered is: " << number;

	return 0;
}

/*
	Run:
	Enter an integer: −17
	Absolute value of the number you entered is: 17
*/