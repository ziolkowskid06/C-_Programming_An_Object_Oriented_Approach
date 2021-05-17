/***************************************************************
 * Shows effects of addition and subtraction operators         *
 ***************************************************************/
#include <iostream>

using namespace std;

int main ()
{
	// Testing some add operations
	cout << "Some addition operations" << endl;   
	cout << "Value of 30 + 5 = " << 30 + 5 << endl;
	cout << "Value of 20.5 + 6.2 = " << 20.5 + 6.2 << endl;

	// Testing some subtract operations 
	cout << "Some subtraction operations" << endl;
	cout << "Value of 5 - 30 = " << 5 - 30 << endl;
	cout << "Value of 51.2 - 30.4 = " << 51.2 - 30.4 << endl;

	return 0;
}

/*
	Run:
	Some addition operations
	Value of 30 + 5 = 35
	Value of 20.5 + 6.2 = 26.7
	Some subtraction operations
	Value of 5 − 30 = −25
	Value of 51.2 − 30.4 = 20.8
*/