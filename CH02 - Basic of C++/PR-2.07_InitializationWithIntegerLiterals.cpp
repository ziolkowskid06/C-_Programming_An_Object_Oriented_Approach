/***************************************************************
 * Using some literal values as variable initializers          *
 ***************************************************************/
#include <iostream>

using namespace std;

int main ()
{
	// Declaration and initialization 
	int x = -1245;
	unsigned int y = 1245;
	unsigned int z = -2367;
	unsigned int t = 14.56;
	
	// Outputting initialized values 
	cout << x << endl;
	cout << y << endl;
	cout << z << endl;
	cout << t;
	return 0;
}

/*
	Run:
	Value of x: -1245  // OK.
	Value of y: 1245  // OK. 
	Value of z: 4294964929  // Logical error. A negative value is changed to positive. 
	Value of t: 14  // The value is truncated.
*/