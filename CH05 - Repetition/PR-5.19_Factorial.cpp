/***************************************************************
* It uses the idea of list multiplication to find the value    *
* of n! (factorial n)                                          *
 ***************************************************************/
#include <iostream>

using namespace std; 

int main ( )
{
	// Variable declaration
	int n;
	unsigned long long factorial;

	// Input
	do 
	{
		cout << "Enter the factorial size: ";
		cin >> n;
	} while (n < 0);

	// initialization
	factorial = 1; 

	// Processing
	for (int i = 1; i < n + 1; i++)
	{
		factorial *= i;
	}

	// Output
	cout << n << "! = " << factorial;

	return 0; 
}

/*
	Run:
	Enter the factorial size: 0
	0! = 1

	Run:
	Enter the factorial size: 4
	4! = 24

	Run:
	Enter the factorial size: 12
	12! = 479001600

	Run:
	Enter the factorial size: 22
	22! = 17196083355034583040

	Run:
	Enter the factorial size: 30
	30! = 9682165104862298112
*/