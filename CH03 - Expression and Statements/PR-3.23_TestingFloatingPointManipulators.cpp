/******************************************************************
 * A program to test some manipulators for floating-point types   *
 ******************************************************************/
#include <iostream>

using namespace std;

int main ( )
{
	// Declarations
	double x = 1237;
	double y = 12376745.5623;

	//Using fixed (default) and showpoint manipulator
	cout << "x in fixed_point format: " << x << endl;
	cout << "x in fixed_point format: " << showpoint << x << endl;

	//Using scientific manipulator 
	cout << "y in scientific format: " << y << scientific;

	return 0;      
}

/*
	Run:
	x in fixed_point format: 1237  		    // We have not used showpoint
	x in fixed_point format: 1237.00   	   	// We have used showpoint
	y in scientific format: 1.23767e+007
*/