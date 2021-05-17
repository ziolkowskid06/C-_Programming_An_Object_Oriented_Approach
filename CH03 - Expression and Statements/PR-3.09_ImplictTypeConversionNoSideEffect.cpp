/******************************************************************
 * Implicit type conversion in an expression of mixed types when  *
 * there is no side effect.                                       *
 ******************************************************************/
#include <iostream>
#include <typeinfo>

using namespace std;

int main ( )
{
	// Declarations
	int x = 123;
	long y = 140;
	double z = 114.56;
	
	// Check the type and value of expression x + y 
	cout << "Type of x + y: " << typeid (x + y).name ()<<endl;
	cout << "Value of x + y: " << x + y << endl << endl;
	
	// Check the type and value of expression x + y  + z 
	cout << "Type of x + y + z: " << typeid (x + y + z).name ()<< endl;
	cout << "Value of x + y + z: " << x + y + z << endl;
	
	return 0;
}

/*
	Run:
	Type of x + y: l  			// Type is long
	Value of x + y: 263

	Type of x + y + z: d  		// Type is double
	Value of x + y + z: 377.56
*/