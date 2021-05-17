/***************************************************************
 * A program to test overflow and underflow in doubles         *
 ***************************************************************/
#include <iostream>
#include <limits>

using namespace std;

int main ( )
{
	// Find the positive and negative maximum double
	double num1 =  +numeric_limits <double> :: max ();
	double num2 =  -numeric_limits <double> :: max ();

	// Print the positive and negative maximum double
	cout << "The value of maximum double: " << num1 << endl;
	cout << "The value of minimum double: " << num2 << endl;

	 // Multiply the values by 1000.00  
	num1 *= 1000.00;
	num2 *= 1000.00; 

	// Print the overflowed values  
	cout << "The value of num1 * 1000 after overflow: "  << num1 << endl;
	cout << "The value of num2 * 1000 after underflow: " << num2 << endl;

	return 0;
}

/*
	Run:
	The value of maximum double: 1.79769e+308
	The value of minimum double: −1.79769e+308
	The value of num1 * 1000 after overflow: INF
	The value of num2 * 1000 after underflow: −INF
*/