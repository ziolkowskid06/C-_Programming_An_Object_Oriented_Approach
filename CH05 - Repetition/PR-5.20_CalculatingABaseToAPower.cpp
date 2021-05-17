/***************************************************************
 * It uses the idea of multiplication to find the value of a   *
 * base to the power of an exponent (b^n).                     *
 ***************************************************************/
#include <iostream>

using namespace std; 

int main ( )
{
	// Variable declaration
	int base, exponent;
	unsigned long int power, temp;
	bool overflow;

	// Input validation for base 
	do
	{
		cout << "Enter a non-negative integer value for b: ";
		cin >> base;
	} while (base < 0);

	// Input validation for exponent 
	do
	{
		cout << "Enter a non-negative integer value for n: ";
		cin >> exponent;
	} while (exponent < 0);

	// Initialization
	power = 1; 
	temp = power;
	overflow = false;

	// Processing
	for (int i = 1; (i <= exponent) && (!overflow); i++)
	{
		power *= base;
		
		if (power/base != temp)
		{
			overflow = true; // terminate the loop
		} 

		temp = power;
	} 

	// Output
	if (overflow)
	{
		cout << "Overflow occurred! Try again with smaller b or n.";
	} 
	else
	{
		cout << base << "^" << exponent << " = " << power; 
	}

	return 0;
}

/*
	Run:
	Enter a non-negative integer value for b: 22
	Enter a non-negative integer value for n: 5
	22^5 = 5153632
	
	Run:
	Enter a non-negative integer value for b: 5
	Enter a non-negative integer value for n: 28
	Overflow occurred! Try again with smaller b or n.
*/