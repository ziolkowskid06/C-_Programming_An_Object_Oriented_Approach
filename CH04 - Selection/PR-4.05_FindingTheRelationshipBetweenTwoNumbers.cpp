/******************************************************************
 * Find if a number is greater than, equal, or less than another  *
 ******************************************************************/
#include <iostream>

using namespace std;

int main ()
{
	// Declaration
	int num1, num2;

	// Get input values
	cout << "Enter the first number: ";
	cin >> num1;
	cout << "Enter the second number: ";
	cin >> num2;

	// Decision using nested if-else statement 
	if (num1 >=  num2)
	{
		if (num1 >  num2)
		{
			cout << num1 << " > " << num2;
		} 
		else 
		{
			cout << num1 << " == " << num2;
		} 
	} 
	else 
	{
		cout << num1 << " < " << num2;
	} 

	return 0;
}

/*
	Run:
	Enter the first number: 42
	Enter the second number: 32
	42 > 32

	Run:
	Enter the first number: 12
	Enter the second number: 12
	12 == 12

	Run:
	Enter the first number: 12
	Enter the second number: 28
	12 < 28
*/