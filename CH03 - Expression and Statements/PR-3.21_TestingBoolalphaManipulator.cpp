/***************************************************************
 * A program to test boolalpha manipulator for logical values  *
 ***************************************************************/
#include <iostream>

using namespace std;

int main ( )
{
	// Declaration
	bool x = true;
	bool y = false;

	// Testing values without manipulators 
	cout << "Value of x using default: " << x << endl;
	cout << "Value of y using default: " << y << endl;

	// Testing values using manipulators   
	cout << "Value of x using manipulator: " << boolalpha << x << endl;
	cout << "Value of y: " << y;

	return 0;      
}

/*
	Run:
	Value of x using default: 1
	Value of y using default: 0
	Value of x using manipulator: true
	Value of y: false
*/