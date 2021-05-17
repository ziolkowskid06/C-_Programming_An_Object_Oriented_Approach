/***************************************************************
 * Shows effects of multiplicative expressions                 *
 ***************************************************************/
#include <iostream>

using namespace std;

int main ()
{
	// Multiplication
	cout << "Testing multiplication operator" << endl;
	cout << "Value of 3 * 4 = " << 3 * 4 << endl;
	cout << "Value of 2.4 * 4.1 = " << 2.4 * 4.1 << endl;
	cout << "Value of -3 * 4 = " << -3 * 4  << endl;
	
	// Division 
	cout << "Testing division operator" << endl;
	cout << "Value of 30 / 5 = " << 30 / 5  << endl;
	cout << "Value of 4 / 7 =  " << 4 / 7 << endl;
	
	// Remainder 
	cout << "Testing remainder operator" << endl;
	cout << "Value of 30 % 5 = " << 30 % 5 << endl;
	cout << "Value of 30 % 4 = " << 30 % 4 << endl;
	cout << "Value of 3 % 7 = " << 3 % 7 << endl;
	
	return 0;
}

/*
	Run:
	Testing multiplication operator
	Value of 3 * 4 = 12
	Value of 2.4 * 4.1 = 9.84
	Value of -3 * 4 = -12
	Testing division operator
	Value of 30 / 5 = 6
	Value of 4 / 7 = 0
	Testing remainder operator
	Value of 30 % 5 = 0    
	Value of 30 % 4 = 2
	Value of 3 % 7 = 3
*/