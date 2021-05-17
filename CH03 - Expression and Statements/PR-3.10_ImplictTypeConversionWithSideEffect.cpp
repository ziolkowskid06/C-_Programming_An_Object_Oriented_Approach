/***************************************************************
 * Checking type conversion in an expression of mixed types    *
 ***************************************************************/
#include <iostream>
#include <typeinfo>

using namespace std;

int main ( )
{
	// Declaration
	int x;
	double y;

	// Assignment 
	x = 23.67;
	y = 130;

	// Checking type and value of x
	cout << "Type of x = 23.67: " << typeid (x = 23.67).name ()<<endl;
	cout << "Value of x after assignment: " << x << endl << endl;

	// Checking type and value of x
	cout << "Type of y = 130: " << typeid (y = 130).name ()<<endl;
	cout << "Value of y after assignment: " << y << endl;

	return 0;
}

/*
	Run:
	Type of x = 23.67: i  				// Type is int
	Value of x after assignment: 23

	Type of y = 130: d  				// Type is double
	Value of y after assignment: 130
*/