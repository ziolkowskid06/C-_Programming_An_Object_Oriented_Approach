/***************************************************************
 * A program to add three integers and print the result        *
 ***************************************************************/
#include <iostream>
#include <iomanip>

using namespace std;

int main ( )
{
	// Variables declaration
	int first, second, third, sum;

	// Prompts and inputs
	cout << "Enter the first integer: ";
	cin >> first;
	cout << "Enter the second integer: ";
	cin >> second;
	cout << "Enter the third integer: ";
	cin >> third;

	// Calculation
	sum = first + second + third;

	// Output
	cout << "The sum of the three integers is: " << sum;

	return 0;
}

/*
	Run:
	Enter the first integer: 10
	Enter the second integer: 8
	Enter the third integer: 3
	The sum of the three integers is: 21
*/