/***************************************************************
 * Using some stand alone literal values                       *
 ***************************************************************/
#include <iostream>

using namespace std;

int main ()
{
// Variable definition
	int x;
	unsigned long int y;
	
	// Assignments 
	x = 1456;
	y = -14567;
	
	// Outputs 
	cout << x << endl;
	cout << y << endl;
	cout << 1234 << endl; 
	cout << 143267L << endl; 
	return 0;
}

/*
	Run:
	1456  // OK.
	4294952729  // Wrong value. The variable is unsigned; the value is signed.
	1234  // OK.
	143267  // OK.
*/