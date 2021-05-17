/***************************************************************
* A program to print data in different bases (decimal,octal,   *
* and hexadecimal)                                             *
 ***************************************************************/
#include <iostream>

using namespace std;

int main ( )
{
	// Declaration of variable x
	int x = 1237;

	// Outputting x in three bases without showbase
	cout << "x in decimal: " << x << endl;
	cout << "x in octal: " << oct << x << endl;
	cout << "x in hexadecimal: "  << hex << x << endl << endl;

	// Outputting x in three bases with showbase
	cout << "x in decimal: " << x << endl;
	cout << "x in octal: "  << showbase << oct << x << endl;
	cout << "x in hexadecimal: "  << showbase << hex << x;

	return 0;      
}

/*
	Run:
	x in decimal: 1237
	x in octal: 2325                   
	x in hexadecimal: 4d5 

	x in decimal: 1237
	x in octal: 02325  			// 0 shows that the number is in octal
	x in hexadecimal: 0x4d5  	// 0x shows that the number is in hexadecimal
*/