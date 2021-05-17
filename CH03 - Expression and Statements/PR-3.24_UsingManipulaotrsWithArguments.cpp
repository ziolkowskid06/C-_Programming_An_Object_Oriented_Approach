/*******************************************************************
 * A program to test other manipulators for floating-point types   *
 *******************************************************************/
#include <iostream>
#include <iomanip>

using namespace std;

int main ( )
{
	// Declaration
	double x = 1237234.1235;

	// Applying common formats 
	cout << fixed << setprecision(2) << showpos << setfill('*');

	// Printing x in three formats
	cout << setw(15) << left << x << endl;
	cout << setw(15) << internal << x << endl;
	cout << setw(15) << right << x;

	return 0;      
}

/*
	Run:
	+1237234.12****
	+****1237234.12
	****+1237234.12
*/