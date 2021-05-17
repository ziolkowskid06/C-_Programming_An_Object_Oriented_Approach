/***************************************************************
 * The use of Boolean variables and values                     *
 ***************************************************************/
#include <iostream>

using namespace std;

int main ()
{
	// Variable definitions
	bool x = 123;
	bool y = -8;
	bool z = 0;
	bool t = -0;
	bool u = true;
	bool v = false;

	// Outputting values
	cout << "Value of x: " << x << endl;
	cout << "Value of y: " << y << endl;
	cout << "Value of z: " << z << endl;
	cout << "Value of t: " << t << endl;
	cout << "Value of u: " << u << endl;
	cout << "Value of v: " << v << endl;
	return 0;
}

/*
	Run:
	Value of x: 1  // 123 is interpreted as 1 (true)
	Value of y: 1  // -8 is interpreted as 1 (true)
	Value of z: 0  // 0 is interpreted as 0 (false)
	Value of t: 0  // -0 is interpreted as 0 (false)      
	Value of u: 1  // true is output as 1 
	Value of v: 0  // false is output as 0 
*/