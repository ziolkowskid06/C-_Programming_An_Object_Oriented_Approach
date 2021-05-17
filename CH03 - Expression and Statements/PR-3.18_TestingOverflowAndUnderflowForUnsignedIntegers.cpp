/*******************************************************************
 * A program to test overflow and underflow in unsigned integers   *
 *******************************************************************/
#include <iostream>
#include <limits>

using namespace std;

int main ( )
{
	// Create two unsigned integer of maximum and minimum values 
	unsigned int num1 = numeric_limits <unsigned int> :: max();
	unsigned int num2 = numeric_limits <unsigned int> :: min();

	// Print the maximum and minimum values
	cout << "The value of maximum unsigned int: " << num1 << endl;
	cout << "The value of minimum unsigned int: " << num2 << endl;

	// Force the integers to overflow  
	num1 += 1;
	num2 -= 1; 

	// Print the overflowed values 
	cout << "The value of num1 + 1 after overflow: "  << num1 << endl;
	cout << "The value of num2 - 1 after underflow: " << num2 << endl;

	return 0;
}

/*
	Run:
	The value of maximum unsigned int: 4294967295
	The value of minimum unsigned int: 0
	The value of num1 + 1 after overflow: 0
	The value of num2 - 1 after underflow: 4294967295
*/