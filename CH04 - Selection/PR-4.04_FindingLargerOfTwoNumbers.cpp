/*****************************************************************
 * Use of if-else statement to print larger between two numbers  *
 * or print the first if numbers are equal                       * 
 *****************************************************************/
#include <iostream>

using namespace std;

int main ()
{
	// Declaration
	int num1, num2;
	int larger;

	// Input Stataments
	cout << "Enter the first number: ";
	cin >> num1;
	cout << "Enter the second number: ";
	cin >> num2;

	// Decision
	if (num1 >=  num2)
	{
		larger = num1;
	} 
	else 
	{
		larger = num2;
	} 

	// Printing result
	cout << "The larger number is: " << larger;

	return 0;
}

/*
	Run:
	Enter the first number: 40
	Enter the second number: 25
	The larger number is: 40

	Run:
	Enter the first number: 22
	Enter the second number: 67
	The larger number is: 67
*/