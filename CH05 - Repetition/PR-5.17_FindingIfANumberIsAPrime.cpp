/******************************************************************
 * Use a return statement to find if a number is a prime or not.  *
 * The program returns from the main function as soon if finds    *
 * if a number is 1 or composite.                                 *
 ******************************************************************/
#include <iostream>

using namespace std;

int main ()
{
	// Declaration
	int num;

	// Input validation loop
	do
	{
		cout << "Enter a positive integer: " ;
		cin >> num;   
	} while (num <= 0);

	// Testing if the input is 1
	if (num == 1)
	{
		cout << "1 is not a composite nor a prime.";
		return 0;
	} 

	// Testing for composite
	for (int i = 2; i < num ; i++)
	{
		if (num % i == 0)
		{
			cout << num << "is composite." << endl;
			cout << "The first divisor is " << i << endl;
			return 0;
		} 
	} 

	// Output Result
	cout << num << " is a prime." << endl;

	return 0; 
}

/*
	Run:
	Enter a positive integer: 1
	1 is not a composite nor a prime.

	Run:
	Enter a positive integer: 12
	12 is composite.
	The first divisor is 2

	Run:
	Enter a positive integer: 23
	23 is a prime.

	Run:
	Enter a positive integer: 97
	97 is a prime.
*/