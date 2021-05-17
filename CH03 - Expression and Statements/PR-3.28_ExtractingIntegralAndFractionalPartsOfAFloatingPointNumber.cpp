/****************************************************************
 * This program shows how to extract the integral part and the  *
 * fractional part of a floating-point number                   *
 ****************************************************************/
#include <iostream>
#include <iomanip>

using namespace std;

int main ( )
{
	// Variable Declaration 
	double number;
	int intPart;
	double fractPart;

	// Input
	cout << "Enter a floating-point number: ";
	cin >> number; 

	// Processing 
	intPart = static_cast <int> (number); 
	fractPart = number - intPart;

	// Output
	cout << fixed << showpoint << setprecision (2); 
	cout << "The original number: " << number << endl; 
	cout << "The integral part: " << intPart << endl;
	cout << "The fractional part: " << fractPart;

	return 0;
} 

/*
	Run:
	Enter the floating-point number: 145.72
	The original number: 145.72
	The integral part: 145
	The fractional part: 0.72

	Run:
	Enter the floating-point number: −0.14
	The original number: −0.14
	The integral part: 0
	The fractional part: −0.14
*/