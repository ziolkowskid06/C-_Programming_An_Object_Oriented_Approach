/***************************************************************
 * A program to input Boolean values as false or true          *
 ***************************************************************/
#include <iostream>

using namespace std;

int main ( )
{
	// Declaration
	bool flag;

	// Input value using manipulator
	cout << "Enter true or false for flag: ";
	cin >> boolalpha >> flag;

	// Output value
	cout << flag ;

	return 0;      
} 

/*
	Run:
	Enter true or false for flag: false
	0

	Run:
	Enter true or false for flag: true
	1
*/