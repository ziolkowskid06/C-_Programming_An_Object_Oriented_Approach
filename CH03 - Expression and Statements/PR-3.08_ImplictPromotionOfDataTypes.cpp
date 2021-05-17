/******************************************************************
 * Testing implicit type conversion for types with no arithmetic  *
 * operations: bool, char, short, and float                       *
 ******************************************************************/
#include <iostream>
#include <typeinfo> 

using namespace std;

int main ( )
{
	// Declarations
	bool x = true;
	char y = 'A';
	short z = 14;
	float  t = 24.5;

	// Type conversion from bool to int 
	cout << "Type of x + 100: " << typeid (x + 100).name() << endl;
	cout << "Value of x + 100: " << x + 100 << endl;

	// Type conversion from char to int   
	cout << "Type of y + 1000: " << typeid (y + 1000).name() << endl;
	cout << "Value of y + 1000: " << y + 1000 << endl;

	// Type conversion from short to int   
	cout << "Type of z * 100: " << typeid (z * 10).name() << endl;
	cout << "Value of z * 100: " << z * 100 << endl;

	// Type conversion from float to double
	cout << "Type of t + 15000.2: " << typeid (t + 15000.2).name() << endl;
	cout << "Value of t + 15000.2: " << t + 15000.2;

	return 0;
} 

/*
	Run:
	Type of x + 100: i  			// Type is integer
	Value of x + 100: 101
	Type of y + 1000: i  			// Type is integer
	Value of y + 1000: 1065
	Type of z * 100: i  			// Type is integer
	Value of z * 100: 1400
	Type of t + 15000.2: d  		// Type is double
	Value of t + 15000.2: 15024.7
*/